#ifndef __AT24CXX_H_
#define __AT24CXX_H_
#ifdef __cplusplus
 extern "C" {
#endif
#include "i2c.h"
   
#include "tim.h"

#define AT24C01		127
#define AT24C02		255
#define AT24C04		511
#define AT24C08		1023
#define AT24C16		2047
#define AT24C32		4095
#define AT24C64	        8191
#define AT24C128	16383
#define AT24C256	32767  

#define EE_TYPE AT24C16

/*
void AT24CXX_Init(void);
void AT24CXX_WriteByte(uint16_t Reg, uint8_t Value);
uint8_t AT24CXX_ReadByte(uint16_t Reg);
HAL_StatusTypeDef AT24CXX_PageWrite(uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef AT24CXX_Write(uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef AT24CXX_Read(uint16_t MemAddress, uint8_t* pBuffer, uint32_t BufferSize);
HAL_StatusTypeDef AT24CXX_IsDeviceReady(uint32_t Trials);
void I2Cx_Error(uint8_t Addr);
uint8_t AT24CXX_Check(void);
*/

//IIC���в�������
void IIC_Init(void); 			   //��ʼ��IIC��IO��			   
void IIC_Start(void);			  //����IIC��ʼ�ź�
void IIC_Stop(void); 			  //����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);			  //IIC����һ���ֽ�
uint8_t IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
 uint8_t IIC_Wait_Ack(void);				  //IIC�ȴ�ACK�ź�
 void IIC_Ack(void);					  //IIC����ACK�ź�
 void IIC_NAck(void); 			  //IIC������ACK�ź�

 void IIC_Write_One_Byte(uint8_t daddr,uint8_t addr,uint8_t data);
 uint8_t IIC_Read_One_Byte(uint8_t daddr,uint8_t addr);		


 uint8_t AT24CXX_ReadOneByte(uint16_t ReadAddr);						  //ָ����ַ��ȡһ���ֽ�
 void AT24CXX_WriteOneByte(uint16_t WriteAddr,uint8_t DataToWrite); 	  //ָ����ַд��һ���ֽ�
 void AT24CXX_WriteLenByte(uint16_t WriteAddr,uint32_t DataToWrite,uint8_t Len);//ָ����ַ��ʼд��ָ�����ȵ�����
 uint32_t AT24CXX_ReadLenByte(uint16_t ReadAddr,uint8_t Len);				  //ָ����ַ��ʼ��ȡָ����������
 void AT24CXX_Write(uint16_t WriteAddr,uint8_t *pBuffer,uint32_t NumToWrite);  //��ָ����ַ��ʼд��ָ�����ȵ�����
 void AT24CXX_Read(uint16_t ReadAddr,uint8_t *pBuffer,uint32_t NumToRead);	  //��ָ����ַ��ʼ����ָ�����ȵ�����

 uint8_t AT24CXX_Check(void);	//�������
 void AT24CXX_Init(void); //��ʼ��IIC


#ifdef __cplusplus
}
#endif

#endif












