///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V7.10.1.6676/W32 for ARM       14/Feb/2020  17:06:03
// Copyright 1999-2014 IAR Systems AB.
//
//    Cpu mode     =  thumb
//    Endian       =  little
//    Source file  =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Drivers\STM32F1xx_HAL_Driver\Src\stm32f1xx_hal_pwr.c
//    Command line =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Drivers\STM32F1xx_HAL_Driver\Src\stm32f1xx_hal_pwr.c
//        -D USE_HAL_DRIVER -D STM32F103xE -D STM32F10X_HD -D USE_HAL_LIB -D
//        MKS_ROBIN_NANO -D TFT35 -lC
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\
//        -lA
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\
//        --diag_suppress Pa050 -o
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/Obj\
//        --no_unroll --no_inline --no_tbaa --no_scheduling --debug
//        --endian=little --cpu=Cortex-M3 -e --char_is_signed --fpu=None
//        --dlib_config "C:\Program Files (x86)\IAR Systems\Embedded Workbench
//        7.0\arm\INC\c\DLib_Config_Full.h" -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Src\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/STM32F1xx_HAL_Driver/Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/Third_Party/FatFs/src/drivers\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/ST/STM32_USB_Host_Library/Core/Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/CMSIS/Device/ST/STM32F1xx/Include\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/Third_Party/FatFs/src\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/CMSIS/Include\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/variant\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/Components/at24cxx\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/Components/w25qxx\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/Components/lcd\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/STM32F10x_StdPeriph_Driver/inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/libstmf4/include\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/arduino/stm32/cores/arduino\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../User/ui\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../User/ui/Multi_language\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../User/ui/QRENCODE\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\..\Middlewares\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\..\Middlewares\GUI\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\..\Middlewares\Third_Party\Marlin\
//        -Om --use_c++_inline -I "C:\Program Files (x86)\IAR Systems\Embedded
//        Workbench 7.0\arm\CMSIS\Include\"
//    List file    =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\stm32f1xx_hal_pwr.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_file_descriptor", "1"
        AAPCS BASE,INTERWORK
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        PUBLIC HAL_PWR_ConfigPVD
        PUBLIC HAL_PWR_DeInit
        PUBLIC HAL_PWR_DisableBkUpAccess
        PUBLIC HAL_PWR_DisablePVD
        PUBLIC HAL_PWR_DisableSEVOnPend
        PUBLIC HAL_PWR_DisableSleepOnExit
        PUBLIC HAL_PWR_DisableWakeUpPin
        PUBLIC HAL_PWR_EnableBkUpAccess
        PUBLIC HAL_PWR_EnablePVD
        PUBLIC HAL_PWR_EnableSEVOnPend
        PUBLIC HAL_PWR_EnableSleepOnExit
        PUBLIC HAL_PWR_EnableWakeUpPin
        PUBLIC HAL_PWR_EnterSLEEPMode
        PUBLIC HAL_PWR_EnterSTANDBYMode
        PUBLIC HAL_PWR_EnterSTOPMode
        PUBWEAK HAL_PWR_PVDCallback
        PUBLIC HAL_PWR_PVD_IRQHandler
        
          CFI Names cfiNames0
          CFI StackFrame CFA R13 DATA
          CFI Resource R0:32, R1:32, R2:32, R3:32, R4:32, R5:32, R6:32, R7:32
          CFI Resource R8:32, R9:32, R10:32, R11:32, R12:32, R13:32, R14:32
          CFI EndNames cfiNames0
        
          CFI Common cfiCommon0 Using cfiNames0
          CFI CodeAlign 2
          CFI DataAlign 4
          CFI ReturnAddress R14 CODE
          CFI CFA R13+0
          CFI R0 Undefined
          CFI R1 Undefined
          CFI R2 Undefined
          CFI R3 Undefined
          CFI R4 SameValue
          CFI R5 SameValue
          CFI R6 SameValue
          CFI R7 SameValue
          CFI R8 SameValue
          CFI R9 SameValue
          CFI R10 SameValue
          CFI R11 SameValue
          CFI R12 Undefined
          CFI R14 SameValue
          CFI EndCommon cfiCommon0
        
// E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Drivers\STM32F1xx_HAL_Driver\Src\stm32f1xx_hal_pwr.c
//    1 /**
//    2   ******************************************************************************
//    3   * @file    stm32f1xx_hal_pwr.c
//    4   * @author  MCD Application Team
//    5   * @version V1.0.4
//    6   * @date    29-April-2016
//    7   * @brief   PWR HAL module driver.
//    8   *
//    9   *          This file provides firmware functions to manage the following
//   10   *          functionalities of the Power Controller (PWR) peripheral:
//   11   *           + Initialization/de-initialization functions
//   12   *           + Peripheral Control functions 
//   13   *
//   14   ******************************************************************************
//   15   * @attention
//   16   *
//   17   * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
//   18   *
//   19   * Redistribution and use in source and binary forms, with or without modification,
//   20   * are permitted provided that the following conditions are met:
//   21   *   1. Redistributions of source code must retain the above copyright notice,
//   22   *      this list of conditions and the following disclaimer.
//   23   *   2. Redistributions in binary form must reproduce the above copyright notice,
//   24   *      this list of conditions and the following disclaimer in the documentation
//   25   *      and/or other materials provided with the distribution.
//   26   *   3. Neither the name of STMicroelectronics nor the names of its contributors
//   27   *      may be used to endorse or promote products derived from this software
//   28   *      without specific prior written permission.
//   29   *
//   30   * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//   31   * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//   32   * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//   33   * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
//   34   * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
//   35   * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//   36   * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//   37   * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//   38   * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
//   39   * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//   40   *
//   41   ******************************************************************************
//   42   */
//   43 
//   44 /* Includes ------------------------------------------------------------------*/
//   45 #include "stm32f1xx_hal.h"
//   46 
//   47 /** @addtogroup STM32F1xx_HAL_Driver
//   48   * @{
//   49   */
//   50 
//   51 /** @defgroup PWR PWR
//   52   * @brief    PWR HAL module driver
//   53   * @{
//   54   */
//   55 
//   56 #ifdef HAL_PWR_MODULE_ENABLED
//   57 
//   58 /* Private typedef -----------------------------------------------------------*/
//   59 /* Private define ------------------------------------------------------------*/
//   60 
//   61 /** @defgroup PWR_Private_Constants PWR Private Constants
//   62   * @{
//   63   */
//   64   
//   65 /** @defgroup PWR_PVD_Mode_Mask PWR PVD Mode Mask
//   66   * @{
//   67   */ 
//   68 #define PVD_MODE_IT               ((uint32_t)0x00010000)
//   69 #define PVD_MODE_EVT              ((uint32_t)0x00020000)
//   70 #define PVD_RISING_EDGE           ((uint32_t)0x00000001)
//   71 #define PVD_FALLING_EDGE          ((uint32_t)0x00000002)
//   72 /**
//   73   * @}
//   74   */
//   75 
//   76 
//   77 /** @defgroup PWR_register_alias_address PWR Register alias address
//   78   * @{
//   79   */ 
//   80 /* ------------- PWR registers bit address in the alias region ---------------*/
//   81 #define PWR_OFFSET               (PWR_BASE - PERIPH_BASE)
//   82 #define PWR_CR_OFFSET            0x00
//   83 #define PWR_CSR_OFFSET           0x04
//   84 #define PWR_CR_OFFSET_BB         (PWR_OFFSET + PWR_CR_OFFSET)
//   85 #define PWR_CSR_OFFSET_BB        (PWR_OFFSET + PWR_CSR_OFFSET)
//   86 /**
//   87   * @}
//   88   */
//   89    
//   90 /** @defgroup PWR_CR_register_alias PWR CR Register alias address
//   91   * @{
//   92   */  
//   93 /* --- CR Register ---*/
//   94 /* Alias word address of LPSDSR bit */
//   95 #define LPSDSR_BIT_NUMBER        POSITION_VAL(PWR_CR_LPDS)
//   96 #define CR_LPSDSR_BB             ((uint32_t)(PERIPH_BB_BASE + (PWR_CR_OFFSET_BB * 32) + (LPSDSR_BIT_NUMBER * 4)))
//   97 
//   98 /* Alias word address of DBP bit */
//   99 #define DBP_BIT_NUMBER            POSITION_VAL(PWR_CR_DBP)
//  100 #define CR_DBP_BB                ((uint32_t)(PERIPH_BB_BASE + (PWR_CR_OFFSET_BB * 32) + (DBP_BIT_NUMBER * 4)))
//  101 
//  102 /* Alias word address of PVDE bit */
//  103 #define PVDE_BIT_NUMBER           POSITION_VAL(PWR_CR_PVDE)
//  104 #define CR_PVDE_BB               ((uint32_t)(PERIPH_BB_BASE + (PWR_CR_OFFSET_BB * 32) + (PVDE_BIT_NUMBER * 4)))
//  105 
//  106 /**
//  107   * @}
//  108   */
//  109 
//  110 /** @defgroup PWR_CSR_register_alias PWR CSR Register alias address
//  111   * @{
//  112   */
//  113 
//  114 /* --- CSR Register ---*/
//  115 /* Alias word address of EWUP1 bit */
//  116 #define CSR_EWUP_BB(VAL)         ((uint32_t)(PERIPH_BB_BASE + (PWR_CSR_OFFSET_BB * 32) + (POSITION_VAL(VAL) * 4)))
//  117 /**
//  118   * @}
//  119   */
//  120   
//  121 /**
//  122   * @}
//  123   */
//  124 
//  125 /* Private variables ---------------------------------------------------------*/
//  126 /* Private function prototypes -----------------------------------------------*/
//  127 /** @defgroup PWR_Private_Functions PWR Private Functions
//  128  * brief   WFE cortex command overloaded for HAL_PWR_EnterSTOPMode usage only (see Workaround section)
//  129  * @{
//  130  */
//  131 static void PWR_OverloadWfe(void);
//  132 
//  133 /* Private functions ---------------------------------------------------------*/
//  134 __NOINLINE

        SECTION `.text`:CODE:NOROOT(2)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function PWR_OverloadWfe
          CFI NoCalls
        THUMB
//  135 static void PWR_OverloadWfe(void)
//  136 {
//  137   __asm volatile( "wfe" );
PWR_OverloadWfe:
        wfe
//  138   __asm volatile( "nop" );
        nop
//  139 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock0
//  140 
//  141 /**
//  142   * @}
//  143   */
//  144 
//  145 
//  146 /** @defgroup PWR_Exported_Functions PWR Exported Functions
//  147   * @{
//  148   */
//  149 
//  150 /** @defgroup PWR_Exported_Functions_Group1 Initialization and de-initialization functions 
//  151   *  @brief   Initialization and de-initialization functions
//  152   *
//  153 @verbatim
//  154  ===============================================================================
//  155               ##### Initialization and de-initialization functions #####
//  156  ===============================================================================
//  157     [..]
//  158       After reset, the backup domain (RTC registers, RTC backup data
//  159       registers) is protected against possible unwanted
//  160       write accesses.
//  161       To enable access to the RTC Domain and RTC registers, proceed as follows:
//  162         (+) Enable the Power Controller (PWR) APB1 interface clock using the
//  163             __HAL_RCC_PWR_CLK_ENABLE() macro.
//  164         (+) Enable access to RTC domain using the HAL_PWR_EnableBkUpAccess() function.
//  165 
//  166 @endverbatim
//  167   * @{
//  168   */
//  169 
//  170 /**
//  171   * @brief  Deinitializes the PWR peripheral registers to their default reset values.  
//  172   * @retval None
//  173   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function HAL_PWR_DeInit
          CFI NoCalls
        THUMB
//  174 void HAL_PWR_DeInit(void)
//  175 {
//  176   __HAL_RCC_PWR_FORCE_RESET();
HAL_PWR_DeInit:
        LDR.N    R0,??DataTable15  ;; 0x40021010
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x10000000
        STR      R1,[R0, #+0]
//  177   __HAL_RCC_PWR_RELEASE_RESET();
        LDR      R1,[R0, #+0]
        BIC      R1,R1,#0x10000000
        STR      R1,[R0, #+0]
//  178 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock1
//  179 
//  180 /**
//  181   * @brief  Enables access to the backup domain (RTC registers, RTC
//  182   *         backup data registers ).
//  183   * @note   If the HSE divided by 128 is used as the RTC clock, the
//  184   *         Backup Domain Access should be kept enabled.
//  185   * @retval None
//  186   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function HAL_PWR_EnableBkUpAccess
          CFI NoCalls
        THUMB
//  187 void HAL_PWR_EnableBkUpAccess(void)
//  188 {
//  189   /* Enable access to RTC and backup registers */
//  190   *(__IO uint32_t *) CR_DBP_BB = (uint32_t)ENABLE;
HAL_PWR_EnableBkUpAccess:
        MOVS     R0,#+1
        LDR.N    R1,??DataTable15_1  ;; 0x420e0020
        STR      R0,[R1, #+0]
//  191 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock2
//  192 
//  193 /**
//  194   * @brief  Disables access to the backup domain (RTC registers, RTC
//  195   *         backup data registers).
//  196   * @note   If the HSE divided by 128 is used as the RTC clock, the
//  197   *         Backup Domain Access should be kept enabled.
//  198   * @retval None
//  199   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function HAL_PWR_DisableBkUpAccess
          CFI NoCalls
        THUMB
//  200 void HAL_PWR_DisableBkUpAccess(void)
//  201 {
//  202   /* Disable access to RTC and backup registers */
//  203   *(__IO uint32_t *) CR_DBP_BB = (uint32_t)DISABLE;
HAL_PWR_DisableBkUpAccess:
        MOVS     R0,#+0
        LDR.N    R1,??DataTable15_1  ;; 0x420e0020
        STR      R0,[R1, #+0]
//  204 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock3
//  205 
//  206 /**
//  207   * @}
//  208   */
//  209 
//  210 /** @defgroup PWR_Exported_Functions_Group2 Peripheral Control functions 
//  211   * @brief    Low Power modes configuration functions
//  212   *
//  213 @verbatim
//  214  ===============================================================================
//  215                  ##### Peripheral Control functions #####
//  216  ===============================================================================
//  217      
//  218     *** PVD configuration ***
//  219     =========================
//  220     [..]
//  221       (+) The PVD is used to monitor the VDD power supply by comparing it to a
//  222           threshold selected by the PVD Level (PLS[2:0] bits in the PWR_CR).
//  223 
//  224       (+) A PVDO flag is available to indicate if VDD/VDDA is higher or lower
//  225           than the PVD threshold. This event is internally connected to the EXTI
//  226           line16 and can generate an interrupt if enabled. This is done through
//  227           __HAL_PVD_EXTI_ENABLE_IT() macro.
//  228       (+) The PVD is stopped in Standby mode.
//  229 
//  230     *** WakeUp pin configuration ***
//  231     ================================
//  232     [..]
//  233       (+) WakeUp pin is used to wake up the system from Standby mode. This pin is
//  234           forced in input pull-down configuration and is active on rising edges.
//  235       (+) There is one WakeUp pin:
//  236           WakeUp Pin 1 on PA.00.
//  237 
//  238     [..]
//  239 
//  240     *** Low Power modes configuration ***
//  241     =====================================
//  242      [..]
//  243       The device features 3 low-power modes:
//  244       (+) Sleep mode: CPU clock off, all peripherals including Cortex-M3 core peripherals like 
//  245                       NVIC, SysTick, etc. are kept running
//  246       (+) Stop mode: All clocks are stopped
//  247       (+) Standby mode: 1.8V domain powered off
//  248   
//  249   
//  250    *** Sleep mode ***
//  251    ==================
//  252     [..]
//  253       (+) Entry:
//  254           The Sleep mode is entered by using the HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFx)
//  255               functions with
//  256           (++) PWR_SLEEPENTRY_WFI: enter SLEEP mode with WFI instruction
//  257           (++) PWR_SLEEPENTRY_WFE: enter SLEEP mode with WFE instruction
//  258      
//  259       (+) Exit:
//  260         (++) WFI entry mode, Any peripheral interrupt acknowledged by the nested vectored interrupt
//  261              controller (NVIC) can wake up the device from Sleep mode.
//  262         (++) WFE entry mode, Any wakeup event can wake up the device from Sleep mode.
//  263            (+++) Any peripheral interrupt w/o NVIC configuration & SEVONPEND bit set in the Cortex (HAL_PWR_EnableSEVOnPend)
//  264            (+++) Any EXTI Line (Internal or External) configured in Event mode
//  265 
//  266    *** Stop mode ***
//  267    =================
//  268     [..]
//  269       The Stop mode is based on the Cortex-M3 deepsleep mode combined with peripheral
//  270       clock gating. The voltage regulator can be configured either in normal or low-power mode.
//  271       In Stop mode, all clocks in the 1.8 V domain are stopped, the PLL, the HSI and the HSE RC 
//  272       oscillators are disabled. SRAM and register contents are preserved.
//  273       In Stop mode, all I/O pins keep the same state as in Run mode.
//  274 
//  275       (+) Entry:
//  276            The Stop mode is entered using the HAL_PWR_EnterSTOPMode(PWR_REGULATOR_VALUE, PWR_SLEEPENTRY_WFx )
//  277              function with:
//  278           (++) PWR_REGULATOR_VALUE= PWR_MAINREGULATOR_ON: Main regulator ON.
//  279           (++) PWR_REGULATOR_VALUE= PWR_LOWPOWERREGULATOR_ON: Low Power regulator ON.
//  280           (++) PWR_SLEEPENTRY_WFx= PWR_SLEEPENTRY_WFI: enter STOP mode with WFI instruction
//  281           (++) PWR_SLEEPENTRY_WFx= PWR_SLEEPENTRY_WFE: enter STOP mode with WFE instruction
//  282       (+) Exit:
//  283           (++) WFI entry mode, Any EXTI Line (Internal or External) configured in Interrupt mode with NVIC configured
//  284           (++) WFE entry mode, Any EXTI Line (Internal or External) configured in Event mode.
//  285 
//  286    *** Standby mode ***
//  287    ====================
//  288      [..]
//  289       The Standby mode allows to achieve the lowest power consumption. It is based on the
//  290       Cortex-M3 deepsleep mode, with the voltage regulator disabled. The 1.8 V domain is 
//  291       consequently powered off. The PLL, the HSI oscillator and the HSE oscillator are also 
//  292       switched off. SRAM and register contents are lost except for registers in the Backup domain 
//  293       and Standby circuitry
//  294       
//  295       (+) Entry:
//  296         (++) The Standby mode is entered using the HAL_PWR_EnterSTANDBYMode() function.
//  297       (+) Exit:
//  298         (++) WKUP pin rising edge, RTC alarm event rising edge, external Reset in 
//  299              NRSTpin, IWDG Reset
//  300 
//  301    *** Auto-wakeup (AWU) from low-power mode ***
//  302        =============================================
//  303        [..]
//  304         
//  305        (+) The MCU can be woken up from low-power mode by an RTC Alarm event, 
//  306            without depending on an external interrupt (Auto-wakeup mode).
//  307    
//  308        (+) RTC auto-wakeup (AWU) from the Stop and Standby modes
//  309 
//  310            (++) To wake up from the Stop mode with an RTC alarm event, it is necessary to 
//  311                 configure the RTC to generate the RTC alarm using the HAL_RTC_SetAlarm_IT() function.
//  312 
//  313    *** PWR Workarounds linked to Silicon Limitation ***
//  314        ====================================================
//  315        [..]
//  316        Below the list of all silicon limitations known on STM32F1xx prouct.
//  317 
//  318        (#)Workarounds Implemented inside PWR HAL Driver
//  319           (##)Debugging Stop mode with WFE entry - overloaded the WFE by an internal function    
//  320         
//  321 @endverbatim
//  322   * @{
//  323   */
//  324 
//  325 /**
//  326   * @brief  Configures the voltage threshold detected by the Power Voltage Detector(PVD).
//  327   * @param  sConfigPVD: pointer to an PWR_PVDTypeDef structure that contains the configuration
//  328   *         information for the PVD.
//  329   * @note   Refer to the electrical characteristics of your device datasheet for
//  330   *         more details about the voltage threshold corresponding to each
//  331   *         detection level.
//  332   * @retval None
//  333   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function HAL_PWR_ConfigPVD
          CFI NoCalls
        THUMB
//  334 void HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD)
//  335 {
//  336   /* Check the parameters */
//  337   assert_param(IS_PWR_PVD_LEVEL(sConfigPVD->PVDLevel));
//  338   assert_param(IS_PWR_PVD_MODE(sConfigPVD->Mode));
//  339 
//  340   /* Set PLS[7:5] bits according to PVDLevel value */
//  341   MODIFY_REG(PWR->CR, PWR_CR_PLS, sConfigPVD->PVDLevel);
HAL_PWR_ConfigPVD:
        LDR.N    R1,??DataTable15_2  ;; 0x40007000
        LDR      R2,[R1, #+0]
        BIC      R2,R2,#0xE0
        LDR      R3,[R0, #+0]
        ORRS     R2,R3,R2
        STR      R2,[R1, #+0]
//  342   
//  343   /* Clear any previous config. Keep it clear if no event or IT mode is selected */
//  344   __HAL_PWR_PVD_EXTI_DISABLE_EVENT();
        LDR.N    R1,??DataTable15_3  ;; 0x40010400
        LDR      R2,[R1, #+4]
        BIC      R2,R2,#0x10000
        STR      R2,[R1, #+4]
//  345   __HAL_PWR_PVD_EXTI_DISABLE_IT();
        LDR      R2,[R1, #+0]
        BIC      R2,R2,#0x10000
        STR      R2,[R1, #+0]
//  346   __HAL_PWR_PVD_EXTI_DISABLE_FALLING_EDGE(); 
        LDR      R2,[R1, #+12]
        BIC      R2,R2,#0x10000
        STR      R2,[R1, #+12]
//  347   __HAL_PWR_PVD_EXTI_DISABLE_RISING_EDGE();
        LDR      R2,[R1, #+8]
        BIC      R2,R2,#0x10000
        STR      R2,[R1, #+8]
//  348 
//  349   /* Configure interrupt mode */
//  350   if((sConfigPVD->Mode & PVD_MODE_IT) == PVD_MODE_IT)
        LDR      R2,[R0, #+4]
        LSLS     R2,R2,#+15
        BPL.N    ??HAL_PWR_ConfigPVD_0
//  351   {
//  352     __HAL_PWR_PVD_EXTI_ENABLE_IT();
        LDR      R2,[R1, #+0]
        ORR      R2,R2,#0x10000
        STR      R2,[R1, #+0]
//  353   }
//  354   
//  355   /* Configure event mode */
//  356   if((sConfigPVD->Mode & PVD_MODE_EVT) == PVD_MODE_EVT)
??HAL_PWR_ConfigPVD_0:
        LDR      R2,[R0, #+4]
        LSLS     R2,R2,#+14
        BPL.N    ??HAL_PWR_ConfigPVD_1
//  357   {
//  358     __HAL_PWR_PVD_EXTI_ENABLE_EVENT();
        LDR      R2,[R1, #+4]
        ORR      R2,R2,#0x10000
        STR      R2,[R1, #+4]
//  359   }
//  360   
//  361   /* Configure the edge */
//  362   if((sConfigPVD->Mode & PVD_RISING_EDGE) == PVD_RISING_EDGE)
??HAL_PWR_ConfigPVD_1:
        LDRB     R2,[R0, #+4]
        LSLS     R2,R2,#+31
        BPL.N    ??HAL_PWR_ConfigPVD_2
//  363   {
//  364     __HAL_PWR_PVD_EXTI_ENABLE_RISING_EDGE();
        LDR      R2,[R1, #+8]
        ORR      R2,R2,#0x10000
        STR      R2,[R1, #+8]
//  365   }
//  366   
//  367   if((sConfigPVD->Mode & PVD_FALLING_EDGE) == PVD_FALLING_EDGE)
??HAL_PWR_ConfigPVD_2:
        LDRB     R0,[R0, #+4]
        LSLS     R0,R0,#+30
        BPL.N    ??HAL_PWR_ConfigPVD_3
//  368   {
//  369     __HAL_PWR_PVD_EXTI_ENABLE_FALLING_EDGE();
        LDR      R0,[R1, #+12]
        ORR      R0,R0,#0x10000
        STR      R0,[R1, #+12]
//  370   }
//  371 }
??HAL_PWR_ConfigPVD_3:
        BX       LR               ;; return
          CFI EndBlock cfiBlock4
//  372 
//  373 /**
//  374   * @brief  Enables the Power Voltage Detector(PVD).
//  375   * @retval None
//  376   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function HAL_PWR_EnablePVD
          CFI NoCalls
        THUMB
//  377 void HAL_PWR_EnablePVD(void)
//  378 {
//  379   /* Enable the power voltage detector */
//  380   *(__IO uint32_t *) CR_PVDE_BB = (uint32_t)ENABLE;
HAL_PWR_EnablePVD:
        MOVS     R0,#+1
        LDR.N    R1,??DataTable15_4  ;; 0x420e0010
        STR      R0,[R1, #+0]
//  381 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock5
//  382 
//  383 /**
//  384   * @brief  Disables the Power Voltage Detector(PVD).
//  385   * @retval None
//  386   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock6 Using cfiCommon0
          CFI Function HAL_PWR_DisablePVD
          CFI NoCalls
        THUMB
//  387 void HAL_PWR_DisablePVD(void)
//  388 {
//  389   /* Disable the power voltage detector */
//  390   *(__IO uint32_t *) CR_PVDE_BB = (uint32_t)DISABLE;
HAL_PWR_DisablePVD:
        MOVS     R0,#+0
        LDR.N    R1,??DataTable15_4  ;; 0x420e0010
        STR      R0,[R1, #+0]
//  391 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock6
//  392 
//  393 /**
//  394   * @brief Enables the WakeUp PINx functionality.
//  395   * @param WakeUpPinx: Specifies the Power Wake-Up pin to enable.
//  396   *        This parameter can be one of the following values:
//  397   *           @arg PWR_WAKEUP_PIN1
//  398   * @retval None
//  399   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock7 Using cfiCommon0
          CFI Function HAL_PWR_EnableWakeUpPin
          CFI NoCalls
        THUMB
//  400 void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinx)
//  401 {
//  402   /* Check the parameter */
//  403   assert_param(IS_PWR_WAKEUP_PIN(WakeUpPinx));
//  404   /* Enable the EWUPx pin */
//  405   *(__IO uint32_t *) CSR_EWUP_BB(WakeUpPinx) = (uint32_t)ENABLE;
HAL_PWR_EnableWakeUpPin:
        RBIT     R0,R0
        CLZ      R0,R0
        LDR.N    R1,??DataTable15_5  ;; 0x420e0080
        MOVS     R2,#+1
        STR      R2,[R1, R0, LSL #+2]
//  406 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock7
//  407 
//  408 /**
//  409   * @brief Disables the WakeUp PINx functionality.
//  410   * @param WakeUpPinx: Specifies the Power Wake-Up pin to disable.
//  411   *        This parameter can be one of the following values:
//  412   *           @arg PWR_WAKEUP_PIN1
//  413   * @retval None
//  414   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock8 Using cfiCommon0
          CFI Function HAL_PWR_DisableWakeUpPin
          CFI NoCalls
        THUMB
//  415 void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx)
//  416 {
//  417   /* Check the parameter */
//  418   assert_param(IS_PWR_WAKEUP_PIN(WakeUpPinx));
//  419   /* Disable the EWUPx pin */
//  420   *(__IO uint32_t *) CSR_EWUP_BB(WakeUpPinx) = (uint32_t)DISABLE;
HAL_PWR_DisableWakeUpPin:
        RBIT     R0,R0
        CLZ      R0,R0
        LDR.N    R1,??DataTable15_5  ;; 0x420e0080
        MOVS     R2,#+0
        STR      R2,[R1, R0, LSL #+2]
//  421 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock8
//  422 
//  423 /**
//  424   * @brief Enters Sleep mode.
//  425   * @note  In Sleep mode, all I/O pins keep the same state as in Run mode.
//  426   * @param Regulator: Regulator state as no effect in SLEEP mode -  allows to support portability from legacy software
//  427   * @param SLEEPEntry: Specifies if SLEEP mode is entered with WFI or WFE instruction.
//  428   *           When WFI entry is used, tick interrupt have to be disabled if not desired as 
//  429   *           the interrupt wake up source.
//  430   *           This parameter can be one of the following values:
//  431   *            @arg PWR_SLEEPENTRY_WFI: enter SLEEP mode with WFI instruction
//  432   *            @arg PWR_SLEEPENTRY_WFE: enter SLEEP mode with WFE instruction
//  433   * @retval None
//  434   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock9 Using cfiCommon0
          CFI Function HAL_PWR_EnterSLEEPMode
          CFI NoCalls
        THUMB
//  435 void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry)
//  436 {
//  437   /* Check the parameters */
//  438   /* No check on Regulator because parameter not used in SLEEP mode */
//  439   assert_param(IS_PWR_SLEEP_ENTRY(SLEEPEntry));
//  440 
//  441   /* Clear SLEEPDEEP bit of Cortex System Control Register */
//  442   CLEAR_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPDEEP_Msk));
HAL_PWR_EnterSLEEPMode:
        LDR.N    R0,??DataTable15_6  ;; 0xe000ed10
        LDR      R2,[R0, #+0]
        BIC      R2,R2,#0x4
        STR      R2,[R0, #+0]
//  443 
//  444   /* Select SLEEP mode entry -------------------------------------------------*/
//  445   if(SLEEPEntry == PWR_SLEEPENTRY_WFI)
        CMP      R1,#+1
        BNE.N    ??HAL_PWR_EnterSLEEPMode_0
//  446   {
//  447     /* Request Wait For Interrupt */
//  448     __WFI();
        WFI      
        BX       LR
//  449   }
//  450   else
//  451   {
//  452     /* Request Wait For Event */
//  453     __SEV();
??HAL_PWR_EnterSLEEPMode_0:
        SEV      
//  454     __WFE();
        WFE      
//  455     __WFE();
        WFE      
//  456   }
//  457 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock9
//  458 
//  459 /**
//  460   * @brief Enters Stop mode. 
//  461   * @note  In Stop mode, all I/O pins keep the same state as in Run mode.
//  462   * @note  When exiting Stop mode by using an interrupt or a wakeup event,
//  463   *        HSI RC oscillator is selected as system clock.
//  464   * @note  When the voltage regulator operates in low power mode, an additional
//  465   *         startup delay is incurred when waking up from Stop mode. 
//  466   *         By keeping the internal regulator ON during Stop mode, the consumption
//  467   *         is higher although the startup time is reduced.    
//  468   * @param Regulator: Specifies the regulator state in Stop mode.
//  469   *          This parameter can be one of the following values:
//  470   *            @arg PWR_MAINREGULATOR_ON: Stop mode with regulator ON
//  471   *            @arg PWR_LOWPOWERREGULATOR_ON: Stop mode with low power regulator ON
//  472   * @param STOPEntry: Specifies if Stop mode in entered with WFI or WFE instruction.
//  473   *          This parameter can be one of the following values:
//  474   *            @arg PWR_STOPENTRY_WFI: Enter Stop mode with WFI instruction
//  475   *            @arg PWR_STOPENTRY_WFE: Enter Stop mode with WFE instruction   
//  476   * @retval None
//  477   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock10 Using cfiCommon0
          CFI Function HAL_PWR_EnterSTOPMode
        THUMB
//  478 void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry)
//  479 {
HAL_PWR_EnterSTOPMode:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
//  480   /* Check the parameters */
//  481   assert_param(IS_PWR_REGULATOR(Regulator));
//  482   assert_param(IS_PWR_STOP_ENTRY(STOPEntry));
//  483 
//  484   /* Clear PDDS bit in PWR register to specify entering in STOP mode when CPU enter in Deepsleep */ 
//  485   CLEAR_BIT(PWR->CR,  PWR_CR_PDDS);
        LDR.N    R2,??DataTable15_2  ;; 0x40007000
        LDR      R3,[R2, #+0]
        BIC      R3,R3,#0x2
        STR      R3,[R2, #+0]
//  486 
//  487   /* Select the voltage regulator mode by setting LPDS bit in PWR register according to Regulator parameter value */
//  488   MODIFY_REG(PWR->CR, PWR_CR_LPDS, Regulator);
        LDR      R3,[R2, #+0]
        LSRS     R3,R3,#+1
        ORRS     R0,R0,R3, LSL #+1
        STR      R0,[R2, #+0]
//  489 
//  490   /* Set SLEEPDEEP bit of Cortex System Control Register */
//  491   SET_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPDEEP_Msk));
        LDR.N    R4,??DataTable15_6  ;; 0xe000ed10
        LDR      R0,[R4, #+0]
        ORR      R0,R0,#0x4
        STR      R0,[R4, #+0]
//  492 
//  493   /* Select Stop mode entry --------------------------------------------------*/
//  494   if(STOPEntry == PWR_STOPENTRY_WFI)
        CMP      R1,#+1
        BNE.N    ??HAL_PWR_EnterSTOPMode_0
//  495   {
//  496     /* Request Wait For Interrupt */
//  497     __WFI();
        WFI      
        B.N      ??HAL_PWR_EnterSTOPMode_1
//  498   }
//  499   else
//  500   {
//  501     /* Request Wait For Event */
//  502     __SEV();
??HAL_PWR_EnterSTOPMode_0:
        SEV      
//  503     PWR_OverloadWfe(); /* WFE redefine locally */
          CFI FunCall PWR_OverloadWfe
        BL       PWR_OverloadWfe
//  504     PWR_OverloadWfe(); /* WFE redefine locally */
          CFI FunCall PWR_OverloadWfe
        BL       PWR_OverloadWfe
//  505   }
//  506   /* Reset SLEEPDEEP bit of Cortex System Control Register */
//  507   CLEAR_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPDEEP_Msk));
??HAL_PWR_EnterSTOPMode_1:
        LDR      R0,[R4, #+0]
        BIC      R0,R0,#0x4
        STR      R0,[R4, #+0]
//  508 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock10
//  509 
//  510 /**
//  511   * @brief Enters Standby mode.
//  512   * @note  In Standby mode, all I/O pins are high impedance except for:
//  513   *          - Reset pad (still available) 
//  514   *          - TAMPER pin if configured for tamper or calibration out.
//  515   *          - WKUP pin (PA0) if enabled.
//  516   * @retval None
//  517   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock11 Using cfiCommon0
          CFI Function HAL_PWR_EnterSTANDBYMode
          CFI NoCalls
        THUMB
//  518 void HAL_PWR_EnterSTANDBYMode(void)
//  519 {
//  520   /* Select Standby mode */
//  521   SET_BIT(PWR->CR, PWR_CR_PDDS);
HAL_PWR_EnterSTANDBYMode:
        LDR.N    R0,??DataTable15_2  ;; 0x40007000
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x2
        STR      R1,[R0, #+0]
//  522 
//  523   /* Set SLEEPDEEP bit of Cortex System Control Register */
//  524   SET_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPDEEP_Msk));
        LDR.N    R0,??DataTable15_6  ;; 0xe000ed10
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x4
        STR      R1,[R0, #+0]
//  525 
//  526   /* This option is used to ensure that store operations are completed */
//  527 #if defined ( __CC_ARM)
//  528   __force_stores();
//  529 #endif
//  530   /* Request Wait For Interrupt */
//  531   __WFI();
        WFI      
//  532 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock11
//  533 
//  534 
//  535 /**
//  536   * @brief Indicates Sleep-On-Exit when returning from Handler mode to Thread mode. 
//  537   * @note Set SLEEPONEXIT bit of SCR register. When this bit is set, the processor 
//  538   *       re-enters SLEEP mode when an interruption handling is over.
//  539   *       Setting this bit is useful when the processor is expected to run only on
//  540   *       interruptions handling.         
//  541   * @retval None
//  542   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock12 Using cfiCommon0
          CFI Function HAL_PWR_EnableSleepOnExit
          CFI NoCalls
        THUMB
//  543 void HAL_PWR_EnableSleepOnExit(void)
//  544 {
//  545   /* Set SLEEPONEXIT bit of Cortex System Control Register */
//  546   SET_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPONEXIT_Msk));
HAL_PWR_EnableSleepOnExit:
        LDR.N    R0,??DataTable15_6  ;; 0xe000ed10
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x2
        STR      R1,[R0, #+0]
//  547 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock12
//  548 
//  549 
//  550 /**
//  551   * @brief Disables Sleep-On-Exit feature when returning from Handler mode to Thread mode. 
//  552   * @note Clears SLEEPONEXIT bit of SCR register. When this bit is set, the processor 
//  553   *       re-enters SLEEP mode when an interruption handling is over.          
//  554   * @retval None
//  555   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock13 Using cfiCommon0
          CFI Function HAL_PWR_DisableSleepOnExit
          CFI NoCalls
        THUMB
//  556 void HAL_PWR_DisableSleepOnExit(void)
//  557 {
//  558   /* Clear SLEEPONEXIT bit of Cortex System Control Register */
//  559   CLEAR_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SLEEPONEXIT_Msk));
HAL_PWR_DisableSleepOnExit:
        LDR.N    R0,??DataTable15_6  ;; 0xe000ed10
        LDR      R1,[R0, #+0]
        BIC      R1,R1,#0x2
        STR      R1,[R0, #+0]
//  560 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock13
//  561 
//  562 
//  563 /**
//  564   * @brief Enables CORTEX M3 SEVONPEND bit. 
//  565   * @note Sets SEVONPEND bit of SCR register. When this bit is set, this causes 
//  566   *       WFE to wake up when an interrupt moves from inactive to pended.
//  567   * @retval None
//  568   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock14 Using cfiCommon0
          CFI Function HAL_PWR_EnableSEVOnPend
          CFI NoCalls
        THUMB
//  569 void HAL_PWR_EnableSEVOnPend(void)
//  570 {
//  571   /* Set SEVONPEND bit of Cortex System Control Register */
//  572   SET_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SEVONPEND_Msk));
HAL_PWR_EnableSEVOnPend:
        LDR.N    R0,??DataTable15_6  ;; 0xe000ed10
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x10
        STR      R1,[R0, #+0]
//  573 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock14
//  574 
//  575 
//  576 /**
//  577   * @brief Disables CORTEX M3 SEVONPEND bit. 
//  578   * @note Clears SEVONPEND bit of SCR register. When this bit is set, this causes 
//  579   *       WFE to wake up when an interrupt moves from inactive to pended.         
//  580   * @retval None
//  581   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock15 Using cfiCommon0
          CFI Function HAL_PWR_DisableSEVOnPend
          CFI NoCalls
        THUMB
//  582 void HAL_PWR_DisableSEVOnPend(void)
//  583 {
//  584   /* Clear SEVONPEND bit of Cortex System Control Register */
//  585   CLEAR_BIT(SCB->SCR, ((uint32_t)SCB_SCR_SEVONPEND_Msk));
HAL_PWR_DisableSEVOnPend:
        LDR.N    R0,??DataTable15_6  ;; 0xe000ed10
        LDR      R1,[R0, #+0]
        BIC      R1,R1,#0x10
        STR      R1,[R0, #+0]
//  586 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock15
//  587 
//  588 
//  589 
//  590 /**
//  591   * @brief  This function handles the PWR PVD interrupt request.
//  592   * @note   This API should be called under the PVD_IRQHandler().
//  593   * @retval None
//  594   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock16 Using cfiCommon0
          CFI Function HAL_PWR_PVD_IRQHandler
        THUMB
//  595 void HAL_PWR_PVD_IRQHandler(void)
//  596 {
HAL_PWR_PVD_IRQHandler:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
//  597   /* Check PWR exti flag */
//  598   if(__HAL_PWR_PVD_EXTI_GET_FLAG() != RESET)
        LDR.N    R4,??DataTable15_7  ;; 0x40010414
        LDR      R0,[R4, #+0]
        LSLS     R0,R0,#+15
        BPL.N    ??HAL_PWR_PVD_IRQHandler_0
//  599   {
//  600     /* PWR PVD interrupt user callback */
//  601     HAL_PWR_PVDCallback();
          CFI FunCall HAL_PWR_PVDCallback
        BL       HAL_PWR_PVDCallback
//  602 
//  603     /* Clear PWR Exti pending bit */
//  604     __HAL_PWR_PVD_EXTI_CLEAR_FLAG();
        MOV      R0,#+65536
        STR      R0,[R4, #+0]
//  605   }
//  606 }
??HAL_PWR_PVD_IRQHandler_0:
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock16

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15:
        DC32     0x40021010

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_1:
        DC32     0x420e0020

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_2:
        DC32     0x40007000

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_3:
        DC32     0x40010400

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_4:
        DC32     0x420e0010

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_5:
        DC32     0x420e0080

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_6:
        DC32     0xe000ed10

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable15_7:
        DC32     0x40010414
//  607 
//  608 /**
//  609   * @brief  PWR PVD interrupt callback
//  610   * @retval None
//  611   */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock17 Using cfiCommon0
          CFI Function HAL_PWR_PVDCallback
          CFI NoCalls
        THUMB
//  612 __weak void HAL_PWR_PVDCallback(void)
//  613 {
//  614   /* NOTE : This function Should not be modified, when the callback is needed,
//  615             the HAL_PWR_PVDCallback could be implemented in the user file
//  616    */ 
//  617 }
HAL_PWR_PVDCallback:
        BX       LR               ;; return
          CFI EndBlock cfiBlock17

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION __DLIB_PERTHREAD:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        SECTION __DLIB_PERTHREAD_init:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
//  618 
//  619 /**
//  620   * @}
//  621   */
//  622 
//  623 /**
//  624   * @}
//  625   */
//  626 
//  627 #endif /* HAL_PWR_MODULE_ENABLED */
//  628 /**
//  629   * @}
//  630   */
//  631 
//  632 /**
//  633   * @}
//  634   */
//  635 
//  636 /************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
// 
// 414 bytes in section .text
// 
// 414 bytes of CODE memory
//
//Errors: none
//Warnings: none
