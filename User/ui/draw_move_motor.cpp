#include "draw_move_motor.h"
#include "gui.h"
#include "button.h"
#include "draw_ui.h"
#include "draw_print_file.h"
#include "fontLib.h"
//#include "printer.h"
//#include "gcode.h"
#include <math.h>
#include <stdint.h>
#include "stdint.h"
//#include "mks_tft_fifo.h"
//#include "mks_tft_com.h"
#include "Marlin.h"

#ifndef GUI_FLASH
#define GUI_FLASH
#endif


static BUTTON_STRUCT buttonXI, buttonXD, buttonYI, buttonYD, buttonZI, buttonZD, buttonV,  buttonRet;
GUI_HWIN hMoveMotorWnd;

extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz18;
//extern TFT_FIFO gcodeCmdTxFIFO;		//gcode ָ��Ͷ���
//extern TFT_FIFO gcodeCmdRxFIFO;		//gcode	ָ����ն���
extern unsigned char positionSaveFlag;
extern int X_ADD,X_INTERVAL;   //**ͼƬ���
//extern PR_STATUS printerStaus;

//int16_t curXSpeed = 3000;
//int16_t curYSpeed = 3000;
//int16_t curZSpeed = 3000;


static void cbMoveMotorWin(WM_MESSAGE * pMsg) {
	
	struct PressEvt *press_event;
	char buf[30] = {0};

	switch (pMsg->MsgId) {
	case WM_PAINT:
	//GUI_SetBkColor(GUI_BLACK);
	//	GUI_Clear();
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
		
			press_event = (struct PressEvt *)pMsg->Data.p;


			if(pMsg->hWinSrc == buttonXI.btnHandle)
			{

			#if 0
				//**gCfgItems.move_dist = fabs(gCfgItems.move_dist);
				//**uid.executeAction(UI_ACTION_XPOSITION);
				//if(printer_state >= PRINTER_CONNECT_OK)
				{
					//////printf(RELATIVE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
					MOVE_X_COMMAN(buf, gCfgItems.move_dist, gCfgItems.moveSpeed);
					//////printf(buf);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
					////////printf(ABSOLUTE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
				 	
				}
				//2015/09/22
				//�ƶ������ϱ�������
					if(printerStaus == pr_pause)
						positionSaveFlag = 1;
			
			#endif
			enqueue_and_echo_commands_P(PSTR("G91"));
			sprintf(buf, "G1 X%3.1f F%d\n",gCfgItems.move_dist, gCfgItems.moveSpeed);
			enqueue_and_echo_commands_P(PSTR(buf));
			enqueue_and_echo_commands_P(PSTR("G90"));
				
			}
			
			else if(pMsg->hWinSrc == buttonXD.btnHandle)
			{
			#if 0
				//**gCfgItems.move_dist = (float)0 - fabs(gCfgItems.move_dist);
				//**uid.executeAction(UI_ACTION_XPOSITION);
				//if(printer_state >= PRINTER_CONNECT_OK)
				{
					//////printf(RELATIVE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
					MOVE_X_COMMAN(buf, (float)0 - gCfgItems.move_dist,  gCfgItems.moveSpeed );
					//////printf(buf);
					pushFIFO(&gcodeCmdTxFIFO,(unsigned char *) buf);
					////////printf(ABSOLUTE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
				}
				//2015/09/22
				//�ƶ������ϱ�������
				if(printerStaus == pr_pause)
					positionSaveFlag = 1;
#endif
			enqueue_and_echo_commands_P(PSTR("G91"));
			sprintf(buf, "G1 X-%3.1f F%d\n",gCfgItems.move_dist, gCfgItems.moveSpeed);
			enqueue_and_echo_commands_P(PSTR(buf));
			enqueue_and_echo_commands_P(PSTR("G90"));

			}
			else if(pMsg->hWinSrc == buttonYI.btnHandle)
			{
#if 0
				//**gCfgItems.move_dist = fabs(gCfgItems.move_dist);
				//**uid.executeAction(UI_ACTION_YPOSITION);
				//if(printer_state >= PRINTER_CONNECT_OK)
				{
					//////printf(RELATIVE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
					MOVE_Y_COMMAN(buf, gCfgItems.move_dist,  gCfgItems.moveSpeed);
					//////printf(buf);
					pushFIFO(&gcodeCmdTxFIFO,(unsigned char *) buf);
					////////printf(ABSOLUTE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
				}
				//2015/09/22
				//�ƶ������ϱ�������
					if(printerStaus == pr_pause)
						positionSaveFlag = 1;
					#endif
			enqueue_and_echo_commands_P(PSTR("G91"));
			sprintf(buf, "G1 Y%3.1f F%d\n",gCfgItems.move_dist, gCfgItems.moveSpeed);
			enqueue_and_echo_commands_P(PSTR(buf));
			enqueue_and_echo_commands_P(PSTR("G90"));
			}
			else if(pMsg->hWinSrc == buttonYD.btnHandle)
			{
			#if 0
				//**gCfgItems.move_dist = (float)0 - fabs(gCfgItems.move_dist);
				//**uid.executeAction(UI_ACTION_YPOSITION);
				//if(printer_state >= PRINTER_CONNECT_OK)
				{
					//////printf(RELATIVE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
					MOVE_Y_COMMAN(buf, (float)0 - gCfgItems.move_dist,  gCfgItems.moveSpeed);
					//////printf(buf);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
					////////printf(ABSOLUTE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
				}
				//2015/09/22
				//�ƶ������ϱ�������
					if(printerStaus == pr_pause)
						positionSaveFlag = 1;
					#endif
			enqueue_and_echo_commands_P(PSTR("G91"));
			sprintf(buf, "G1 Y-%3.1f F%d\n",gCfgItems.move_dist, gCfgItems.moveSpeed);
			enqueue_and_echo_commands_P(PSTR(buf));
			enqueue_and_echo_commands_P(PSTR("G90"));
			}
			else if(pMsg->hWinSrc == buttonZI.btnHandle)
			{
			#if 0
				//**gCfgItems.move_dist = fabs(gCfgItems.move_dist);
				//**uid.executeAction(UI_ACTION_ZPOSITION);
				//if(printer_state >= PRINTER_CONNECT_OK)
				{
					//////printf(RELATIVE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
					MOVE_Z_COMMAN(buf, gCfgItems.move_dist,  gCfgItems.moveSpeed);
					//////printf(buf);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
					////////printf(ABSOLUTE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
					if((printerStaus != pr_pause) && (printerStaus != pr_reprint))  //**
					{
						gCfgItems.getzpos_flg = 1;
					}
				}
				//2015/09/22
				//�ƶ������ϱ�������
					if(printerStaus == pr_pause)
						positionSaveFlag = 1;	
					#endif
			enqueue_and_echo_commands_P(PSTR("G91"));
			sprintf(buf, "G1 Z%3.1f F%d\n",gCfgItems.move_dist, gCfgItems.moveSpeed);
			enqueue_and_echo_commands_P(PSTR(buf));
			enqueue_and_echo_commands_P(PSTR("G90"));
			}
			else if(pMsg->hWinSrc == buttonZD.btnHandle)
			{

			#if 0
				//**gCfgItems.move_dist = (float)0 - fabs(gCfgItems.move_dist);
				//**uid.executeAction(UI_ACTION_ZPOSITION);
				//if(printer_state >= PRINTER_CONNECT_OK)
				{
					//////printf(RELATIVE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
					MOVE_Z_COMMAN(buf, (float)0 - gCfgItems.move_dist,  gCfgItems.moveSpeed);
					//////printf(buf);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
					////////printf(ABSOLUTE_COORD_COMMAN);
					pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
					if((printerStaus != pr_pause) && (printerStaus != pr_reprint))  //**
					{ 
						gCfgItems.getzpos_flg = 1;
					}
				}
				//2015/09/22
				//�ƶ������ϱ�������
					if(printerStaus == pr_pause)
						positionSaveFlag = 1;	
					#endif
			enqueue_and_echo_commands_P(PSTR("G91"));
			sprintf(buf, "G1 Z-%3.1f F%d\n",gCfgItems.move_dist, gCfgItems.moveSpeed);
			enqueue_and_echo_commands_P(PSTR(buf));
			enqueue_and_echo_commands_P(PSTR("G90"));					
			}
			else if(pMsg->hWinSrc == buttonRet.btnHandle)
			{
			    feedrate_mm_s = gCfgItems.moveSpeed_bak;
				last_disp_state = MOVE_MOTOR_UI;
				Clear_move_motor();
				draw_return_ui();
								
			}
			else if(pMsg->hWinSrc == buttonV.btnHandle)
			{
				if(abs(10 * (int)gCfgItems.move_dist) == 100)
				{
					gCfgItems.move_dist = 0.1;
				}
				else
				{
					gCfgItems.move_dist *= (float)10;
				}
				
				disp_move_dist();
				
			}		
			
		}
		break;
	default:
	WM_DefaultProc(pMsg);
	}
}


void draw_move_motor()
{
	
  	char buffer_z[15]={0};
	
	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != MOVE_MOTOR_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = MOVE_MOTOR_UI;
	}
	disp_state = MOVE_MOTOR_UI;
	
	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();

	GUI_DispStringAt(creat_title_text(),  TITLE_XPOS, TITLE_YPOS);

	hMoveMotorWnd = WM_CreateWindow(0, titleHeight, LCD_WIDTH, imgHeight, WM_CF_SHOW, cbMoveMotorWin, 0);

	buttonXI.btnHandle = BUTTON_CreateEx(INTERVAL_V, 0,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonYI.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2, 0,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonZI.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3,  0,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

	
	buttonXD.btnHandle = BUTTON_CreateEx(INTERVAL_V,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonYD.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonZD.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

	buttonV.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  0,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL,hMoveMotorWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

	#if VERSION_WITH_PIC	

	BUTTON_SetBmpFileName(buttonXI.btnHandle, "bmp_xAdd.bin",1);
	BUTTON_SetBmpFileName(buttonXD.btnHandle, "bmp_xDec.bin",1);
	BUTTON_SetBmpFileName(buttonYI.btnHandle, "bmp_yAdd.bin",1);
	BUTTON_SetBmpFileName(buttonYD.btnHandle, "bmp_yDec.bin",1);
	BUTTON_SetBmpFileName(buttonZI.btnHandle, "bmp_zAdd.bin",1);
	BUTTON_SetBmpFileName(buttonZD.btnHandle, "bmp_zDec.bin",1);
	//
	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);
	
	#endif
	BUTTON_SetBitmapEx(buttonXI.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonXD.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonYI.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonYD.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonZI.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonZD.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonV.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonRet.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);

	if(gCfgItems.multiple_language != 0)
	{
		BUTTON_SetText(buttonXI.btnHandle, move_menu.x_add);
		BUTTON_SetText(buttonXD.btnHandle,move_menu.x_dec);
		BUTTON_SetText(buttonYI.btnHandle, move_menu.y_add);
		BUTTON_SetText(buttonYD.btnHandle, move_menu.y_dec);
		BUTTON_SetText(buttonZI.btnHandle, move_menu.z_add);
		BUTTON_SetText(buttonZD.btnHandle, move_menu.z_dec);
	    BUTTON_SetText(buttonRet.btnHandle, common_menu.text_back);
	}

	disp_move_dist();

	
	
/////	GUI_Exec();

	
}

void disp_move_dist()
{
	char buf[30] = {0};
		
	if((int)(10 * gCfgItems.move_dist) == 1)
	{
		BUTTON_SetBmpFileName(buttonV.btnHandle, "bmp_step_move0_1.bin",1);
	}
	else if((int)(10 * gCfgItems.move_dist) == 10)
	{
		BUTTON_SetBmpFileName(buttonV.btnHandle, "bmp_step_move1.bin",1);
	}
	else if((int)(10 * gCfgItems.move_dist) == 100)
	{
		BUTTON_SetBmpFileName(buttonV.btnHandle, "bmp_step_move10.bin",1);
	}
	if(gCfgItems.multiple_language != 0)
	{
		if((int)(10 * gCfgItems.move_dist) == 1)
			BUTTON_SetText(buttonV.btnHandle,move_menu.step_01mm);
		else if((int)(10 * gCfgItems.move_dist) == 10)
			BUTTON_SetText(buttonV.btnHandle,move_menu.step_1mm);
		else if((int)(10 * gCfgItems.move_dist) == 100)
			BUTTON_SetText(buttonV.btnHandle,move_menu.step_10mm);
	}	

		
	
}

void Clear_move_motor()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hMoveMotorWnd))
	{
		WM_DeleteWindow(hMoveMotorWnd);
		//GUI_Exec();
	}
	
	//GUI_Clear();
}

