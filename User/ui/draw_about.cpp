#include "draw_about.h"
#include "draw_ui.h"
#include <string.h>
#include <stdio.h>
#include "pic_manager.h"
#include "spi_flash.h"

#ifndef GUI_FLASH
#define GUI_FLASH
#endif

static GUI_HWIN hAboutWnd;

extern char wifi_firm_ver[20];
//char wifi_firm_ver[20] = {0};

//extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz18;
extern GUI_CONST_STORAGE GUI_BITMAP bmp_logo;
extern int X_ADD,X_INTERVAL;   //**ͼƬ���

static BUTTON_STRUCT buttonRet;
static TEXT_Handle TFT_Version_text,TFT_Type_text,Wifi_Ver_text,Shengma_text;

static void cbAboutWin(WM_MESSAGE * pMsg) {

	switch (pMsg->MsgId)
	{
		case WM_PAINT:
			//GUI_SetBkColor(GUI_BLUE);
			//GUI_Clear();
			//GUI_DispString("window");
			break;
		case WM_TOUCH:
		 	
			break;
		case WM_TOUCH_CHILD:
			
			break;
			
		case WM_NOTIFY_PARENT:
			if(pMsg->Data.v == WM_NOTIFICATION_RELEASED)
			{
				if(pMsg->hWinSrc == buttonRet.btnHandle)
				{
					
					Clear_About();
					draw_return_ui();
				}
				
			}
			break;
			
		default:
			WM_DefaultProc(pMsg);
		}
	}

#define ESP_WIFI		0x02
extern char cmd_code[CMD_CODE_LEN+1];

void draw_About()
{
		
//	int titleHeight = 30;

//	int imgHeight = LCD_HEIGHT - titleHeight;	
	
	int i;
	uint8_t buf[101];
	
	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != ABOUT_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = ABOUT_UI;
	}
	disp_state = ABOUT_UI;
/*
	GUI_SetBkColor(gCfgItems.state_background_color);
	GUI_SetColor(gCfgItems.state_text_color);
	GUI_Clear();
*/
	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();


	
	//GUI_DispStringAt(about_menu.type, 240, titleHeight  + 135);
	//GUI_DispStringAt(about_menu.version, 240, titleHeight + 175);

	GUI_DispStringAt(creat_title_text(),  TITLE_XPOS, TITLE_YPOS);
	
	hAboutWnd = WM_CreateWindow(0,titleHeight, LCD_WIDTH, imgHeight, WM_CF_SHOW, cbAboutWin, 0);

	TFT_Type_text = TEXT_CreateEx(BTN_X_PIXEL-25,BTN_Y_PIXEL-90, LCD_WIDTH-BTN_X_PIXEL, 30, hAboutWnd, WM_CF_SHOW,TEXT_CF_LEFT|GUI_TA_VCENTER, GUI_ID_TEXT1, "Type:MKS TFT");
	TFT_Version_text = TEXT_CreateEx(BTN_X_PIXEL-25,BTN_Y_PIXEL-60, LCD_WIDTH-BTN_X_PIXEL, 30, hAboutWnd, WM_CF_SHOW,TEXT_CF_LEFT|GUI_TA_VCENTER, GUI_ID_TEXT1, "Version:1.0.0");
	Wifi_Ver_text = TEXT_CreateEx(BTN_X_PIXEL-25,BTN_Y_PIXEL-30, LCD_WIDTH-BTN_X_PIXEL, 30, hAboutWnd, WM_CF_SHOW,TEXT_CF_LEFT|GUI_TA_VCENTER, GUI_ID_TEXT1, "");
	Shengma_text = TEXT_CreateEx(BTN_X_PIXEL-25,BTN_Y_PIXEL, LCD_WIDTH-2*BTN_X_PIXEL, 30, hAboutWnd, WM_CF_SHOW,TEXT_CF_LEFT|GUI_TA_VCENTER, GUI_ID_TEXT1, "");

	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4 , BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hAboutWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	//TEXT_SetDefaultFont(&FONT_STATE_INF);	

	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);	
	BUTTON_SetBitmapEx(buttonRet.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);

	TEXT_SetBkColor(TFT_Type_text, gCfgItems.background_color);
	TEXT_SetTextColor(TFT_Type_text, gCfgItems.title_color);
	TEXT_SetBkColor(TFT_Version_text, gCfgItems.background_color);
	TEXT_SetTextColor(TFT_Version_text, gCfgItems.title_color);
	TEXT_SetBkColor(Wifi_Ver_text, gCfgItems.background_color);
	TEXT_SetTextColor(Wifi_Ver_text, gCfgItems.title_color);
	TEXT_SetBkColor(Shengma_text, gCfgItems.background_color);
	TEXT_SetTextColor(Shengma_text, gCfgItems.title_color);

	
       //HAL_Delay(10);
       memset(cmd_code,0,sizeof(cmd_code));
	strcpy((char*)cmd_code,(const char *)about_menu.type);
	SPI_FLASH_BufferRead((u8 *)buf,ABOUT_TYPE_ADDR,100);
	//strcat((char*)cmd_code,(const char *)about_menu.type_name);
	strcat((char*)cmd_code,(const char *)buf);
	TEXT_SetText(TFT_Type_text,(char *)cmd_code);
	HAL_Delay(10);
	memset(cmd_code,0,sizeof(cmd_code));
	strcpy((char*)cmd_code,(const char *)about_menu.version);
	SPI_FLASH_BufferRead((u8 *)buf,ABOUT_VERSION_ADDR,100);
	//strcat((char*)cmd_code,(const char *)about_menu.firmware_v);	
	strcat((char*)cmd_code,(const char *)buf);	
	TEXT_SetText(TFT_Version_text,(char *)cmd_code);

	//GUI_DispStringAt(about_menu.type, 40, titleHeight  + 50);
	//GUI_DispStringAt(about_menu.version, 40, titleHeight + 75); 
	HAL_Delay(100);
	SPI_FLASH_BufferRead((u8 *)cmd_code,ABOUT_COMPANY_ADDR,100);
	TEXT_SetText(Wifi_Ver_text,(char*)cmd_code);
	
	HAL_Delay(100);
	SPI_FLASH_BufferRead((u8 *)cmd_code,ABOUT_EMAINL_ADDR,100);
	TEXT_SetText(Shengma_text,(char*)cmd_code);
	
	if(gCfgItems.wifi_type == ESP_WIFI)
	{
		//GUI_DispStringAt(about_menu.wifi, 40, titleHeight + 100);
		//TEXT_SetText(TFT_Version_text,about_menu.wifi);
		if(wifi_firm_ver[0] != 0)
		{
			/*memset(cmd_code,0,sizeof(cmd_code));
			//GUI_DispStringAt((const char *)wifi_firm_ver, 90, titleHeight + 100); 
			strcpy((char*)cmd_code,(const char *)about_menu.wifi);
			strcat((char*)cmd_code,(const char *)wifi_firm_ver);
			TEXT_SetText(Wifi_Ver_text,(char*)cmd_code);*/
			//memset(buf,0,sizeof(buf));
			//SPI_FLASH_BufferRead((u8 *)cmd_code,ABOUT_COMPANY_ADDR,100);
			//strncpy(buf,(const char *)&cmd_code[37],100-37);
			//cmd_code[36]='\n';
			//cmd_code[37]=0;
			//strcat(cmd_code,buf);
			//TEXT_SetText(Wifi_Ver_text,(char*)SHENMA_MASSEGE_TEXT);
			//TEXT_SetText(Shengma_text,(char*)SHENMA_MASSEGE2_TEXT);
			//TEXT_SetText(Wifi_Ver_text,(char*)cmd_code);
			
			//SPI_FLASH_BufferRead((u8 *)cmd_code,ABOUT_EMAINL_ADDR,100);
			//TEXT_SetText(Shengma_text,(char*)cmd_code);
		}
	}

	if(gCfgItems.multiple_language != 0)
	{
    	BUTTON_SetText(buttonRet.btnHandle, common_menu.text_back);
	}

	
	
}

void Clear_About()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hAboutWnd))
	{
		WM_DeleteWindow(hAboutWnd);
		//GUI_Exec();
	}
	//GUI_Clear();
}


