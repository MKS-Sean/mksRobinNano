///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V7.10.1.6676/W32 for ARM       14/Feb/2020  17:05:32
// Copyright 1999-2014 IAR Systems AB.
//
//    Cpu mode     =  thumb
//    Endian       =  little
//    Source file  =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\User\ui\id_manage.c
//    Command line =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\User\ui\id_manage.c
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
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\id_manage.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__SystemLibrary", "DLib"
        AAPCS BASE,INTERWORK
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        PUBLIC alloc_win_id
        PUBLIC del_win_id
        PUBLIC init_win_id
        
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
        
// E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\User\ui\id_manage.c
//    1 #include "stdint.h"
//    2 #include "gui.h"
//    3 #include "id_manage.h"
//    4 
//    5 #define ID_USED 	1
//    6 #define ID_NOT_USED	0
//    7 
//    8 static int32_t nextId = GUI_ID_USER;
//    9 

        SECTION `.bss`:DATA:REORDER:NOROOT(2)
//   10 static ID_STACK gId_stack[100];
gId_stack:
        DS8 800
//   11 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function init_win_id
          CFI NoCalls
        THUMB
//   12 void init_win_id()
//   13 {
//   14 	uint32_t i; 
//   15 	for(i = 0; i < sizeof(gId_stack) / sizeof(ID_STACK); i++)
init_win_id:
        MOVS     R0,#+0
        LDR.N    R1,??DataTable2
        B.N      ??init_win_id_0
//   16 	{
//   17 		gId_stack[i].flag = ID_NOT_USED;
??init_win_id_1:
        MOVS     R2,#+0
        ADD      R3,R1,R0, LSL #+3
        STRB     R2,[R3, #+4]
//   18 		gId_stack[i].id = GUI_ID_USER + i;
        ADD      R2,R0,#+2048
        STR      R2,[R1, R0, LSL #+3]
//   19 	}
        ADDS     R0,R0,#+1
??init_win_id_0:
        CMP      R0,#+100
        BCC.N    ??init_win_id_1
//   20 	//HAL_Delay(50);
//   21 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock0
//   22 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function alloc_win_id
          CFI NoCalls
        THUMB
//   23 uint32_t alloc_win_id()
//   24 {
//   25 	int32_t curId = nextId;
//   26 	uint32_t i; 
//   27 	
//   28 	for(i = 0; i < sizeof(gId_stack) / sizeof(ID_STACK); i++)
alloc_win_id:
        MOVS     R0,#+0
        LDR.N    R1,??DataTable2
        B.N      ??alloc_win_id_0
??alloc_win_id_1:
        ADDS     R0,R0,#+1
??alloc_win_id_0:
        CMP      R0,#+100
        BCS.N    ??alloc_win_id_2
//   29 	{
//   30 		if(gId_stack[i].flag == ID_NOT_USED)
        ADD      R2,R1,R0, LSL #+3
        LDRB     R2,[R2, #+4]
        CMP      R2,#+0
        BNE.N    ??alloc_win_id_1
//   31 		{
//   32 			gId_stack[i].flag == ID_USED;
//   33 			return gId_stack[i].id;
        LDR      R0,[R1, R0, LSL #+3]
        BX       LR
//   34 		}
//   35 	}
//   36 	return 0;
??alloc_win_id_2:
        MOVS     R0,#+0
        BX       LR               ;; return
          CFI EndBlock cfiBlock1
//   37 }
//   38 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function del_win_id
          CFI NoCalls
        THUMB
//   39 void del_win_id(int32_t id)
//   40 {
//   41 	uint32_t i; 
//   42 	
//   43 	for(i = 0; i < sizeof(gId_stack) / sizeof(ID_STACK); i++)
del_win_id:
        MOVS     R1,#+0
        B.N      ??del_win_id_0
//   44 	{
//   45 		if(gId_stack[i].id == id)
??del_win_id_1:
        LDR.N    R2,??DataTable2
        LDR      R3,[R2, R1, LSL #+3]
        CMP      R3,R0
        BNE.N    ??del_win_id_2
//   46 		{
//   47 			gId_stack[i].flag = ID_NOT_USED;
        MOVS     R3,#+0
        ADD      R2,R2,R1, LSL #+3
        STRB     R3,[R2, #+4]
//   48 		}
//   49 	}
??del_win_id_2:
        ADDS     R1,R1,#+1
??del_win_id_0:
        CMP      R1,#+100
        BCC.N    ??del_win_id_1
//   50 }
        BX       LR               ;; return
          CFI EndBlock cfiBlock2

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable2:
        DC32     gId_stack

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION __DLIB_PERTHREAD:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        SECTION __DLIB_PERTHREAD_init:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
//   51 
//   52 
// 
// 800 bytes in section .bss
//  96 bytes in section .text
// 
//  96 bytes of CODE memory
// 800 bytes of DATA memory
//
//Errors: none
//Warnings: 2
