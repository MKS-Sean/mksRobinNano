///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V7.10.1.6676/W32 for ARM       14/Feb/2020  17:06:23
// Copyright 1999-2014 IAR Systems AB.
//
//    Cpu mode     =  thumb
//    Endian       =  little
//    Source file  =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Middlewares\arduino\stm32\cores\arduino\WMath.cpp
//    Command line =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Middlewares\arduino\stm32\cores\arduino\WMath.cpp
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
//        -Om --eec++ -I "C:\Program Files (x86)\IAR Systems\Embedded Workbench
//        7.0\arm\CMSIS\Include\"
//    List file    =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\WMath.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__CPP_Language", "EC++"
        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_full_locale_support", "1"
        AAPCS BASE,INTERWORK
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        EXTERN rand
        EXTERN srand

        PUBLIC _Z10randomSeedj
        PUBLIC _Z3maplllll
        PUBLIC _Z6randoml
        PUBLIC _Z6randomll
        PUBLIC _Z8makeWordhh
        PUBLIC _Z8makeWordt
        
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
        
// E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Middlewares\arduino\stm32\cores\arduino\WMath.cpp
//    1 /*
//    2   Copyright (c) 2011 Arduino.  All right reserved.
//    3 
//    4   This library is free software; you can redistribute it and/or
//    5   modify it under the terms of the GNU Lesser General Public
//    6   License as published by the Free Software Foundation; either
//    7   version 2.1 of the License, or (at your option) any later version.
//    8 
//    9   This library is distributed in the hope that it will be useful,
//   10   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   11   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
//   12   See the GNU Lesser General Public License for more details.
//   13 
//   14   You should have received a copy of the GNU Lesser General Public
//   15   License along with this library; if not, write to the Free Software
//   16   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//   17 */
//   18 
//   19 extern "C" {
//   20   #include "stdlib.h"
//   21   #include "stdint.h"
//   22 }
//   23 #include "WMath.h"
//   24 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function _Z10randomSeedj
        THUMB
//   25 extern void randomSeed( uint32_t dwSeed )
//   26 {
//   27   if ( dwSeed != 0 )
_Z10randomSeedj:
        CMP      R0,#+0
        BEQ.N    ??randomSeed_0
//   28   {
//   29     srand( dwSeed ) ;
          CFI FunCall srand
        B.W      srand
//   30   }
//   31 }
??randomSeed_0:
        BX       LR               ;; return
          CFI EndBlock cfiBlock0
//   32 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _Z6randoml
        THUMB
//   33 extern long random( long howbig )
//   34 {
_Z6randoml:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOVS     R4,R0
//   35   if ( howbig == 0 )
        BNE.N    ??random_0
//   36   {
//   37     return 0 ;
        MOVS     R0,#+0
        POP      {R4,PC}
//   38   }
//   39 
//   40   return rand() % howbig;
??random_0:
          CFI FunCall rand
        BL       rand
        SDIV     R1,R0,R4
        MLS      R0,R4,R1,R0
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock1
//   41 }
//   42 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function _Z6randomll
        THUMB
//   43 extern long random( long howsmall, long howbig )
//   44 {
_Z6randomll:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOV      R4,R0
//   45   if (howsmall >= howbig)
        CMP      R4,R1
        BGE.N    ??random_1
//   46   {
//   47     return howsmall;
//   48   }
//   49 
//   50   long diff = howbig - howsmall;
//   51 
//   52   return random(diff) + howsmall;
        SUBS     R0,R1,R4
          CFI FunCall _Z6randoml
        BL       _Z6randoml
        ADDS     R0,R4,R0
??random_1:
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock2
//   53 }
//   54 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function _Z3maplllll
          CFI NoCalls
        THUMB
//   55 extern long map(long x, long in_min, long in_max, long out_min, long out_max)
//   56 {
_Z3maplllll:
        PUSH     {R4}
          CFI R4 Frame(CFA, -4)
          CFI CFA R13+4
//   57   return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
        SUBS     R0,R0,R1
        LDR      R4,[SP, #+4]
        SUBS     R4,R4,R3
        MULS     R0,R4,R0
        SUBS     R1,R2,R1
        SDIV     R0,R0,R1
        ADDS     R0,R3,R0
        POP      {R4}
          CFI R4 SameValue
          CFI CFA R13+0
        BX       LR               ;; return
          CFI EndBlock cfiBlock3
//   58 }
//   59 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function _Z8makeWordt
          CFI NoCalls
        THUMB
//   60 extern uint16_t makeWord( uint16_t w )
//   61 {
//   62   return w ;
_Z8makeWordt:
        BX       LR               ;; return
          CFI EndBlock cfiBlock4
//   63 }
//   64 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function _Z8makeWordhh
          CFI NoCalls
        THUMB
//   65 extern uint16_t makeWord( uint8_t h, uint8_t l )
//   66 {
//   67   return (h << 8) | l ;
_Z8makeWordhh:
        ORR      R0,R1,R0, LSL #+8
        BX       LR               ;; return
          CFI EndBlock cfiBlock5
//   68 }

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION __DLIB_PERTHREAD:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        SECTION __DLIB_PERTHREAD_init:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
// 
// 82 bytes in section .text
// 
// 82 bytes of CODE memory
//
//Errors: none
//Warnings: none
