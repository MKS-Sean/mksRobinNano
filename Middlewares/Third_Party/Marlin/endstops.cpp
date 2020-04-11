/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * endstops.cpp - A singleton object to manage endstops
 */

#include "Marlin.h"
#include "cardreader.h"
#include "endstops.h"
#include "temperature.h"
#include "stepper.h"
#include "ultralcd.h"

// TEST_ENDSTOP: test the old and the current status of an endstop
#define TEST_ENDSTOP(ENDSTOP) (TEST(current_endstop_bits & old_endstop_bits, ENDSTOP))

Endstops endstops;

// public:

bool Endstops::enabled, Endstops::enabled_globally; // Initialized by settings.load()
volatile char Endstops::endstop_hit_bits; // use X_MIN, Y_MIN, Z_MIN and Z_MIN_PROBE as BIT value
#if 0
#if ENABLED(X_DUAL_ENDSTOPS) || ENABLED(Y_DUAL_ENDSTOPS) || ENABLED(Z_DUAL_ENDSTOPS)
  uint16_t
#else
  byte
#endif
#endif
uint16_t    Endstops::current_endstop_bits = 0;
uint16_t    Endstops::old_endstop_bits = 0;

#if HAS_BED_PROBE
  volatile bool Endstops::z_probe_enabled = false;
#endif

/**
 * Class and Instance Methods
 */

void Endstops::init() {

  #if HAS_X_MIN
    #if ENABLED(ENDSTOPPULLUP_XMIN)
      SET_INPUT_PULLUP(X_MIN_PIN);
    #else
      SET_INPUT(X_MIN_PIN);
    #endif
  #endif

  #if HAS_X2_MIN
    #if ENABLED(ENDSTOPPULLUP_XMIN)
      SET_INPUT_PULLUP(X2_MIN_PIN);
    #else
      SET_INPUT(X2_MIN_PIN);
    #endif
  #endif

  #if HAS_Y_MIN
    #if ENABLED(ENDSTOPPULLUP_YMIN)
      SET_INPUT_PULLUP(Y_MIN_PIN);
    #else
      SET_INPUT(Y_MIN_PIN);
    #endif
  #endif

  #if HAS_Y2_MIN
    #if ENABLED(ENDSTOPPULLUP_YMIN)
      SET_INPUT_PULLUP(Y2_MIN_PIN);
    #else
      SET_INPUT(Y2_MIN_PIN);
    #endif
  #endif

  #if HAS_Z_MIN
    #if ENABLED(ENDSTOPPULLUP_ZMIN)
      SET_INPUT_PULLUP(Z_MIN_PIN);
    #else
      SET_INPUT(Z_MIN_PIN);
    #endif
  #endif

  //#if HAS_Z2_MIN
  if((Z_DUAL_ENDSTOPS==1)&&(Z2_USE_ENDSTOP==2))
  {
    #if ENABLED(ENDSTOPPULLUP_ZMIN)
      SET_INPUT_PULLUP(Z2_MIN_PIN);
    #else
      SET_INPUT(Z2_MIN_PIN);
    #endif
  }
  //#endif

  #if HAS_X_MAX
    #if ENABLED(ENDSTOPPULLUP_XMAX)
      SET_INPUT_PULLUP(X_MAX_PIN);
    #else
      SET_INPUT(X_MAX_PIN);
    #endif
  #endif

  #if HAS_X2_MAX
    #if ENABLED(ENDSTOPPULLUP_XMAX)
      SET_INPUT_PULLUP(X2_MAX_PIN);
    #else
      SET_INPUT(X2_MAX_PIN);
    #endif
  #endif

  #if HAS_Y_MAX
    #if ENABLED(ENDSTOPPULLUP_YMAX)
      SET_INPUT_PULLUP(Y_MAX_PIN);
    #else
      SET_INPUT(Y_MAX_PIN);
    #endif
  #endif

  #if HAS_Y2_MAX
    #if ENABLED(ENDSTOPPULLUP_YMAX)
      SET_INPUT_PULLUP(Y2_MAX_PIN);
    #else
      SET_INPUT(Y2_MAX_PIN);
    #endif
  #endif

  #if HAS_Z_MAX
  if(Z_MIN_PROBE_PIN_MODE != Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)
  {  
    #if ENABLED(ENDSTOPPULLUP_ZMAX)
      SET_INPUT_PULLUP(Z_MAX_PIN);
    #else
      SET_INPUT(Z_MAX_PIN);
    #endif
  }
  #endif

  //#if HAS_Z2_MAX
  if((Z_DUAL_ENDSTOPS==1)&&(Z2_USE_ENDSTOP==1))
  {
    #if ENABLED(ENDSTOPPULLUP_ZMAX)
      SET_INPUT_PULLUP(Z2_MAX_PIN);
    #else
      SET_INPUT(Z2_MAX_PIN);
    #endif
  }
  //#endif

  //#if ENABLED(Z_MIN_PROBE_ENDSTOP)
   if(Z_MIN_PROBE_PIN_MODE == Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)  
 	{
    #if ENABLED(ENDSTOPPULLUP_ZMIN_PROBE)
      SET_INPUT_PULLUP(Z_MIN_PROBE_PIN);
    #else
      SET_INPUT(Z_MIN_PROBE_PIN);
    #endif
   	}
  //#endif

} // Endstops::init

void Endstops::report_state() {
  if (endstop_hit_bits) {
    #if ENABLED(ULTRA_LCD)
      char chrX = ' ', chrY = ' ', chrZ = ' ', chrP = ' ';
      #define _SET_STOP_CHAR(A,C) (chr## A = C)
    #else
      #define _SET_STOP_CHAR(A,C) ;
    #endif

    #define _ENDSTOP_HIT_ECHO(A,C) do{ \
      SERIAL_ECHOPAIR(" " STRINGIFY(A) ":", stepper.triggered_position_mm(A ##_AXIS)); \
      _SET_STOP_CHAR(A,C); }while(0)

    #define _ENDSTOP_HIT_TEST(A,C) \
      if (TEST(endstop_hit_bits, A ##_MIN) || TEST(endstop_hit_bits, A ##_MAX)) \
        _ENDSTOP_HIT_ECHO(A,C)

    #define ENDSTOP_HIT_TEST_X() _ENDSTOP_HIT_TEST(X,'X')
    #define ENDSTOP_HIT_TEST_Y() _ENDSTOP_HIT_TEST(Y,'Y')
    #define ENDSTOP_HIT_TEST_Z() _ENDSTOP_HIT_TEST(Z,'Z')

    SERIAL_ECHO_START();
    SERIAL_ECHOPGM(MSG_ENDSTOPS_HIT);
    ENDSTOP_HIT_TEST_X();
    ENDSTOP_HIT_TEST_Y();
    ENDSTOP_HIT_TEST_Z();

    //#if ENABLED(Z_MIN_PROBE_ENDSTOP)
	 if(Z_MIN_PROBE_PIN_MODE == Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)
	 {	
      #define P_AXIS Z_AXIS
      if (TEST(endstop_hit_bits, Z_MIN_PROBE)) _ENDSTOP_HIT_ECHO(P, 'P');
	 }
    //#endif
	
    SERIAL_EOL();

    #if ENABLED(ULTRA_LCD)
      lcd_status_printf_P(0, PSTR(MSG_LCD_ENDSTOPS " %c %c %c %c"), chrX, chrY, chrZ, chrP);
    #endif

    hit_on_purpose();

    #if ENABLED(ABORT_ON_ENDSTOP_HIT_FEATURE_ENABLED) && ENABLED(SDSUPPORT)
      if (stepper.abort_on_endstop_hit) {
        card.sdprinting = false;
        card.closefile();
        quickstop_stepper();
        thermalManager.disable_all_heaters(); // switch off all heaters.
      }
    #endif
  }
} // Endstops::report_state

void Endstops::M119() {
  SERIAL_PROTOCOLLNPGM(MSG_M119_REPORT);
  #define ES_REPORT(AXIS) do{ \
    SERIAL_PROTOCOLPGM(MSG_##AXIS); \
    SERIAL_PROTOCOLLN(((READ(AXIS##_PIN)^AXIS##_ENDSTOP_INVERTING) ? MSG_ENDSTOP_HIT : MSG_ENDSTOP_OPEN)); \
  }while(0)
  #if HAS_X_MIN
  if(mksCfg.use_xmin_plug){
    ES_REPORT(X_MIN);
  	}
  #endif
  #if HAS_X2_MIN
    ES_REPORT(X2_MIN);
  #endif
  #if HAS_X_MAX
  if(mksCfg.use_xmax_plug){
    ES_REPORT(X_MAX);
  	}
  #endif
  #if HAS_X2_MAX
    ES_REPORT(X2_MAX);
  #endif
  #if HAS_Y_MIN
  if(mksCfg.use_ymin_plug){  
    ES_REPORT(Y_MIN);
  	}
  #endif
  #if HAS_Y2_MIN
    ES_REPORT(Y2_MIN);
  #endif
  #if HAS_Y_MAX
if(mksCfg.use_ymax_plug){   
    ES_REPORT(Y_MAX);
}
  #endif
  #if HAS_Y2_MAX
    ES_REPORT(Y2_MAX);
  #endif
  #if HAS_Z_MIN
if(mksCfg.use_zmin_plug){  
    ES_REPORT(Z_MIN);
}
  #endif
  #if HAS_Z2_MIN
    ES_REPORT(Z2_MIN);
  #endif
  #if HAS_Z_MAX
	if(Z_MIN_PROBE_PIN_MODE != Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)  
	{
		if(mksCfg.use_zmax_plug)
		{   
    		ES_REPORT(Z_MAX);
		}
	}
  #endif
  #if HAS_Z2_MAX
    ES_REPORT(Z2_MAX);
  #endif
  //#if ENABLED(Z_MIN_PROBE_ENDSTOP)
    if(Z_MIN_PROBE_PIN_MODE == Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)
   	{
    	SERIAL_PROTOCOLPGM(MSG_Z_PROBE);
    	SERIAL_PROTOCOLLN(((READ(Z_MIN_PROBE_PIN)^Z_MIN_PROBE_ENDSTOP_INVERTING) ? MSG_ENDSTOP_HIT : MSG_ENDSTOP_OPEN));
    }
  //#endif
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    SERIAL_PROTOCOLPGM(MSG_FILAMENT_RUNOUT_SENSOR);
    SERIAL_PROTOCOLLN(((READ(FIL_RUNOUT_PIN)^FIL_RUNOUT_INVERTING) ? MSG_ENDSTOP_HIT : MSG_ENDSTOP_OPEN));
  #endif
} // Endstops::M119

#if ENABLED(X_DUAL_ENDSTOPS)
  void Endstops::test_dual_x_endstops(const EndstopEnum es1, const EndstopEnum es2) {
    byte x_test = TEST_ENDSTOP(es1) | (TEST_ENDSTOP(es2) << 1); // bit 0 for X, bit 1 for X2
    if (x_test && stepper.current_block->steps[X_AXIS] > 0) {
      SBI(endstop_hit_bits, X_MIN);
      if (!stepper.performing_homing || (x_test == 0x3))  //if not performing home or if both endstops were trigged during homing...
        stepper.kill_current_block();
    }
  }
#endif
#if ENABLED(Y_DUAL_ENDSTOPS)
  void Endstops::test_dual_y_endstops(const EndstopEnum es1, const EndstopEnum es2) {
    byte y_test = TEST_ENDSTOP(es1) | (TEST_ENDSTOP(es2) << 1); // bit 0 for Y, bit 1 for Y2
    if (y_test && stepper.current_block->steps[Y_AXIS] > 0) {
      SBI(endstop_hit_bits, Y_MIN);
      if (!stepper.performing_homing || (y_test == 0x3))  //if not performing home or if both endstops were trigged during homing...
        stepper.kill_current_block();
    }
  }
#endif
#if 1//ENABLED(Z_DUAL_ENDSTOPS)
  void Endstops::test_dual_z_endstops(const EndstopEnum es1, const EndstopEnum es2) {
    byte z_test = TEST_ENDSTOP(es1) | (TEST_ENDSTOP(es2) << 1); // bit 0 for Z, bit 1 for Z2
    if (z_test && stepper.current_block->steps[Z_AXIS] > 0) {
      SBI(endstop_hit_bits, Z_MIN);
      if (!stepper.performing_homing || (z_test == 0x3))  //if not performing home or if both endstops were trigged during homing...
        stepper.kill_current_block();
    }
  }
#endif

#if 1//IS_CORE
  #define S_(N) stepper.current_block->steps[CORE_AXIS_##N]
  #define D_(N) stepper.motor_direction(CORE_AXIS_##N)
#endif

bool  X_MOVE_TEST()
{
    bool D_temp;
	if(MACHINETPYE & CORE_IS_XY || MACHINETPYE & CORE_IS_XZ)
	{
		if(MACHINETPYE & COREXY || MACHINETPYE & COREXZ)
		{
	          if(MACHINETPYE & CORE_IS_XY)
	            D_temp = (stepper.motor_direction(A_AXIS) == stepper.motor_direction(B_AXIS));
	          else if(MACHINETPYE & CORE_IS_XZ)
	            D_temp = (stepper.motor_direction(A_AXIS) == stepper.motor_direction(C_AXIS));
	          else
	            D_temp = (stepper.motor_direction(B_AXIS) == stepper.motor_direction(C_AXIS));
	          return  ( S_(1) != S_(2) || (S_(1) > 0 && D_temp) );
		}
		else
		{
              if(MACHINETPYE & CORE_IS_XY)
                D_temp = (stepper.motor_direction(A_AXIS) != stepper.motor_direction(B_AXIS));
              else if(MACHINETPYE & CORE_IS_XZ)
                D_temp = (stepper.motor_direction(A_AXIS) != stepper.motor_direction(C_AXIS));
              else
                D_temp = (stepper.motor_direction(B_AXIS) != stepper.motor_direction(C_AXIS));
              return  ( S_(1) != S_(2) || (S_(1) > 0 && D_temp) );
		}
	}
	else
	{
		return (stepper.current_block->steps[X_AXIS] > 0);
	}
}
AxisEnum  X_AXIS_HEAD()
{
	if(MACHINETPYE & CORE_IS_XY || MACHINETPYE & CORE_IS_XZ)
		return X_HEAD;
	else
		return X_AXIS;
}

bool Y_MOVE_TEST()
 {
    bool D_temp;

	if(MACHINETPYE & CORE_IS_XY || MACHINETPYE & CORE_IS_YZ)
	{
		if(MACHINETPYE & COREYX || MACHINETPYE & COREYZ)
		{
	          if(MACHINETPYE & CORE_IS_XY)
	            D_temp = (stepper.motor_direction(A_AXIS) == stepper.motor_direction(B_AXIS));
	          else if(MACHINETPYE & CORE_IS_XZ)
	            D_temp = (stepper.motor_direction(A_AXIS) == stepper.motor_direction(C_AXIS));
	          else
	            D_temp = (stepper.motor_direction(B_AXIS) == stepper.motor_direction(C_AXIS));
                          
			  return( S_(1) != S_(2) || (S_(1) > 0 && D_temp) );
		}
		else
		{
              if(MACHINETPYE & CORE_IS_XY)
                D_temp = (stepper.motor_direction(A_AXIS) != stepper.motor_direction(B_AXIS));
              else if(MACHINETPYE & CORE_IS_XZ)
                D_temp = (stepper.motor_direction(A_AXIS) != stepper.motor_direction(C_AXIS));
              else
                D_temp = (stepper.motor_direction(B_AXIS) != stepper.motor_direction(C_AXIS));
                          
			  return( S_(1) != S_(2) || (S_(1) > 0 && D_temp) );
		}
		
	}
	else
	{
		return(stepper.current_block->steps[Y_AXIS] > 0);
	}
  }
  
  AxisEnum  Y_AXIS_HEAD()
  {
	  if(MACHINETPYE & CORE_IS_XY || MACHINETPYE & CORE_IS_YZ)
		  return Y_HEAD;
	  else
		  return Y_AXIS;
  }
 /*----------------------------------------*/
  bool	Z_MOVE_TEST()
  {
    bool D_temp;

	if(MACHINETPYE & CORE_IS_XZ || MACHINETPYE & CORE_IS_YZ)
	{
		if(MACHINETPYE & COREZX || MACHINETPYE & COREZY)
		{
		      if(MACHINETPYE & CORE_IS_XY)
		        D_temp = (stepper.motor_direction(A_AXIS) == stepper.motor_direction(B_AXIS));
		      else if(MACHINETPYE & CORE_IS_XZ)
		        D_temp = (stepper.motor_direction(A_AXIS) == stepper.motor_direction(C_AXIS));
		      else
		        D_temp = (stepper.motor_direction(B_AXIS) == stepper.motor_direction(C_AXIS));
                          
			  return( S_(1) != S_(2) || (S_(1) > 0 && D_temp) );
		}
		else
		{
	          if(MACHINETPYE & CORE_IS_XY)
	            D_temp = (stepper.motor_direction(A_AXIS) != stepper.motor_direction(B_AXIS));
	          else if(MACHINETPYE & CORE_IS_XZ)
	            D_temp = (stepper.motor_direction(A_AXIS) != stepper.motor_direction(C_AXIS));
	          else
	            D_temp = (stepper.motor_direction(B_AXIS) != stepper.motor_direction(C_AXIS));
                          
			  return( S_(1) != S_(2) || (S_(1) > 0 && D_temp) );
		}
		
	}
	else
	{
		return(stepper.current_block->steps[Z_AXIS] > 0);
	}
  }
  
  AxisEnum  Z_AXIS_HEAD()
  {
    if(MACHINETPYE & CORE_IS_XZ || MACHINETPYE & CORE_IS_YZ)
		  return Z_HEAD;
	  else
		  return Z_AXIS;
  }

  /*----------------------------------------*/  

// Check endstops - Called from ISR!
void Endstops::update() {

  #define _ENDSTOP(AXIS, MINMAX) AXIS ##_## MINMAX
  #define _ENDSTOP_PIN(AXIS, MINMAX) AXIS ##_## MINMAX ##_PIN
  #define _ENDSTOP_INVERTING(AXIS, MINMAX) AXIS ##_## MINMAX ##_ENDSTOP_INVERTING
  #define _ENDSTOP_HIT(AXIS, MINMAX) SBI(endstop_hit_bits, _ENDSTOP(AXIS, MINMAX))

  // UPDATE_ENDSTOP_BIT: set the current endstop bits for an endstop to its status
  //#define UPDATE_ENDSTOP_BIT(AXIS, MINMAX) SET_BIT(current_endstop_bits, _ENDSTOP(AXIS, MINMAX), (READ(_ENDSTOP_PIN(AXIS, MINMAX)) != _ENDSTOP_INVERTING(AXIS, MINMAX)))
     #define UPDATE_ENDSTOP_BIT(AXIS, MINMAX) __SET_BIT(current_endstop_bits, _ENDSTOP(AXIS, MINMAX), (READ(_ENDSTOP_PIN(AXIS, MINMAX)) != _ENDSTOP_INVERTING(AXIS, MINMAX)))

     #define UPDATE_ENDSTOP_BIT_Z2_MIN (current_endstop_bits)^= ((-(READ(Z2_MIN_PIN)!=Z2_MIN_ENDSTOP_INVERTING))^(current_endstop_bits)) & (_BV(Z2_MAX))
     #define UPDATE_ENDSTOP_BIT_Z2_MAX (current_endstop_bits)^= ((-(READ(Z2_MAX_PIN)!=Z2_MAX_ENDSTOP_INVERTING))^(current_endstop_bits)) & (_BV(Z2_MIN))


  // COPY_BIT: copy the value of SRC_BIT to DST_BIT in DST
  //#define COPY_BIT(DST, SRC_BIT, DST_BIT) SET_BIT(DST, DST_BIT, TEST(DST, SRC_BIT))
	#define COPY_BIT(bits, COPY_BIT, BIT) __SET_BIT(bits, BIT, TEST(bits, COPY_BIT))

  #define UPDATE_ENDSTOP(AXIS,MINMAX) do { \
      UPDATE_ENDSTOP_BIT(AXIS, MINMAX); \
      if (TEST_ENDSTOP(_ENDSTOP(AXIS, MINMAX)) && stepper.current_block->steps[_AXIS(AXIS)] > 0) { \
        _ENDSTOP_HIT(AXIS, MINMAX); \
        stepper.endstop_triggered(_AXIS(AXIS)); \
      } \
    }while(0)

  //#if ENABLED(G38_PROBE_TARGET) && PIN_EXISTS(Z_MIN_PROBE) && !(CORE_IS_XY || CORE_IS_XZ)
	#if ENABLED(G38_PROBE_TARGET) && PIN_EXISTS(Z_MIN_PROBE)	//mks_delta
	
    // If G38 command is active check Z_MIN_PROBE for ALL movement
    if (G38_move) {
      UPDATE_ENDSTOP_BIT(Z, MIN_PROBE);
      if (TEST_ENDSTOP(_ENDSTOP(Z, MIN_PROBE))) {
        if      (stepper.current_block->steps[_AXIS(X)] > 0) { _ENDSTOP_HIT(X, MIN); stepper.endstop_triggered(_AXIS(X)); }
        else if (stepper.current_block->steps[_AXIS(Y)] > 0) { _ENDSTOP_HIT(Y, MIN); stepper.endstop_triggered(_AXIS(Y)); }
        else if (stepper.current_block->steps[_AXIS(Z)] > 0) { _ENDSTOP_HIT(Z, MIN); stepper.endstop_triggered(_AXIS(Z)); }
        G38_endstop_hit = true;
      }
    }
  #endif

  /**
   * Define conditions for checking endstops
   */
#if 0
  #if IS_CORE
    #define S_(N) stepper.current_block->steps[CORE_AXIS_##N]
    #define D_(N) stepper.motor_direction(CORE_AXIS_##N)
  #endif

  #if CORE_IS_XY || CORE_IS_XZ
    /**
     * Head direction in -X axis for CoreXY and CoreXZ bots.
     *
     * If steps differ, both axes are moving.
     * If DeltaA == -DeltaB, the movement is only in the 2nd axis (Y or Z, handled below)
     * If DeltaA ==  DeltaB, the movement is only in the 1st axis (X)
     */
    #if ENABLED(COREXY) || ENABLED(COREXZ)
      #define X_CMP ==
    #else
      #define X_CMP !=
    #endif
    #define X_MOVE_TEST ( S_(1) != S_(2) || (S_(1) > 0 && D_(1) X_CMP D_(2)) )
    #define X_AXIS_HEAD X_HEAD
  #else
    #define X_MOVE_TEST stepper.current_block->steps[X_AXIS] > 0
    #define X_AXIS_HEAD X_AXIS
  #endif

  #if CORE_IS_XY || CORE_IS_YZ
    /**
     * Head direction in -Y axis for CoreXY / CoreYZ bots.
     *
     * If steps differ, both axes are moving
     * If DeltaA ==  DeltaB, the movement is only in the 1st axis (X or Y)
     * If DeltaA == -DeltaB, the movement is only in the 2nd axis (Y or Z)
     */
    #if ENABLED(COREYX) || ENABLED(COREYZ)
      #define Y_CMP ==
    #else
      #define Y_CMP !=
    #endif
    #define Y_MOVE_TEST ( S_(1) != S_(2) || (S_(1) > 0 && D_(1) Y_CMP D_(2)) )
    #define Y_AXIS_HEAD Y_HEAD
  #else
    #define Y_MOVE_TEST stepper.current_block->steps[Y_AXIS] > 0
    #define Y_AXIS_HEAD Y_AXIS
  #endif

  #if CORE_IS_XZ || CORE_IS_YZ
    /**
     * Head direction in -Z axis for CoreXZ or CoreYZ bots.
     *
     * If steps differ, both axes are moving
     * If DeltaA ==  DeltaB, the movement is only in the 1st axis (X or Y, already handled above)
     * If DeltaA == -DeltaB, the movement is only in the 2nd axis (Z)
     */
    #if ENABLED(COREZX) || ENABLED(COREZY)
      #define Z_CMP ==
    #else
      #define Z_CMP !=
    #endif
    #define Z_MOVE_TEST ( S_(1) != S_(2) || (S_(1) > 0 && D_(1) Z_CMP D_(2)) )
    #define Z_AXIS_HEAD Z_HEAD
  #else
    #define Z_MOVE_TEST stepper.current_block->steps[Z_AXIS] > 0
    #define Z_AXIS_HEAD Z_AXIS
  #endif
#endif

  // With Dual X, endstops are only checked in the homing direction for the active extruder
  #if ENABLED(DUAL_X_CARRIAGE)
    #define E0_ACTIVE stepper.current_block->active_extruder == 0
    #define X_MIN_TEST ((X_HOME_DIR < 0 && E0_ACTIVE) || (X2_HOME_DIR < 0 && !E0_ACTIVE))
    #define X_MAX_TEST ((X_HOME_DIR > 0 && E0_ACTIVE) || (X2_HOME_DIR > 0 && !E0_ACTIVE))
  #else
    #define X_MIN_TEST true
    #define X_MAX_TEST true
  #endif

  /**
   * Check and update endstops according to conditions
   */
  if (X_MOVE_TEST()) {
    if (stepper.motor_direction(X_AXIS_HEAD())) { // -direction
      #if HAS_X_MIN
        #if ENABLED(X_DUAL_ENDSTOPS)
          UPDATE_ENDSTOP_BIT(X, MIN);
          #if HAS_X2_MIN
            UPDATE_ENDSTOP_BIT(X2, MIN);
          #else
            COPY_BIT(current_endstop_bits, X_MIN, X2_MIN);
          #endif
          test_dual_x_endstops(X_MIN, X2_MIN);
        #else
		if(mksCfg.use_xmin_plug)
          if (X_MIN_TEST) UPDATE_ENDSTOP(X, MIN);
        #endif
      #endif
    }
    else { // +direction
      #if HAS_X_MAX
        #if ENABLED(X_DUAL_ENDSTOPS)
          UPDATE_ENDSTOP_BIT(X, MAX);
          #if HAS_X2_MAX
            UPDATE_ENDSTOP_BIT(X2, MAX);
          #else
            COPY_BIT(current_endstop_bits, X_MAX, X2_MAX);
          #endif
          test_dual_x_endstops(X_MAX, X2_MAX);
        #else
		if(mksCfg.use_xmax_plug)
          if (X_MIN_TEST) UPDATE_ENDSTOP(X, MAX);
        #endif

      #endif
    }
  }

  if (Y_MOVE_TEST()) {
    if (stepper.motor_direction(Y_AXIS_HEAD())) { // -direction
      #if HAS_Y_MIN
        #if ENABLED(Y_DUAL_ENDSTOPS)
          UPDATE_ENDSTOP_BIT(Y, MIN);
          #if HAS_Y2_MIN
            UPDATE_ENDSTOP_BIT(Y2, MIN);
          #else
            COPY_BIT(current_endstop_bits, Y_MIN, Y2_MIN);
          #endif
          test_dual_y_endstops(Y_MIN, Y2_MIN);
        #else
		if(mksCfg.use_ymin_plug)
          UPDATE_ENDSTOP(Y, MIN);
        #endif
      #endif
    }
    else { // +direction
      #if HAS_Y_MAX
        #if ENABLED(Y_DUAL_ENDSTOPS)
          UPDATE_ENDSTOP_BIT(Y, MAX);
          #if HAS_Y2_MAX
            UPDATE_ENDSTOP_BIT(Y2, MAX);
          #else
            COPY_BIT(current_endstop_bits, Y_MAX, Y2_MAX);
          #endif
          test_dual_y_endstops(Y_MAX, Y2_MAX);
        #else
		if(mksCfg.use_ymax_plug)
          UPDATE_ENDSTOP(Y, MAX);
        #endif
      #endif
    }
  }

  if (Z_MOVE_TEST()) {
    if (stepper.motor_direction(Z_AXIS_HEAD())) { // Z -direction. Gantry down, bed up.
      #if HAS_Z_MIN
        //#if ENABLED(Z_DUAL_ENDSTOPS)
        if(Z_DUAL_ENDSTOPS==1)
        {
          UPDATE_ENDSTOP_BIT(Z, MIN);
          //#if HAS_Z2_MIN
          if(mksCfg.z2_endstop==1)
          {
            //UPDATE_ENDSTOP_BIT(Z2, MIN);
            UPDATE_ENDSTOP_BIT_Z2_MAX;
          }
          //#else
          else
          {
            COPY_BIT(current_endstop_bits, Z_MIN, Z2_MIN);
          }
          //#endif
          test_dual_z_endstops(Z_MIN, Z2_MIN);
        }
        //#else
        else
        {
         // #if ENABLED(Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN)
         if(Z_MIN_PROBE_PIN_MODE == Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN)
         {
            if (z_probe_enabled) UPDATE_ENDSTOP(Z, MIN);
         }
          //#else
          else
          {
            UPDATE_ENDSTOP(Z, MIN);
          }
          //#endif
        }
        //#endif
      #endif

      // When closing the gap check the enabled probe
      //#if ENABLED(Z_MIN_PROBE_ENDSTOP)
      if(Z_MIN_PROBE_PIN_MODE == Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)
      {
        if (z_probe_enabled) {
          UPDATE_ENDSTOP(Z, MIN_PROBE);
          if (TEST_ENDSTOP(Z_MIN_PROBE)) SBI(endstop_hit_bits, Z_MIN_PROBE);
        }
      }
      //#endif
    }
    else { // Z +direction. Gantry up, bed down.
      #if HAS_Z_MAX
	  	 if(Z_MIN_PROBE_PIN_MODE != Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)  
	  	{
		  	if(mksCfg.use_zmax_plug)
	      	{
		        // Check both Z dual endstops
		        //#if ENABLED(Z_DUAL_ENDSTOPS)
		        if(Z_DUAL_ENDSTOPS==1)
                {      
		          UPDATE_ENDSTOP_BIT(Z, MAX);
		          //#if HAS_Z2_MAX
                  if(mksCfg.z2_endstop!=0)
			UPDATE_ENDSTOP_BIT(Z2, MAX);
                    //UPDATE_ENDSTOP_BIT_Z2_MIN;
                   else
		          //#else
		            COPY_BIT(current_endstop_bits, Z_MAX, Z2_MAX);
		          //#endif
		          test_dual_z_endstops(Z_MAX, Z2_MAX);
		        // If this pin is not hijacked for the bed probe
		        // then it belongs to the Z endstop
		        //#elif DISABLED(Z_MIN_PROBE_ENDSTOP) || Z_MAX_PIN != Z_MIN_PROBE_PIN
                }
		        //#else
		        else
                {      
				  if(Z_MIN_PROBE_PIN_MODE != Z_MIN_PROBE_USES_Z_MAX_ENDSTOP_PIN)		//mks
		          	UPDATE_ENDSTOP(Z, MAX);
                }
		        //#endif
	  		}
	  	 }
      #endif
    }
  }

  old_endstop_bits = current_endstop_bits;

} // Endstops::update()
