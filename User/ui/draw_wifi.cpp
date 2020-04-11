#include "gui.h"
#include "button.h"
#include "PROGBAR.h"
#include "draw_wifi.h"
#include "draw_ui.h"
#include "fontLib.h"
#include "LISTBOX.h"
#include "draw_bind.h"
#include "wifi_module.h"
#include  <string.h>
#include  "draw_set.h"
#include "draw_wifi_list.h"

#ifndef GUI_FLASH
#define GUI_FLASH
#endif

static GUI_HWIN hWifiWnd;


extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz18;
extern int X_ADD,X_INTERVAL;   //**ͼƬ���


	
static BUTTON_STRUCT  buttonCloud,buttonRet,buttonReconnect;
static void cbWifiWin(WM_MESSAGE * pMsg) {
	char buf[6]={0};
	struct PressEvt *press_event;
	switch (pMsg->MsgId)
	{
		case WM_PAINT:
			//GUI_SetBkColor(GUI_BLUE);
			//GUI_Clear();
			//GUI_DispString("window");
			break;
		case WM_TOUCH:
		 	press_event = (struct PressEvt *)pMsg->Data.p;
			
			break;
		case WM_TOUCH_CHILD:
			press_event = (struct PressEvt *)pMsg->Data.p;

			break;
			
		case WM_NOTIFY_PARENT:
			if(pMsg->Data.v == WM_NOTIFICATION_RELEASED)
			{
				if(pMsg->hWinSrc == buttonCloud.btnHandle)
				{
					Clear_Wifi();
					draw_bind();
				}
				else if(pMsg->hWinSrc == buttonRet.btnHandle)
				{
					last_disp_state = WIFI_UI;
					Clear_Wifi();
					//draw_return_ui();
					draw_Set();
				}	
				else if(pMsg->hWinSrc == buttonReconnect.btnHandle)
				{
					
					buf[0] = 0xA5;
					buf[1] = 0x07;
					buf[2] = 0x00;
					buf[3] = 0x00;
					buf[4] = 0xFC;
					raw_send_to_wifi(buf, 5);
				
					last_disp_state = WIFI_UI;
					Clear_Wifi();
					draw_Wifi_list();
				}
				
			}
			break;
			
		default:
			WM_DefaultProc(pMsg);
		}
	}

//every key:22*23
#define PAD_KEY_WIDTH	22
#define PAD_KEY_HEIGH	23
#define PAD_KEY_DIST	2

void draw_Wifi()
{	
	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != WIFI_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = WIFI_UI;
	}
	disp_state = WIFI_UI;
	GUI_Clear();	

	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();

	GUI_DispStringAt(creat_title_text(),  TITLE_XPOS, TITLE_YPOS);
	
	disp_wifi_state();
	
	hWifiWnd = WM_CreateWindow(0 , titleHeight+BTN_Y_PIXEL+INTERVAL_H,LCD_WIDTH,BTN_Y_PIXEL, WM_CF_SHOW, cbWifiWin, 0);

	if(gCfgItems.wifi_type == ESP_WIFI)
	{
		
		if((gCfgItems.wifi_type == 0x02)&&(gCfgItems.cloud_enable == 1))
		{
			buttonCloud.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3,  0, BTN_X_PIXEL, BTN_Y_PIXEL, hWifiWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

			BUTTON_SetBmpFileName(buttonCloud.btnHandle, "bmp_cloud.bin",1);
			BUTTON_SetBitmapEx(buttonCloud.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
		
			//BUTTON_SetBkColor(buttonCloud.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_color);
			//BUTTON_SetBkColor(buttonCloud.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_color);
			//BUTTON_SetTextColor(buttonCloud.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_textcolor);
			//BUTTON_SetTextColor(buttonCloud.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_textcolor);  

			if(gCfgItems.wifi_scan == 1)
			{
				buttonReconnect.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2, 0, BTN_X_PIXEL, BTN_Y_PIXEL, hWifiWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

				BUTTON_SetBmpFileName(buttonReconnect.btnHandle, "bmp_wifi.bin",1);
				BUTTON_SetBitmapEx(buttonReconnect.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
			}
		}
		else
		{
			if(gCfgItems.wifi_scan == 1)
			{
				buttonReconnect.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3,  0, BTN_X_PIXEL, BTN_Y_PIXEL, hWifiWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

				BUTTON_SetBmpFileName(buttonReconnect.btnHandle, "bmp_wifi.bin",1);
				BUTTON_SetBitmapEx(buttonReconnect.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
			}
		}
		
	}
	
	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  0, BTN_X_PIXEL, BTN_Y_PIXEL, hWifiWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	
#if VERSION_WITH_PIC	
	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);
	BUTTON_SetBitmapEx(buttonRet.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
    
	//BUTTON_SetBkColor(buttonRet.btnHandle, BUTTON_CI_PRESSED, gCfgItems.back_btn_color);
	//BUTTON_SetBkColor(buttonRet.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.back_btn_color);
	//BUTTON_SetTextColor(buttonRet.btnHandle, BUTTON_CI_PRESSED, gCfgItems.back_btn_textcolor);
	//BUTTON_SetTextColor(buttonRet.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.back_btn_textcolor);        
	if(gCfgItems.multiple_language != 0)	
	{
		//if(gCfgItems.wifi_type == ESP_WIFI)
		if((gCfgItems.wifi_type == ESP_WIFI)&&(gCfgItems.cloud_enable == 1))
			BUTTON_SetText(buttonCloud.btnHandle,wifi_menu.cloud); 
		BUTTON_SetText(buttonRet.btnHandle, common_menu.text_back);
		if(gCfgItems.wifi_scan == 1)
			BUTTON_SetText(buttonReconnect.btnHandle,wifi_menu.reconnect); 
	}


#endif

	//GUI_Exec();


	
}


void disp_wifi_state()
{
		char buf[100]={0};
		GUI_DispStringAt(wifi_menu.ip, 20, titleHeight	+ 25);
		memset(buf, ' ', sizeof(buf)-1);
		GUI_DispStringAt(buf, 20+30, titleHeight  + 25);		
		sprintf(buf, "%s", (char *)ipPara.ip_addr); 	
		GUI_DispStringAt(buf, 20+30, titleHeight	+ 25);
		

		GUI_DispStringAt(wifi_menu.wifi, 20, titleHeight	+ 60);
		memset(buf, ' ', sizeof(buf)-1);
		GUI_DispStringAt(buf, 20+50, titleHeight  + 60);		
		sprintf(buf, "%s", wifiPara.ap_name);
		GUI_DispStringAt(buf, 20+50, titleHeight	+ 60);

		if(wifiPara.mode == 0x01)
		{
			GUI_DispStringAt(wifi_menu.key, 20, titleHeight  + 95);
			memset(buf, ' ', sizeof(buf)-1);
			GUI_DispStringAt(buf, 20+40, titleHeight  + 95);		
			sprintf(buf, "%s", wifiPara.keyCode);
			GUI_DispStringAt(buf, 20+40, titleHeight	+ 95);
			
			memset(buf, ' ', sizeof(buf)-1);
			GUI_DispStringAt(buf, 20, titleHeight + 130);				
			GUI_DispStringAt(wifi_menu.state_ap, 20, titleHeight + 130);

			
			memset(buf, ' ', sizeof(buf)-1);
			GUI_DispStringAt(buf, 120, titleHeight + 130);			
			if(wifi_link_state == WIFI_CONNECTED)
				GUI_DispStringAt(wifi_menu.connected, 120, titleHeight + 130);
			else if(wifi_link_state == WIFI_NOT_CONFIG)
				GUI_DispStringAt(wifi_menu.disconnected, 120, titleHeight + 130);
			else 
				GUI_DispStringAt(wifi_menu.exception, 120, titleHeight + 130);
		}
		else
		{
			memset(buf, ' ', sizeof(buf)-1);
			GUI_DispStringAt(buf, 20, titleHeight + 95);				
			GUI_DispStringAt(wifi_menu.state_sta, 20, titleHeight + 95);
			
			memset(buf, ' ', sizeof(buf)-1);
			GUI_DispStringAt(buf, 120, titleHeight + 95);			
			if(wifi_link_state == WIFI_CONNECTED)
				GUI_DispStringAt(wifi_menu.connected, 120, titleHeight + 95);
			else if(wifi_link_state == WIFI_NOT_CONFIG)
				GUI_DispStringAt(wifi_menu.disconnected, 120, titleHeight + 95);
			else 
				GUI_DispStringAt(wifi_menu.exception, 120, titleHeight + 95);	

			memset(buf, ' ', sizeof(buf)-1);
			GUI_DispStringAt(buf, 20, titleHeight + 130);	
			//memset(buf, ' ', sizeof(buf)-1);
			//GUI_DispStringAt(buf, 160, titleHeight + 130);
		}
}

void Clear_Wifi()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hWifiWnd))
	{
		WM_DeleteWindow(hWifiWnd);
	//	GUI_Exec();
	}
	
	//GUI_Clear();
}


