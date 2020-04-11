///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V7.10.1.6676/W32 for ARM       14/Feb/2020  17:05:31
// Copyright 1999-2014 IAR Systems AB.
//
//    Cpu mode     =  thumb
//    Endian       =  little
//    Source file  =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Src\i2c.c
//    Command line =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Src\i2c.c
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
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\i2c.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_file_descriptor", "1"
        AAPCS BASE,INTERWORK
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        EXTERN Error_Handler
        EXTERN HAL_GPIO_DeInit
        EXTERN HAL_GPIO_Init
        EXTERN HAL_I2C_Init

        PUBLIC HAL_I2C_MspDeInit
        PUBLIC HAL_I2C_MspInit
        PUBLIC MX_I2C1_Init
        PUBLIC hi2c1
        
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
        
// E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Src\i2c.c
//    1 /**
//    2   ******************************************************************************
//    3   * File Name          : I2C.c
//    4   * Description        : This file provides code for the configuration
//    5   *                      of the I2C instances.
//    6   ******************************************************************************
//    7   *
//    8   * Copyright (c) 2018 STMicroelectronics International N.V. 
//    9   * All rights reserved.
//   10   *
//   11   * Redistribution and use in source and binary forms, with or without 
//   12   * modification, are permitted, provided that the following conditions are met:
//   13   *
//   14   * 1. Redistribution of source code must retain the above copyright notice, 
//   15   *    this list of conditions and the following disclaimer.
//   16   * 2. Redistributions in binary form must reproduce the above copyright notice,
//   17   *    this list of conditions and the following disclaimer in the documentation
//   18   *    and/or other materials provided with the distribution.
//   19   * 3. Neither the name of STMicroelectronics nor the names of other 
//   20   *    contributors to this software may be used to endorse or promote products 
//   21   *    derived from this software without specific written permission.
//   22   * 4. This software, including modifications and/or derivative works of this 
//   23   *    software, must execute solely and exclusively on microcontroller or
//   24   *    microprocessor devices manufactured by or for STMicroelectronics.
//   25   * 5. Redistribution and use of this software other than as permitted under 
//   26   *    this license is void and will automatically terminate your rights under 
//   27   *    this license. 
//   28   *
//   29   * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
//   30   * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
//   31   * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
//   32   * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
//   33   * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
//   34   * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//   35   * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
//   36   * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
//   37   * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
//   38   * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
//   39   * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
//   40   * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//   41   *
//   42   ******************************************************************************
//   43   */
//   44 
//   45 /* Includes ------------------------------------------------------------------*/
//   46 #include "i2c.h"
//   47 
//   48 #include "gpio.h"
//   49 
//   50 /* USER CODE BEGIN 0 */
//   51 
//   52 /* USER CODE END 0 */
//   53 

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
//   54 I2C_HandleTypeDef hi2c1;
hi2c1:
        DS8 60
//   55 
//   56 /* I2C1 init function */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function MX_I2C1_Init
        THUMB
//   57 void MX_I2C1_Init(void)
//   58 {
MX_I2C1_Init:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
//   59 
//   60   hi2c1.Instance = I2C1;
        LDR.N    R0,??DataTable2
        LDR.N    R1,??DataTable2_1  ;; 0x40005400
        STR      R1,[R0, #+0]
//   61   hi2c1.Init.ClockSpeed = 400000;
        LDR.N    R1,??DataTable2_2  ;; 0x61a80
        STR      R1,[R0, #+4]
//   62   hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
        MOVS     R1,#+0
        STR      R1,[R0, #+8]
//   63   hi2c1.Init.OwnAddress1 = 0;
        STR      R1,[R0, #+12]
//   64   hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
        MOV      R1,#+16384
        STR      R1,[R0, #+16]
//   65   hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
        MOVS     R1,#+0
        STR      R1,[R0, #+20]
//   66   hi2c1.Init.OwnAddress2 = 0;
        STR      R1,[R0, #+24]
//   67   hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
        STR      R1,[R0, #+28]
//   68   hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
        STR      R1,[R0, #+32]
//   69   if (HAL_I2C_Init(&hi2c1) != HAL_OK)
          CFI FunCall HAL_I2C_Init
        BL       HAL_I2C_Init
        CMP      R0,#+0
        BEQ.N    ??MX_I2C1_Init_0
//   70   {
//   71     Error_Handler();
        POP      {R0,LR}
          CFI R14 SameValue
          CFI CFA R13+0
          CFI FunCall Error_Handler
        B.W      Error_Handler
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
//   72   }
//   73 
//   74 }
??MX_I2C1_Init_0:
        POP      {R0,PC}          ;; return
          CFI EndBlock cfiBlock0
//   75 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function HAL_I2C_MspInit
        THUMB
//   76 void HAL_I2C_MspInit(I2C_HandleTypeDef* i2cHandle)
//   77 {
//   78 
//   79   GPIO_InitTypeDef GPIO_InitStruct;
//   80   if(i2cHandle->Instance==I2C1)
HAL_I2C_MspInit:
        LDR      R0,[R0, #+0]
        LDR.N    R1,??DataTable2_1  ;; 0x40005400
        CMP      R0,R1
        BEQ.N    ??HAL_I2C_MspInit_0
        BX       LR
//   81   {
//   82   /* USER CODE BEGIN I2C1_MspInit 0 */
//   83 
//   84   /* USER CODE END I2C1_MspInit 0 */
//   85   
//   86     /**I2C1 GPIO Configuration    
//   87     PB6     ------> I2C1_SCL
//   88     PB7     ------> I2C1_SDA 
//   89     */
//   90     GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_7;
??HAL_I2C_MspInit_0:
        PUSH     {LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+4
        SUB      SP,SP,#+20
          CFI CFA R13+24
        MOVS     R0,#+192
        STR      R0,[SP, #+4]
//   91     GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
        MOVS     R0,#+18
        STR      R0,[SP, #+8]
//   92     GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
        MOVS     R0,#+3
        STR      R0,[SP, #+16]
//   93     HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
        ADD      R1,SP,#+4
        LDR.N    R0,??DataTable2_3  ;; 0x40010c00
          CFI FunCall HAL_GPIO_Init
        BL       HAL_GPIO_Init
//   94 
//   95     /* Peripheral clock enable */
//   96     __HAL_RCC_I2C1_CLK_ENABLE();
        LDR.N    R0,??DataTable2_4  ;; 0x4002101c
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x200000
        STR      R1,[R0, #+0]
        LDR      R0,[R0, #+0]
        AND      R0,R0,#0x200000
        STR      R0,[SP, #+0]
        LDR      R0,[SP, #+0]
//   97   /* USER CODE BEGIN I2C1_MspInit 1 */
//   98 
//   99   /* USER CODE END I2C1_MspInit 1 */
//  100   }
//  101 }
        ADD      SP,SP,#+20
          CFI CFA R13+4
        POP      {PC}             ;; return
          CFI EndBlock cfiBlock1
//  102 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function HAL_I2C_MspDeInit
        THUMB
//  103 void HAL_I2C_MspDeInit(I2C_HandleTypeDef* i2cHandle)
//  104 {
//  105 
//  106   if(i2cHandle->Instance==I2C1)
HAL_I2C_MspDeInit:
        LDR      R0,[R0, #+0]
        LDR.N    R1,??DataTable2_1  ;; 0x40005400
        CMP      R0,R1
        BNE.N    ??HAL_I2C_MspDeInit_0
//  107   {
//  108   /* USER CODE BEGIN I2C1_MspDeInit 0 */
//  109 
//  110   /* USER CODE END I2C1_MspDeInit 0 */
//  111     /* Peripheral clock disable */
//  112     __HAL_RCC_I2C1_CLK_DISABLE();
        LDR.N    R0,??DataTable2_4  ;; 0x4002101c
        LDR      R1,[R0, #+0]
        BIC      R1,R1,#0x200000
        STR      R1,[R0, #+0]
//  113   
//  114     /**I2C1 GPIO Configuration    
//  115     PB6     ------> I2C1_SCL
//  116     PB7     ------> I2C1_SDA 
//  117     */
//  118     HAL_GPIO_DeInit(GPIOB, GPIO_PIN_6|GPIO_PIN_7);
        MOVS     R1,#+192
        LDR.N    R0,??DataTable2_3  ;; 0x40010c00
          CFI FunCall HAL_GPIO_DeInit
        B.W      HAL_GPIO_DeInit
//  119 
//  120   }
//  121   /* USER CODE BEGIN I2C1_MspDeInit 1 */
//  122 
//  123   /* USER CODE END I2C1_MspDeInit 1 */
//  124 } 
??HAL_I2C_MspDeInit_0:
        BX       LR               ;; return
          CFI EndBlock cfiBlock2

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2:
        DC32     hi2c1

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2_1:
        DC32     0x40005400

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2_2:
        DC32     0x61a80

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2_3:
        DC32     0x40010c00

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2_4:
        DC32     0x4002101c

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION __DLIB_PERTHREAD:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        SECTION __DLIB_PERTHREAD_init:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
//  125 
//  126 /* USER CODE BEGIN 1 */
//  127 
//  128 /* USER CODE END 1 */
//  129 
//  130 /**
//  131   * @}
//  132   */
//  133 
//  134 /**
//  135   * @}
//  136   */
//  137 
//  138 /************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
// 
//  60 bytes in section .bss
// 158 bytes in section .text
// 
// 158 bytes of CODE memory
//  60 bytes of DATA memory
//
//Errors: none
//Warnings: none
