#include "gui.h"
#include "button.h"
#include "PROGBAR.h"
#include "draw_zero.h"
#include "draw_ui.h"
#include "fontLib.h"
#include "LISTBOX.h"
//#include "mks_tft_fifo.h"
//#include "mks_tft_com.h"
#include "Marlin.h"
#ifndef GUI_FLASH
#define GUI_FLASH
#endif

static GUI_HWIN hZeroWnd;
//extern TFT_FIFO gcodeCmdTxFIFO;		//gcode ָ��Ͷ���
//extern TFT_FIFO gcodeCmdRxFIFO;		//gcode	ָ����ն���
extern int X_ADD,X_INTERVAL;   //**ͼƬ���



extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz18;

static BUTTON_STRUCT buttonAllZero, buttonXZero, buttonYZero, buttonZZero, buttonRet,buttonQuickstop,buttonDisable;

static void cbZeroWin(WM_MESSAGE * pMsg) {

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
				if(pMsg->hWinSrc == buttonRet.btnHandle)
				{
					Clear_Zero();
					draw_return_ui();
				}
				else if(pMsg->hWinSrc == buttonAllZero.btnHandle)
				{
				//if(printer_state >= PRINTER_CONNECT_OK)
					{												
						//**push_cb_stack(UI_ACTION_HOME_ALL);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)HOME_A_COMMAND);
					}
					enqueue_and_echo_commands_P(PSTR("G28"));
				}
				else if(pMsg->hWinSrc == buttonXZero.btnHandle)
				{
				//if(printer_state >= PRINTER_CONNECT_OK)
					{											
						//**push_cb_stack(UI_ACTION_HOME_X);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)HOME_X_COMMAND);
					}
					enqueue_and_echo_commands_P(PSTR("G28 X0"));
				}
				else if(pMsg->hWinSrc == buttonYZero.btnHandle)
				{
				//if(printer_state >= PRINTER_CONNECT_OK)
					{												
						//**push_cb_stack(UI_ACTION_HOME_Y);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)HOME_Y_COMMAND);
					}
				enqueue_and_echo_commands_P(PSTR("G28 Y0"));
				}
				else if(pMsg->hWinSrc == buttonZZero.btnHandle)
				{
				//if(printer_state >= PRINTER_CONNECT_OK)
					{												
						//**push_cb_stack(UI_ACTION_HOME_Z);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)HOME_Z_COMMAND);
					}
				enqueue_and_echo_commands_P(PSTR("G28 Z0"));
				}
				else if(pMsg->hWinSrc == buttonQuickstop.btnHandle)
				{
#if tan_mask
				//if(printer_state >= PRINTER_CONNECT_OK)
					{												
						//**push_cb_stack(UI_ACTION_HOME_Z);
						initFIFO(&gcodeCmdTxFIFO);
						usart2Data.usart2Txbuf[0]='M';
						usart2Data.usart2Txbuf[1]='4';
						usart2Data.usart2Txbuf[2]='1';
						usart2Data.usart2Txbuf[3]='0';
						usart2Data.usart2Txbuf[4]='\n';
						usart2Data.prWaitStatus = pr_wait_cmd;
						usart2TxStart();						
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)QUICKSTOP_COMMAND);
					}	
#endif
				}	
				else if(pMsg->hWinSrc == buttonDisable.btnHandle)
				{
					enqueue_and_echo_commands_P(PSTR("M84"));
				}
			}
			break;
			
		default:
			WM_DefaultProc(pMsg);
		}
	}


void draw_Zero()
{	
	
	int i;

	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != ZERO_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = ZERO_UI;
	}
	disp_state = ZERO_UI;
		
	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();

	GUI_DispStringAt(creat_title_text(), TITLE_XPOS, TITLE_YPOS);
	
	hZeroWnd = WM_CreateWindow(0, titleHeight, LCD_WIDTH, imgHeight, WM_CF_SHOW, cbZeroWin, 0);

	buttonAllZero.btnHandle = BUTTON_CreateEx(INTERVAL_V, 0,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonXZero.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2, 0,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonYZero.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3,  0,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonZZero.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  0,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	
#if 0
	if(gCfgItems.quickstop_display_flg == 1)
	{
		buttonQuickstop.btnHandle = BUTTON_CreateEx(INTERVAL_V, BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
		BUTTON_SetBmpFileName(buttonQuickstop.btnHandle, "bmp_quickstop.bin",1);
		BUTTON_SetBitmapEx(buttonQuickstop.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
		BUTTON_SetBkColor(buttonQuickstop.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_state_color);
		BUTTON_SetBkColor(buttonQuickstop.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_state_color);
		BUTTON_SetTextColor(buttonQuickstop.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_state_textcolor);
		BUTTON_SetTextColor(buttonQuickstop.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_state_textcolor);

		buttonDisable.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	}
	else
	{
		buttonDisable.btnHandle = BUTTON_CreateEx(INTERVAL_V, BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	}

	BUTTON_SetBmpFileName(buttonDisable.btnHandle, "bmp_function1.bin",1);
	BUTTON_SetBitmapEx(buttonDisable.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
#endif	
	#if VERSION_WITH_PIC	
	buttonDisable.btnHandle = BUTTON_CreateEx(INTERVAL_V, BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hZeroWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	BUTTON_SetBmpFileName(buttonDisable.btnHandle, "bmp_function1.bin",1);
	BUTTON_SetBitmapEx(buttonDisable.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	
	BUTTON_SetBmpFileName(buttonAllZero.btnHandle, "bmp_zero.bin",1);
	BUTTON_SetBmpFileName(buttonXZero.btnHandle, "bmp_zeroX.bin",1);
	BUTTON_SetBmpFileName(buttonYZero.btnHandle, "bmp_zeroY.bin",1);
	BUTTON_SetBmpFileName(buttonZZero.btnHandle, "bmp_zeroZ.bin",1);
	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);
	
	BUTTON_SetBitmapEx(buttonAllZero.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonXZero.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonYZero.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonZZero.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	

	BUTTON_SetBitmapEx(buttonRet.btnHandle, 0, &bmp_struct,BMP_PIC_X, BMP_PIC_Y);

	if(gCfgItems.multiple_language != 0)
	{
			BUTTON_SetText(buttonXZero.btnHandle,home_menu.home_x);
			BUTTON_SetText(buttonYZero.btnHandle,home_menu.home_y);
			BUTTON_SetText(buttonZZero.btnHandle,home_menu.home_z);
			BUTTON_SetText(buttonAllZero.btnHandle,home_menu.home_all);
			//if(gCfgItems.quickstop_display_flg == 1)
			//	BUTTON_SetText(buttonQuickstop.btnHandle,home_menu.stopmove);
			BUTTON_SetText(buttonRet.btnHandle,common_menu.text_back);
			BUTTON_SetText(buttonDisable.btnHandle, set_menu.motoroff);
	}


	#endif
	
	//GUI_Exec();


	
}

void Clear_Zero()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hZeroWnd))
	{
		WM_DeleteWindow(hZeroWnd);
		//GUI_Exec();
	}
	GUI_Clear();
}


