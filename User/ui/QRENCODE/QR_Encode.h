#ifndef __QRENCODE_H
#define __QRENCODE_H

#ifndef FALSE			/* in case these macros already exist */
#define FALSE	0		/* values of boolean */
#endif
#ifndef TRUE
#define TRUE	1
#endif

//typedef enum {FALSE = 0, TRUE = !FALSE} bool;
#define min(a,b)	(((a) < (b)) ? (a) : (b))
//4�־���ȼ����ɻָ������ֱ���Ϊ��
#define QR_LEVEL_L	0	//7%������ɱ�����
#define QR_LEVEL_M	1	//15%������ɱ�����
#define QR_LEVEL_Q	2	//25%������ɱ�����
#define QR_LEVEL_H	3	//30%������ɱ�����

//������ʽ
#define QR_MODE_NUMERAL		0
#define QR_MODE_ALPHABET	1
#define QR_MODE_8BIT		2
#define QR_MODE_KANJI		3
#define QR_MODE_CHINESE		4

//Number of bits per length field
//Encoding		Ver.1�C9		10�C26		27�C40
//Numeric		10			12			14
//Alphanumeric	9			11			13
//Byte			8			16			16
//Kanji			8			10			12 
//Chinese		
//P17 �ַ�����ָʾ��λ��
#define QR_VRESION_S	0 
#define QR_VRESION_M	1 
#define QR_VRESION_L	2 

#define QR_MARGIN	4
#define	QR_VER1_SIZE	21// �汾��������

#define MAX_ALLCODEWORD		400 // 3706//400// //P14,P35 ��������[����]* (E) (VER:40), ��������Ϊ8λ
#define MAX_DATACODEWORD	 400 //2956//400// //P27     �����Ϣ����(Ver��40-L)����������Ϊ8λ
#define MAX_CODEBLOCK		153	//���������� Ver��36.37.38_L_�ڶ���
#define MAX_MODULESIZE		21 // 21:Version=1,����ַ�=17(8.5������)
								// 25:Version=2,����ַ�=32(16������)
								// 29:Version=3,����ַ�=49(24.5������)
								// 33:Version=4,����ַ�=78(39������)
								// 37:Version=5,����ַ�=106(53������) 
								// 41:Version=6,����ַ�=134(67������)
							 	// 45:Version=7,����ַ�=154(77������)
							 	// 49:Version=8,����ַ�=192(96������)
								// 53:
//#define	MAX_MODULESIZE	177//P14 ÿ�ߵ�ģ������A�� (VER:40   ) Ver��40 = 21+��Ver-1��*4

extern int m_nSymbleSize;
extern BYTE m_byModuleData[MAX_MODULESIZE][MAX_MODULESIZE];
/////////////////////////////////////////////////////////////////////////////
typedef struct 
{
	u16 ncRSBlock;		//����Ŀ���
	u16 ncAllCodeWord;	//��������
	u16 ncDataCodeWord;	//ָ������ȼ��µ�����������
}RS_BLOCKINFO;
typedef struct 
{
	u16 nVersionNo;			//ver 1~40
	u16 ncAllCodeWord; 		//��������=��������+��������

	u16 ncDataCodeWord[4];	//ָ������ȼ��µ���������(0=L,1=M,2=Q,3=H)
	u16 ncAlignPoint;		//P61 ��E1 У��ͼ�� ����
	u16 nAlignPoint[6];		//P61 ��E1 У��ͼ��	��������
	//(0=L,1=M,2=Q,3=H)
	RS_BLOCKINFO RS_BlockInfo1[4];	//�����1
	RS_BLOCKINFO RS_BlockInfo2[4];	//�����2
}QR_VERSIONINFO;

#if defined(__cplusplus)
extern "C" {
#endif

bool EncodeData(char *lpsSource);

int GetEncodeVersion(int nVersion, char *lpsSource, int ncLength);
//bool EncodeSourceData(char *lpsSource, int ncLength, int nVerGroup);
int EncodeSourceData(char *lpsSource, int ncLength, int nVerGroup);

int GetBitLength(BYTE nMode, int ncData, int nVerGroup);

int SetBitStream(int nIndex, WORD wData, int ncData);

bool IsNumeralData(unsigned char c);
bool IsAlphabetData(unsigned char c);
bool IsKanjiData(unsigned char c1, unsigned char c2);
bool IsChineseData(unsigned char c1, unsigned char c2);
	
BYTE AlphabetToBinaly(unsigned char c);
WORD KanjiToBinaly(WORD wc);
WORD ChineseToBinaly(WORD wc);
void GetRSCodeWord(BYTE *lpbyRSWork, int ncDataCodeWord, int ncRSCodeWord);

void FormatModule(void);

void SetFunctionModule(void);
void SetFinderPattern(int x, int y);
void SetAlignmentPattern(int x, int y);
void SetVersionPattern(void);
void SetCodeWordPattern(void);
void SetMaskingPattern(int nPatternNo);
void SetFormatInfoPattern(int nPatternNo);
int CountPenalty(void);
void Print_2DCode(void);
#if defined(__cplusplus)
}
#endif

#endif
