/**
  ******************************************************************************
  * @file    Middlewares/Third_Party/Marlin/Marlin_export.h
  * @author  IPC Rennes
  * @version V1.0.0
  * @date    April 09, 2015
  * @brief   Header for exportations of Marlin functions to STM32 environment
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */


#ifndef MARLIN_EXPORT_H
#define MARLIN_EXPORT_H

#include <inttypes.h>

#ifdef __cplusplus
 extern "C" {
#endif 

void setup(void);
void loop(void);
void IsrStepperHandler(void);
void IsrTemperatureHandler(void);
void TimerStService(void);



#ifndef M_PI
#define M_PI 3.141592653589793238462643
#endif

#ifndef PGM_P
#define PGM_P  const char *
#endif

#define pgm_read_byte(addr) (*(const unsigned char *)(addr))
#define pgm_read_word_near(addr) (*(const uint16_t *)(addr))

typedef uint8_t  boolean;
typedef uint8_t  byte;



#define LOW   GPIO_PIN_RESET
#define HIGH  GPIO_PIN_SET
//Delay in ms
#define _delay_ms(x)      HAL_Delay(x)   
#define delay(x)      HAL_Delay(x)   
#define millis(x)         HAL_GetTick(x)
#define WRITE(x,y) HAL_GPIO_WritePin(gArrayGpioPort[x],gArrayGpioPin[x],(GPIO_PinState)y)
#define READ(x) HAL_GPIO_ReadPin(gArrayGpioPort[x],gArrayGpioPin[x])
#define INPUT   (0)
#define OUTPUT  (1)
#define pinMode(x,y)    {}    //not handled 
#define OUT_WRITE(IO, v) { SET_OUTPUT(IO); WRITE(IO, v); }

#define digitalWrite(x,y) ((x) > (-1))?(HAL_GPIO_WritePin(gArrayGpioPort[x],gArrayGpioPin[x],(GPIO_PinState)y)):(HAL_GPIO_WritePin(0,0,(GPIO_PinState)y))//will generate an assert
#define digitalRead(x)   ((x) > (-1))?(HAL_GPIO_ReadPin(gArrayGpioPort[x], gArrayGpioPin[x])):0
#define constrain(x, a, b)  ((x) < (a))?(a):(((x) > (b))? (b) : (x))
#define SET_OUTPUT(x)
#define SET_INPUT(x)
#define SET_INPUT_PULLUP(x)
#define PROGMEM
#define MCUSR 0
#define strcpy_P strcpy
#define strstr_P strstr
#define sprintf_P sprintf
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
//#define sq(x)  (x*x)  /*--mks--*/
#define sq(x)  pow(x,2)
#define _BV(bit) (1<<(bit))

#define square(x) ((x) * (x))
#define cli()       __ASM volatile("cpsid i")	//__disable_irq()
#define sei()       __ASM volatile("cpsie i")	//__enable_irq()
#define OCR1A  htim2.Instance->ARR
#define TCNT1  htim2.Instance->CNT

#if defined(MKS_ROBIN_LITE) || defined(MKS_ROBIN) || defined(MKS_ROBINMINI) || defined(MKS_ROBIN_NANO)
  #define F_CPU()	72000000
#elif defined(MKS_ROBINPRO) || defined(MKS_ROBIN2) || defined(MKS_ROBIN2MINI)
  #define F_CPU()	168000000
#endif  




#define map(x,in_min,in_max,out_min,out_max) ((long)(((long)(x) - (long)(in_min)) * ((long)(out_max) - (long)(out_min)) / ((long)(in_max) - (long)(in_min)) + (long)(out_min)))

#define clockCyclesPerMicrosecond() ( F_CPU() / 1000000L )

#ifdef __cplusplus
}
#endif



#endif
