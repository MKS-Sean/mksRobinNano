///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V7.10.1.6676/W32 for ARM       14/Feb/2020  17:05:01
// Copyright 1999-2014 IAR Systems AB.
//
//    Cpu mode     =  thumb
//    Endian       =  little
//    Source file  =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Drivers\BSP\Components\at24cxx\at24cxx.cpp
//    Command line =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Drivers\BSP\Components\at24cxx\at24cxx.cpp
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
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\at24cxx.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__CPP_Language", "EC++"
        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_file_descriptor", "1"
        AAPCS BASE,INTERWORK
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1

        EXTERN HAL_GPIO_Init
        EXTERN HAL_GPIO_WritePin

        PUBLIC AT24CXX_Check
        PUBLIC AT24CXX_Init
        PUBLIC AT24CXX_Read
        PUBLIC AT24CXX_ReadLenByte
        PUBLIC AT24CXX_ReadOneByte
        PUBLIC AT24CXX_Write
        PUBLIC AT24CXX_WriteLenByte
        PUBLIC AT24CXX_WriteOneByte
        PUBLIC IIC_Ack
        PUBLIC IIC_Init
        PUBLIC IIC_NAck
        PUBLIC IIC_Read_Byte
        PUBLIC IIC_Send_Byte
        PUBLIC IIC_Start
        PUBLIC IIC_Stop
        PUBLIC IIC_Wait_Ack
        PUBLIC _Z8delay_mst
        PUBLIC _Z8delay_usj
        PUBLIC delayCnt
        
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
        
// E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Drivers\BSP\Components\at24cxx\at24cxx.cpp
//    1 
//    2 #include "at24cxx.h"
//    3 #include "sys.h"
//    4 /*--------------------------MKS EEPROM-------------------------*/
//    5 

        SECTION `.bss`:DATA:REORDER:NOROOT(1)
//    6 volatile u16 delayCnt;	
delayCnt:
        DS8 2
//    7 //#include "stm32f10x.h"
//    8  
//    9 
//   10 //IO��������
//   11  
//   12 #define SDA_IN()  {GPIOB->CRL&=0X0FFFFFFF;GPIOB->CRL|=(u32)8<<28;}
//   13 #define SDA_OUT() {GPIOB->CRL&=0X0FFFFFFF;GPIOB->CRL|=(u32)3<<28;}
//   14 
//   15 //IO��������	 
//   16 #define IIC_SCL    PBout(6) //SCL
//   17 #define IIC_SDA    PBout(7) //SDA	 
//   18 #define READ_SDA   PBin(7)  //����SDA 
//   19 /*
//   20 static u8  fac_us=0;							//us��ʱ������			   
//   21 static u16 fac_ms=0;							//ms��ʱ������,��ucos��,����ÿ�����ĵ�ms��
//   22 
//   23 void delay_init()
//   24 {
//   25 	SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);	//ѡ���ⲿʱ��  HCLK/8
//   26 	fac_us=SystemCoreClock/8000000;				//Ϊϵͳʱ�ӵ�1/8  
//   27 	fac_ms=(u16)fac_us*1000;					//��OS��,����ÿ��ms��Ҫ��systickʱ����   
//   28 
//   29 }		
//   30 */

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock0 Using cfiCommon0
          CFI Function _Z8delay_usj
          CFI NoCalls
        THUMB
//   31 void delay_us(uint32_t nus)
//   32 {
//   33       while(nus--)
_Z8delay_usj:
??delay_us_0:
        MOV      R1,R0
        SUBS     R0,R1,#+1
        CMP      R1,#+0
        BEQ.N    ??delay_us_1
//   34       {
//   35         delayCnt = 5;  //10,8,6 -ok          
        LDR.N    R1,??DataTable9
        MOVS     R2,#+5
        STRH     R2,[R1, #+0]
//   36         while(delayCnt--);
??delay_us_2:
        LDRH     R2,[R1, #+0]
        SUBS     R3,R2,#+1
        STRH     R3,[R1, #+0]
        CMP      R2,#+0
        BNE.N    ??delay_us_2
        B.N      ??delay_us_0
//   37       }
//   38  /*
//   39 	u32 temp;	    	 
//   40 	SysTick->LOAD=nus*fac_us; 					//ʱ�����	  		 
//   41 	SysTick->VAL=0x00;        					//��ռ�����
//   42 	SysTick->CTRL|=SysTick_CTRL_ENABLE_Msk ;	//��ʼ����	  
//   43 	do
//   44 	{
//   45 		temp=SysTick->CTRL;
//   46 	}while((temp&0x01)&&!(temp&(1<<16)));		//�ȴ�ʱ�䵽��   
//   47 	SysTick->CTRL&=~SysTick_CTRL_ENABLE_Msk;	//�رռ�����
//   48 	SysTick->VAL =0X00;      		        //��ռ�����	 
//   49    */     
//   50 }
??delay_us_1:
        BX       LR               ;; return
          CFI EndBlock cfiBlock0
//   51 //��ʱnms
//   52 //ע��nms�ķ�Χ
//   53 //SysTick->LOADΪ24λ�Ĵ���,����,�����ʱΪ:
//   54 //nms<=0xffffff*8*1000/SYSCLK
//   55 //SYSCLK��λΪHz,nms��λΪms
//   56 //��72M������,nms<=1864 

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock1 Using cfiCommon0
          CFI Function _Z8delay_mst
          CFI NoCalls
        THUMB
//   57 void delay_ms(uint16_t nms)
//   58 {	 
//   59 
//   60       while(nms--)
_Z8delay_mst:
??delay_ms_0:
        MOV      R1,R0
        SUBS     R0,R1,#+1
        UXTH     R1,R1
        CMP      R1,#+0
        BEQ.N    ??delay_ms_1
//   61       {
//   62         delayCnt = 5000;        //10000,8000,6000 -ok          
        LDR.N    R1,??DataTable9
        MOVW     R2,#+5000
        STRH     R2,[R1, #+0]
//   63         while(delayCnt--);
??delay_ms_2:
        LDRH     R2,[R1, #+0]
        SUBS     R3,R2,#+1
        STRH     R3,[R1, #+0]
        CMP      R2,#+0
        BNE.N    ??delay_ms_2
        B.N      ??delay_ms_0
//   64       }
//   65   
//   66 	/*u32 temp;		   
//   67 	SysTick->LOAD=(u32)nms*fac_ms;				//ʱ�����(SysTick->LOADΪ24bit)
//   68 	SysTick->VAL =0x00;							//��ռ�����
//   69 	SysTick->CTRL|=SysTick_CTRL_ENABLE_Msk ;	//��ʼ����  
//   70 	do
//   71 	{
//   72 		temp=SysTick->CTRL;
//   73 	}while((temp&0x01)&&!(temp&(1<<16)));		//�ȴ�ʱ�䵽��   
//   74 	SysTick->CTRL&=~SysTick_CTRL_ENABLE_Msk;	//�رռ�����
//   75 	SysTick->VAL =0X00;       					//��ռ�����	
//   76 */
//   77 }
??delay_ms_1:
        BX       LR               ;; return
          CFI EndBlock cfiBlock1
//   78 //��ʼ��IIC�ӿ�

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock2 Using cfiCommon0
          CFI Function AT24CXX_Init
          CFI FunCall IIC_Init
        THUMB
//   79 void AT24CXX_Init(void)
//   80 {
//   81         //delay_init();
//   82 	IIC_Init();
AT24CXX_Init:
        B.N      IIC_Init
          CFI EndBlock cfiBlock2
//   83 }
//   84 //��AT24CXXָ����ַ����һ������
//   85 //ReadAddr:��ʼ�����ĵ�ַ  
//   86 //����ֵ  :����������

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock3 Using cfiCommon0
          CFI Function AT24CXX_ReadOneByte
        THUMB
//   87 uint8_t AT24CXX_ReadOneByte(uint16_t ReadAddr)
//   88 {				  
AT24CXX_ReadOneByte:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
        MOV      R4,R0
//   89 	uint8_t temp=0;		  	    																 
//   90     IIC_Start();  
          CFI FunCall IIC_Start
        BL       IIC_Start
//   91 	if(EE_TYPE>AT24C16)
//   92 	{
//   93 		IIC_Send_Byte(0XA0);	   //����д����
//   94 		IIC_Wait_Ack();
//   95 		IIC_Send_Byte(ReadAddr>>8);//���͸ߵ�ַ
//   96 		IIC_Wait_Ack();		 
//   97 	}else IIC_Send_Byte(0XA0+((ReadAddr/256)<<1));   //����������ַ0XA0,д���� 	 
        LSRS     R0,R4,#+8
        LSLS     R0,R0,#+1
        ADDS     R0,R0,#+160
        UXTB     R0,R0
          CFI FunCall IIC_Send_Byte
        BL       IIC_Send_Byte
//   98 
//   99 	IIC_Wait_Ack(); 
          CFI FunCall IIC_Wait_Ack
        BL       IIC_Wait_Ack
//  100     IIC_Send_Byte(ReadAddr%256);   //���͵͵�ַ
        MOV      R0,R4
        UXTB     R0,R0
          CFI FunCall IIC_Send_Byte
        BL       IIC_Send_Byte
//  101 	IIC_Wait_Ack();	    
          CFI FunCall IIC_Wait_Ack
        BL       IIC_Wait_Ack
//  102 	IIC_Start();  	 	   
          CFI FunCall IIC_Start
        BL       IIC_Start
//  103 	IIC_Send_Byte(0XA1);           //�������ģʽ			   
        MOVS     R0,#+161
          CFI FunCall IIC_Send_Byte
        BL       IIC_Send_Byte
//  104 	IIC_Wait_Ack();	 
          CFI FunCall IIC_Wait_Ack
        BL       IIC_Wait_Ack
//  105     temp=IIC_Read_Byte(0);		   
        MOVS     R0,#+0
          CFI FunCall IIC_Read_Byte
        BL       IIC_Read_Byte
        MOV      R4,R0
//  106     IIC_Stop();//����һ��ֹͣ����	    
          CFI FunCall IIC_Stop
        BL       IIC_Stop
//  107 	return temp;
        MOV      R0,R4
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock3
//  108 }
//  109 //��AT24CXXָ����ַд��һ������
//  110 //WriteAddr  :д�����ݵ�Ŀ�ĵ�ַ    
//  111 //DataToWrite:Ҫд�������

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock4 Using cfiCommon0
          CFI Function AT24CXX_WriteOneByte
        THUMB
//  112 void AT24CXX_WriteOneByte(uint16_t WriteAddr,uint8_t DataToWrite)
//  113 {				   	  	    																 
AT24CXX_WriteOneByte:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
        MOV      R4,R0
        MOV      R5,R1
//  114     IIC_Start();  
          CFI FunCall IIC_Start
        BL       IIC_Start
//  115 	if(EE_TYPE>AT24C16)
//  116 	{
//  117 		IIC_Send_Byte(0XA0);	    //����д����
//  118 		IIC_Wait_Ack();
//  119 		IIC_Send_Byte(WriteAddr>>8);//���͸ߵ�ַ
//  120  	}else
//  121 	{
//  122 		IIC_Send_Byte(0XA0+((WriteAddr/256)<<1));   //����������ַ0XA0,д���� 
        LSRS     R0,R4,#+8
        LSLS     R0,R0,#+1
        ADDS     R0,R0,#+160
        UXTB     R0,R0
          CFI FunCall IIC_Send_Byte
        BL       IIC_Send_Byte
//  123 	}	 
//  124 	IIC_Wait_Ack();	   
          CFI FunCall IIC_Wait_Ack
        BL       IIC_Wait_Ack
//  125     IIC_Send_Byte(WriteAddr%256);   //���͵͵�ַ
        MOV      R0,R4
        UXTB     R0,R0
          CFI FunCall IIC_Send_Byte
        BL       IIC_Send_Byte
//  126 	IIC_Wait_Ack(); 	 										  		   
          CFI FunCall IIC_Wait_Ack
        BL       IIC_Wait_Ack
//  127 	IIC_Send_Byte(DataToWrite);     //�����ֽ�							   
        MOV      R0,R5
          CFI FunCall IIC_Send_Byte
        BL       IIC_Send_Byte
//  128 	IIC_Wait_Ack();  		    	   
          CFI FunCall IIC_Wait_Ack
        BL       IIC_Wait_Ack
//  129     IIC_Stop();//����һ��ֹͣ���� 
          CFI FunCall IIC_Stop
        BL       IIC_Stop
//  130 	//delay_ms(10);	 
//  131 	delay_ms(5);	 //5-ok;3-ok;2-ok;1-bad;
        MOVS     R0,#+5
        POP      {R1,R4,R5,LR}
          CFI R4 SameValue
          CFI R5 SameValue
          CFI R14 SameValue
          CFI CFA R13+0
          CFI FunCall _Z8delay_mst
        B.N      _Z8delay_mst
          CFI EndBlock cfiBlock4
//  132 }
//  133 //��AT24CXX�����ָ����ַ��ʼд�볤��ΪLen������
//  134 //�ú�������д��16bit����32bit������.
//  135 //WriteAddr  :��ʼд��ĵ�ַ  
//  136 //DataToWrite:���������׵�ַ
//  137 //Len        :Ҫд�����ݵĳ���2,4

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock5 Using cfiCommon0
          CFI Function AT24CXX_WriteLenByte
        THUMB
//  138 void AT24CXX_WriteLenByte(uint16_t WriteAddr,uint32_t DataToWrite,uint8_t Len)
//  139 {  	
AT24CXX_WriteLenByte:
        PUSH     {R3-R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI R7 Frame(CFA, -8)
          CFI R6 Frame(CFA, -12)
          CFI R5 Frame(CFA, -16)
          CFI R4 Frame(CFA, -20)
          CFI CFA R13+24
        MOV      R4,R0
        MOV      R5,R1
        MOV      R6,R2
//  140 	uint8_t t;
//  141 	for(t=0;t<Len;t++)
        MOVS     R7,#+0
        B.N      ??AT24CXX_WriteLenByte_0
//  142 	{
//  143 		AT24CXX_WriteOneByte(WriteAddr+t,(DataToWrite>>(8*t))&0xff);
??AT24CXX_WriteLenByte_1:
        LSLS     R0,R7,#+3
        LSR      R1,R5,R0
        UXTB     R1,R1
        ADDS     R0,R7,R4
        UXTH     R0,R0
          CFI FunCall AT24CXX_WriteOneByte
        BL       AT24CXX_WriteOneByte
//  144 	}												    
        ADDS     R7,R7,#+1
        UXTB     R7,R7
??AT24CXX_WriteLenByte_0:
        CMP      R7,R6
        BLT.N    ??AT24CXX_WriteLenByte_1
//  145 }
        POP      {R0,R4-R7,PC}    ;; return
          CFI EndBlock cfiBlock5
//  146 
//  147 //��AT24CXX�����ָ����ַ��ʼ��������ΪLen������
//  148 //�ú������ڶ���16bit����32bit������.
//  149 //ReadAddr   :��ʼ�����ĵ�ַ 
//  150 //����ֵ     :����
//  151 //Len        :Ҫ�������ݵĳ���2,4

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock6 Using cfiCommon0
          CFI Function AT24CXX_ReadLenByte
        THUMB
//  152 uint32_t AT24CXX_ReadLenByte(uint16_t ReadAddr,uint8_t Len)
//  153 {  	
AT24CXX_ReadLenByte:
        PUSH     {R3-R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI R7 Frame(CFA, -8)
          CFI R6 Frame(CFA, -12)
          CFI R5 Frame(CFA, -16)
          CFI R4 Frame(CFA, -20)
          CFI CFA R13+24
        MOV      R4,R0
        MOV      R5,R1
//  154 	uint8_t t;
//  155 	uint32_t temp=0;
        MOVS     R6,#+0
//  156 	for(t=0;t<Len;t++)
        MOV      R7,R6
        B.N      ??AT24CXX_ReadLenByte_0
//  157 	{
//  158 		temp<<=8;
//  159 		temp+=AT24CXX_ReadOneByte(ReadAddr+Len-t-1); 	 				   
??AT24CXX_ReadLenByte_1:
        ADDS     R0,R5,R4
        SUBS     R0,R0,R7
        SUBS     R0,R0,#+1
        UXTH     R0,R0
          CFI FunCall AT24CXX_ReadOneByte
        BL       AT24CXX_ReadOneByte
        ADD      R6,R0,R6, LSL #+8
//  160 	}
        ADDS     R7,R7,#+1
??AT24CXX_ReadLenByte_0:
        UXTB     R7,R7
        CMP      R7,R5
        BCC.N    ??AT24CXX_ReadLenByte_1
//  161 	return temp;												    
        MOV      R0,R6
        POP      {R1,R4-R7,PC}    ;; return
          CFI EndBlock cfiBlock6
//  162 }
//  163 //���AT24CXX�Ƿ�����
//  164 //��������24XX�����һ����ַ(255)���洢��־��.
//  165 //���������24Cϵ��,�����ַҪ�޸�
//  166 //����1:���ʧ��
//  167 //����0:���ɹ�

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock7 Using cfiCommon0
          CFI Function AT24CXX_Check
        THUMB
//  168 uint8_t AT24CXX_Check(void)
//  169 {
AT24CXX_Check:
        PUSH     {R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI CFA R13+8
//  170 	uint8_t temp;
//  171 	temp=AT24CXX_ReadOneByte(255);//����ÿ�ο�����дAT24CXX			   
//  172 	if(temp==0X55)return 0;		   
        MOVS     R0,#+255
          CFI FunCall AT24CXX_ReadOneByte
        BL       AT24CXX_ReadOneByte
        CMP      R0,#+85
        BNE.N    ??AT24CXX_Check_0
        MOVS     R0,#+0
        POP      {R1,PC}
//  173 	else//�ų���һ�γ�ʼ�������
//  174 	{
//  175 		AT24CXX_WriteOneByte(255,0X55);
??AT24CXX_Check_0:
        MOVS     R1,#+85
        MOVS     R0,#+255
          CFI FunCall AT24CXX_WriteOneByte
        BL       AT24CXX_WriteOneByte
//  176 	    temp=AT24CXX_ReadOneByte(255);	  
//  177 		if(temp==0X55)return 0;
        MOVS     R0,#+255
          CFI FunCall AT24CXX_ReadOneByte
        BL       AT24CXX_ReadOneByte
        CMP      R0,#+85
        BNE.N    ??AT24CXX_Check_1
        MOVS     R0,#+0
        POP      {R1,PC}
//  178 	}
//  179 	return 1;											  
??AT24CXX_Check_1:
        MOVS     R0,#+1
        POP      {R1,PC}          ;; return
          CFI EndBlock cfiBlock7
//  180 }
//  181 
//  182 //��AT24CXX�����ָ����ַ��ʼ����ָ������������
//  183 //ReadAddr :��ʼ�����ĵ�ַ ��24c02Ϊ0~255
//  184 //pBuffer  :���������׵�ַ
//  185 //NumToRead:Ҫ�������ݵĸ���
//  186 //HAL_StatusTypeDef AT24CXX_Read(uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize)
//  187 //void AT24CXX_Read(uint16_t ReadAddr,uint8_t *pBuffer,uint16_t NumToRead)

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock8 Using cfiCommon0
          CFI Function AT24CXX_Read
        THUMB
//  188 void AT24CXX_Read(uint16_t ReadAddr,uint8_t *pBuffer,uint32_t NumToRead)
//  189 
//  190 {
AT24CXX_Read:
        PUSH     {R4-R6,LR}
          CFI R14 Frame(CFA, -4)
          CFI R6 Frame(CFA, -8)
          CFI R5 Frame(CFA, -12)
          CFI R4 Frame(CFA, -16)
          CFI CFA R13+16
        MOV      R4,R0
        MOV      R5,R1
        MOVS     R6,R2
        B.N      ??AT24CXX_Read_0
//  191 	while(NumToRead)
//  192 	{
//  193 		*pBuffer++=AT24CXX_ReadOneByte(ReadAddr++);	
??AT24CXX_Read_1:
        MOV      R0,R4
        UXTH     R0,R0
          CFI FunCall AT24CXX_ReadOneByte
        BL       AT24CXX_ReadOneByte
        ADDS     R4,R4,#+1
        STRB     R0,[R5], #+1
//  194 		NumToRead--;
        SUBS     R6,R6,#+1
//  195 	}
??AT24CXX_Read_0:
        BNE.N    ??AT24CXX_Read_1
//  196 }  
        POP      {R4-R6,PC}       ;; return
          CFI EndBlock cfiBlock8
//  197 //��AT24CXX�����ָ����ַ��ʼд��ָ������������
//  198 //WriteAddr :��ʼд��ĵ�ַ ��24c02Ϊ0~255
//  199 //pBuffer   :���������׵�ַ
//  200 //NumToWrite:Ҫд�����ݵĸ���
//  201 //HAL_StatusTypeDef AT24CXX_Write(uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize)
//  202 //void AT24CXX_Write(u16 WriteAddr,u8 *pBuffer,u16 NumToWrite)

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock9 Using cfiCommon0
          CFI Function AT24CXX_Write
        THUMB
//  203 void AT24CXX_Write(uint16_t WriteAddr,uint8_t*pBuffer,uint32_t NumToWrite)
//  204 
//  205 {
AT24CXX_Write:
        PUSH     {R4-R6,LR}
          CFI R14 Frame(CFA, -4)
          CFI R6 Frame(CFA, -8)
          CFI R5 Frame(CFA, -12)
          CFI R4 Frame(CFA, -16)
          CFI CFA R13+16
        MOV      R4,R0
        MOV      R5,R1
        MOV      R6,R2
        B.N      ??AT24CXX_Write_0
//  206 	while(NumToWrite--)
//  207 	{
//  208 		AT24CXX_WriteOneByte(WriteAddr,*pBuffer);
??AT24CXX_Write_1:
        LDRB     R1,[R5], #+1
        MOV      R0,R4
        UXTH     R0,R0
          CFI FunCall AT24CXX_WriteOneByte
        BL       AT24CXX_WriteOneByte
//  209 		WriteAddr++;
        ADDS     R4,R4,#+1
//  210 		pBuffer++;
//  211 	}
??AT24CXX_Write_0:
        MOV      R0,R6
        SUBS     R6,R0,#+1
        CMP      R0,#+0
        BNE.N    ??AT24CXX_Write_1
//  212 }
        POP      {R4-R6,PC}       ;; return
          CFI EndBlock cfiBlock9
//  213 
//  214 //��ʼ��IIC

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock10 Using cfiCommon0
          CFI Function IIC_Init
        THUMB
//  215 void IIC_Init(void)
//  216 {		
IIC_Init:
        PUSH     {R0-R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+24
//  217 	GPIO_InitTypeDef GPIO_InitStruct;
//  218 
//  219 	GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_7;
        MOVS     R0,#+192
        STR      R0,[SP, #+0]
//  220 	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
        MOVS     R0,#+1
        STR      R0,[SP, #+4]
//  221 	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
        STR      R0,[SP, #+12]
//  222 	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
        LDR.N    R4,??DataTable9_1  ;; 0x40010c00
        ADD      R1,SP,#+0
        MOV      R0,R4
          CFI FunCall HAL_GPIO_Init
        BL       HAL_GPIO_Init
//  223 	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6|GPIO_PIN_7, GPIO_PIN_SET);
        MOVS     R2,#+1
        MOVS     R1,#+192
        MOV      R0,R4
          CFI FunCall HAL_GPIO_WritePin
        BL       HAL_GPIO_WritePin
//  224 	
//  225 }
        POP      {R0-R4,PC}       ;; return
          CFI EndBlock cfiBlock10
//  226 //����IIC��ʼ�ź�

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock11 Using cfiCommon0
          CFI Function IIC_Start
        THUMB
//  227 void IIC_Start(void)
//  228 {
IIC_Start:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
//  229 	SDA_OUT();     //sda�����
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x30000000
        STR      R1,[R0, #+0]
//  230 	IIC_SDA=1;	  	  
        LDR.N    R4,??DataTable9_2  ;; 0x42218198
        MOVS     R0,#+1
        STR      R0,[R4, #+4]
//  231 	IIC_SCL=1;
        STR      R0,[R4, #+0]
//  232 	delay_us(4);
        MOVS     R0,#+4
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  233  	IIC_SDA=0;//START:when CLK is high,DATA change form high to low 
        MOVS     R0,#+0
        STR      R0,[R4, #+4]
//  234 	delay_us(4);
        MOVS     R0,#+4
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  235 	IIC_SCL=0;//ǯסI2C���ߣ�׼�����ͻ�������� 
        MOVS     R0,#+0
        STR      R0,[R4, #+0]
//  236 }	  
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock11
//  237 //����IICֹͣ�ź�

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock12 Using cfiCommon0
          CFI Function IIC_Stop
        THUMB
//  238 void IIC_Stop(void)
//  239 {
IIC_Stop:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
//  240 	SDA_OUT();//sda�����
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x30000000
        STR      R1,[R0, #+0]
//  241 	IIC_SCL=0;
        LDR.N    R4,??DataTable9_2  ;; 0x42218198
        MOVS     R0,#+0
        STR      R0,[R4, #+0]
//  242 	IIC_SDA=0;//STOP:when CLK is high DATA change form low to high
        STR      R0,[R4, #+4]
//  243  	delay_us(4);
        MOVS     R0,#+4
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  244 	IIC_SCL=1; 
        MOVS     R0,#+1
        STR      R0,[R4, #+0]
//  245 	IIC_SDA=1;//����I2C���߽����ź�
        STR      R0,[R4, #+4]
//  246 	delay_us(4);							   	
        MOVS     R0,#+4
        POP      {R4,LR}
          CFI R4 SameValue
          CFI R14 SameValue
          CFI CFA R13+0
          CFI FunCall _Z8delay_usj
        B.N      _Z8delay_usj
          CFI EndBlock cfiBlock12
//  247 }
//  248 //�ȴ�Ӧ���źŵ���
//  249 //����ֵ��1������Ӧ��ʧ��
//  250 //        0������Ӧ��ɹ�

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock13 Using cfiCommon0
          CFI Function IIC_Wait_Ack
        THUMB
//  251 uint8_t IIC_Wait_Ack(void)
//  252 {
IIC_Wait_Ack:
        PUSH     {R3-R5,LR}
          CFI R14 Frame(CFA, -4)
          CFI R5 Frame(CFA, -8)
          CFI R4 Frame(CFA, -12)
          CFI CFA R13+16
//  253 	uint8_t ucErrTime=0;
        MOVS     R4,#+0
//  254 	SDA_IN();      //SDA����Ϊ����  
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x80000000
        STR      R1,[R0, #+0]
//  255 	IIC_SDA=1;delay_us(1);	   
        MOVS     R0,#+1
        LDR.N    R1,??DataTable9_3  ;; 0x4221819c
        STR      R0,[R1, #+0]
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  256 	IIC_SCL=1;delay_us(1);	 
        LDR.N    R5,??DataTable9_4  ;; 0x4221811c
        MOVS     R0,#+1
        STR      R0,[R5, #+124]
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  257 	while(READ_SDA)
??IIC_Wait_Ack_0:
        LDR      R0,[R5, #+0]
        CMP      R0,#+0
        BEQ.N    ??IIC_Wait_Ack_1
//  258 	{
//  259 		ucErrTime++;
        ADDS     R4,R4,#+1
//  260 		if(ucErrTime>250)
        UXTB     R4,R4
        CMP      R4,#+251
        BLT.N    ??IIC_Wait_Ack_0
//  261 		{
//  262 			IIC_Stop();
          CFI FunCall IIC_Stop
        BL       IIC_Stop
//  263 			return 1;
        MOVS     R0,#+1
        POP      {R1,R4,R5,PC}
//  264 		}
//  265 	}
//  266 	IIC_SCL=0;//ʱ�����0 	   
??IIC_Wait_Ack_1:
        MOVS     R0,#+0
        STR      R0,[R5, #+124]
//  267 	return 0;  
        POP      {R1,R4,R5,PC}    ;; return
          CFI EndBlock cfiBlock13
//  268 } 
//  269 //����ACKӦ��

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock14 Using cfiCommon0
          CFI Function IIC_Ack
        THUMB
//  270 void IIC_Ack(void)
//  271 {
IIC_Ack:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
//  272 	IIC_SCL=0;
        LDR.N    R4,??DataTable9_2  ;; 0x42218198
        MOVS     R0,#+0
        STR      R0,[R4, #+0]
//  273 	SDA_OUT();
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x30000000
        STR      R1,[R0, #+0]
//  274 	IIC_SDA=0;
        MOVS     R0,#+0
        STR      R0,[R4, #+4]
//  275 	delay_us(2);
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  276 	IIC_SCL=1;
        MOVS     R0,#+1
        STR      R0,[R4, #+0]
//  277 	delay_us(2);
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  278 	IIC_SCL=0;
        MOVS     R0,#+0
        STR      R0,[R4, #+0]
//  279 }
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock14
//  280 //������ACKӦ��		    

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock15 Using cfiCommon0
          CFI Function IIC_NAck
        THUMB
//  281 void IIC_NAck(void)
//  282 {
IIC_NAck:
        PUSH     {R4,LR}
          CFI R14 Frame(CFA, -4)
          CFI R4 Frame(CFA, -8)
          CFI CFA R13+8
//  283 	IIC_SCL=0;
        LDR.N    R4,??DataTable9_2  ;; 0x42218198
        MOVS     R0,#+0
        STR      R0,[R4, #+0]
//  284 	SDA_OUT();
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x30000000
        STR      R1,[R0, #+0]
//  285 	IIC_SDA=1;
        MOVS     R0,#+1
        STR      R0,[R4, #+4]
//  286 	delay_us(2);
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  287 	IIC_SCL=1;
        MOVS     R0,#+1
        STR      R0,[R4, #+0]
//  288 	delay_us(2);
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  289 	IIC_SCL=0;
        MOVS     R0,#+0
        STR      R0,[R4, #+0]
//  290 }					 				     
        POP      {R4,PC}          ;; return
          CFI EndBlock cfiBlock15
//  291 //IIC����һ���ֽ�
//  292 //���شӻ�����Ӧ��
//  293 //1����Ӧ��
//  294 //0����Ӧ��			  

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock16 Using cfiCommon0
          CFI Function IIC_Send_Byte
        THUMB
//  295 void IIC_Send_Byte(uint8_t txd)
//  296 {                        
IIC_Send_Byte:
        PUSH     {R4-R6,LR}
          CFI R14 Frame(CFA, -4)
          CFI R6 Frame(CFA, -8)
          CFI R5 Frame(CFA, -12)
          CFI R4 Frame(CFA, -16)
          CFI CFA R13+16
        MOV      R4,R0
//  297     uint8_t t;   
//  298 	SDA_OUT(); 	    
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x30000000
        STR      R1,[R0, #+0]
//  299     IIC_SCL=0;//����ʱ�ӿ�ʼ���ݴ���
        LDR.N    R5,??DataTable9_2  ;; 0x42218198
        MOVS     R0,#+0
        STR      R0,[R5, #+0]
//  300     for(t=0;t<8;t++)
        MOV      R6,R0
        B.N      ??IIC_Send_Byte_0
//  301     {              
//  302         //IIC_SDA=(txd&0x80)>>7;
//  303 		if((txd&0x80)>>7)
??IIC_Send_Byte_1:
        UXTB     R4,R4
        LSRS     R0,R4,#+7
        SUBS     R1,R0,#+1
        SBCS     R1,R1,R1
        MVNS     R1,R1
        LSRS     R1,R1,#+31
        STR      R1,[R5, #+4]
//  304 			IIC_SDA=1;
//  305 		else
//  306 			IIC_SDA=0;
//  307 		txd<<=1; 	  
        LSLS     R4,R4,#+1
//  308 		delay_us(2);   //��TEA5767��������ʱ���Ǳ����
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  309 		IIC_SCL=1;
        MOVS     R0,#+1
        STR      R0,[R5, #+0]
//  310 		delay_us(2); 
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  311 		IIC_SCL=0;	
        MOVS     R0,#+0
        STR      R0,[R5, #+0]
//  312 		delay_us(2);
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  313     }	 
        ADDS     R6,R6,#+1
??IIC_Send_Byte_0:
        CMP      R6,#+8
        BLT.N    ??IIC_Send_Byte_1
//  314 } 	    
        POP      {R4-R6,PC}       ;; return
          CFI EndBlock cfiBlock16
//  315 //��1���ֽڣ�ack=1ʱ������ACK��ack=0������nACK   

        SECTION `.text`:CODE:NOROOT(1)
          CFI Block cfiBlock17 Using cfiCommon0
          CFI Function IIC_Read_Byte
        THUMB
//  316 uint8_t IIC_Read_Byte(unsigned char ack)
//  317 {
IIC_Read_Byte:
        PUSH     {R3-R7,LR}
          CFI R14 Frame(CFA, -4)
          CFI R7 Frame(CFA, -8)
          CFI R6 Frame(CFA, -12)
          CFI R5 Frame(CFA, -16)
          CFI R4 Frame(CFA, -20)
          CFI CFA R13+24
        MOV      R4,R0
//  318 	unsigned char i,receive=0;
        MOVS     R5,#+0
//  319 	SDA_IN();//SDA����Ϊ����
        LDR.N    R0,??DataTable9_1  ;; 0x40010c00
        LDR      R1,[R0, #+0]
        LSLS     R1,R1,#+4
        LSRS     R1,R1,#+4
        STR      R1,[R0, #+0]
        LDR      R1,[R0, #+0]
        ORR      R1,R1,#0x80000000
        STR      R1,[R0, #+0]
//  320     for(i=0;i<8;i++ )
        MOV      R6,R5
        LDR.N    R7,??DataTable9_4  ;; 0x4221811c
        B.N      ??IIC_Read_Byte_0
//  321 	{
//  322         IIC_SCL=0; 
??IIC_Read_Byte_1:
        MOVS     R0,#+0
        STR      R0,[R7, #+124]
//  323         delay_us(2);
        MOVS     R0,#+2
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  324 		IIC_SCL=1;
        MOVS     R0,#+1
        STR      R0,[R7, #+124]
//  325         receive<<=1;
        LSLS     R5,R5,#+1
//  326         if(READ_SDA)receive++;   
        LDR      R0,[R7, #+0]
        CMP      R0,#+0
        BEQ.N    ??IIC_Read_Byte_2
        ADDS     R5,R5,#+1
//  327 		delay_us(1); 
??IIC_Read_Byte_2:
        MOVS     R0,#+1
          CFI FunCall _Z8delay_usj
        BL       _Z8delay_usj
//  328     }					 
        ADDS     R6,R6,#+1
??IIC_Read_Byte_0:
        CMP      R6,#+8
        BLT.N    ??IIC_Read_Byte_1
//  329     if (!ack)
        CMP      R4,#+0
        BNE.N    ??IIC_Read_Byte_3
//  330         IIC_NAck();//����nACK
          CFI FunCall IIC_NAck
        BL       IIC_NAck
        B.N      ??IIC_Read_Byte_4
//  331     else
//  332         IIC_Ack(); //����ACK   
??IIC_Read_Byte_3:
          CFI FunCall IIC_Ack
        BL       IIC_Ack
//  333     return receive;
??IIC_Read_Byte_4:
        MOV      R0,R5
        UXTB     R0,R0
        POP      {R1,R4-R7,PC}    ;; return
          CFI EndBlock cfiBlock17
//  334 }

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable9:
        DC32     delayCnt

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable9_1:
        DC32     0x40010c00

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable9_2:
        DC32     0x42218198

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable9_3:
        DC32     0x4221819c

        SECTION `.text`:CODE:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
??DataTable9_4:
        DC32     0x4221811c

        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION __DLIB_PERTHREAD:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        SECTION __DLIB_PERTHREAD_init:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
//  335 
//  336 /*--------------------------MKS EEPROM-------------------------*/
//  337 
// 
//   2 bytes in section .bss
// 866 bytes in section .text
// 
// 866 bytes of CODE memory
//   2 bytes of DATA memory
//
//Errors: none
//Warnings: none
