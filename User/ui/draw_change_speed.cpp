#include "draw_change_speed.h"
#include "draw_ui.h"
#include "id_manage.h"
//#include "mks_tft_fifo.h"
//#include "mks_tft_com.h"
#include "marlin.h"
#include "planner.h"
#ifndef GUI_FLASH
#define GUI_FLASH
#endif

GUI_HWIN hChangeSpeedWnd;


//extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz18;
//extern TFT_FIFO gcodeCmdTxFIFO;		//gcode ָ��Ͷ���
//extern TFT_FIFO gcodeCmdRxFIFO;		//gcode	ָ����ն���
extern int X_ADD,X_INTERVAL;   //**ͼƬ���

static TEXT_Handle textPrintSpeed,textSpeedVal;

static uint8_t speedType = 0;

static BUTTON_STRUCT buttonInc, buttonDec, buttonStep, buttonMove, buttonExtruct, buttonRet;

uint8_t move_speed_flg;

static void cbChangeSpeedWin(WM_MESSAGE * pMsg) {

	char buf[30] = {0};

	switch (pMsg->MsgId)
	{
		case WM_PAINT:
			//GUI_SetColor(gCfgItems.state_background_color);
			//#if defined(TFT70)
			//GUI_SetColor(gCfgItems.state_text_color);
			//GUI_DrawRect(LCD_WIDTH/4+X_ADD, 0, LCD_WIDTH *3 / 4-X_INTERVAL, imgHeight /2 -15);
			
			//GUI_FillRect(LCD_WIDTH/4+X_ADD, 0, LCD_WIDTH *3 / 4-X_INTERVAL, imgHeight /2 -15);
			//#elif defined(TFT35)
			//GUI_FillRect(BTN_X_PIXEL+INTERVAL_V*2, 0, BTN_X_PIXEL *3+INTERVAL_V*3-1, BTN_Y_PIXEL-1);
			//#endif
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
					/*
					if((mksCfg.extruders == 2)&&(mksReprint.mks_printer_state!= MKS_IDLE))
					{
						gCfgItems.curSprayerChoose = gCfgItems.curSprayerChoose_bak;
						sprintf(buf,"T%d\n",gCfgItems.curSprayerChoose);
						pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
					}
					*/
					Clear_changeSpeed();
					draw_return_ui();
				}
				else if(pMsg->hWinSrc == buttonInc.btnHandle)
				{
					
					if(speedType == 0)
					{
						move_speed_flg = 1;
						if(feedrate_percentage  < MAX_EXT_SPEED_PERCENT - gCfgItems.stepPrintSpeed)
						{
							feedrate_percentage += gCfgItems.stepPrintSpeed;
							
						}
						else
						{
							feedrate_percentage = MAX_EXT_SPEED_PERCENT;
						}
						//SET_MOVE_SPEED_COMMAND(buf, gCfgItems.printSpeed);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
						//sprintf(buf, "M220 S%d\n", gCfgItems.printSpeed);
						//enqueue_and_echo_commands_P(buf);
					}
					else if(speedType == 1)
					{
						if(planner.flow_percentage[0]< MAX_EXT_SPEED_PERCENT - gCfgItems.stepPrintSpeed)
						{
							planner.flow_percentage[0] += gCfgItems.stepPrintSpeed;
							
						}
						else
						{
							planner.flow_percentage[0] = MAX_EXT_SPEED_PERCENT;
						}
                        planner.e_factor[0]= planner.flow_percentage[0]*0.01;
						planner.flow_percentage[1] = planner.flow_percentage[0];
                        planner.e_factor[1]= planner.flow_percentage[1]*0.01;
						//gCfgItems.printExtSpeed1 = gCfgItems.printExtSpeed0;
						//SET_EXTRU_SPEED_COMMAND(buf, gCfgItems.printExtSpeed0);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
						//sprintf(buf, "M221 S%d\n", gCfgItems.printSpeed);
						//enqueue_and_echo_commands_P(buf);						
					}
					/*else if(speedType == 2)
					{
						if(gCfgItems.printExtSpeed1< MAX_EXT_SPEED_PERCENT - gCfgItems.stepPrintSpeed)
						{
							gCfgItems.printExtSpeed1 += gCfgItems.stepPrintSpeed;
							
						}
						else
						{
							gCfgItems.printExtSpeed1 = MAX_EXT_SPEED_PERCENT;
						}
						SET_EXTRU_SPEED_COMMAND(buf, gCfgItems.printExtSpeed1);
						pushFIFO(&gcodeCmdTxFIFO, buf);
					}*/
						
					disp_print_speed();
					
				}
				else if(pMsg->hWinSrc == buttonDec.btnHandle)
				{
					if(speedType == 0)
					{						
						if(feedrate_percentage > MIN_EXT_SPEED_PERCENT + gCfgItems.stepPrintSpeed)
						{
							feedrate_percentage -= gCfgItems.stepPrintSpeed;							
						}
						else
						{
							feedrate_percentage = MIN_EXT_SPEED_PERCENT;
						}
						//SET_MOVE_SPEED_COMMAND(buf, gCfgItems.printSpeed);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
						//sprintf(buf, "M220 S%d\n", gCfgItems.printSpeed);
						//enqueue_and_echo_commands_P(buf);						
					}
					else if(speedType == 1)
					{
						if(planner.flow_percentage[0] > MIN_EXT_SPEED_PERCENT + gCfgItems.stepPrintSpeed)
						{
							planner.flow_percentage[0] -= gCfgItems.stepPrintSpeed;							
						}
						else
						{
							planner.flow_percentage[0] = MIN_EXT_SPEED_PERCENT;
						}
                        planner.e_factor[0]= planner.flow_percentage[0]*0.01;
						planner.flow_percentage[1] = planner.flow_percentage[0];
                        planner.e_factor[1]= planner.flow_percentage[1]*0.01;
						//SET_EXTRU_SPEED_COMMAND(buf, gCfgItems.printExtSpeed0);
						//pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
						//sprintf(buf, "M221 S%d\n", gCfgItems.printSpeed);
						//enqueue_and_echo_commands_P(buf);
					}
					/*else if(speedType == 2)
					{						

						if(gCfgItems.printExtSpeed1 > MIN_EXT_SPEED_PERCENT + gCfgItems.stepPrintSpeed)
						{
							gCfgItems.printExtSpeed1 -= gCfgItems.stepPrintSpeed;							
						}
						else
						{
							gCfgItems.printExtSpeed1 = MIN_EXT_SPEED_PERCENT;
						}
						SET_EXTRU_SPEED_COMMAND(buf, gCfgItems.printExtSpeed1);
						pushFIFO(&gcodeCmdTxFIFO, buf);
					}*/
						
					disp_print_speed();
				}
				else if(pMsg->hWinSrc == buttonStep.btnHandle)
				{					
					if(gCfgItems.stepPrintSpeed == 1)
					{
						gCfgItems.stepPrintSpeed = 5;
					}
					else if(gCfgItems.stepPrintSpeed == 5)
					{
						gCfgItems.stepPrintSpeed = 10;						
					}
					else
					{
						gCfgItems.stepPrintSpeed = 1;	
					}
					disp_step_speed();
				}
			/*	else if(pMsg->hWinSrc == buttonFivePercent)
				{					
					gCfgItems.stepPrintSpeed = 5;
					disp_step_speed();
				}*/
				else if(pMsg->hWinSrc == buttonMove.btnHandle)
				{
					speedType = 0;
					disp_speed_type();
					disp_print_speed();
				}
				else if(pMsg->hWinSrc == buttonExtruct.btnHandle)
				{
					speedType = 1;
					disp_speed_type();
					disp_print_speed();
				}
				/*else if(pMsg->hWinSrc == buttonExtruct2)
				{
					speedType = 2;
					disp_speed_type();
					disp_print_speed();
				}*/
				
			}
			break;
			
		default:
			WM_DefaultProc(pMsg);
		}
	}


void draw_changeSpeed()
{
		
//	int titleHeight = 30;

//	int imgHeight = LCD_HEIGHT - titleHeight;	
	
	int i;

	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != CHANGE_SPEED_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = CHANGE_SPEED_UI;
	}
	
	disp_state = CHANGE_SPEED_UI;
		
	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();

	//GUI_DispStringAt("���ڴ�ӡ->����->����", 0, 0);
	GUI_DispStringAt(creat_title_text(),  TITLE_XPOS, TITLE_YPOS);
	
	hChangeSpeedWnd = WM_CreateWindow(0, titleHeight, LCD_WIDTH, imgHeight, WM_CF_SHOW, cbChangeSpeedWin, 0);
	buttonInc.btnHandle = BUTTON_CreateEx(INTERVAL_V, 0,BTN_X_PIXEL, BTN_Y_PIXEL, hChangeSpeedWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonDec.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  0,BTN_X_PIXEL, BTN_Y_PIXEL, hChangeSpeedWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonMove.btnHandle = BUTTON_CreateEx(INTERVAL_V,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hChangeSpeedWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonExtruct.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hChangeSpeedWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonStep.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3, BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hChangeSpeedWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4, BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hChangeSpeedWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

	textPrintSpeed= TEXT_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,(BTN_Y_PIXEL-60)/2,BTN_X_PIXEL*2+INTERVAL_V,30, hChangeSpeedWnd, WM_CF_SHOW, GUI_TA_VCENTER|GUI_TA_HCENTER, alloc_win_id(),  " ");
	textSpeedVal= TEXT_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,(BTN_Y_PIXEL-60)/2+30,BTN_X_PIXEL*2+INTERVAL_V,30, hChangeSpeedWnd, WM_CF_SHOW, GUI_TA_VCENTER|GUI_TA_HCENTER, alloc_win_id(),  " ");

	#if VERSION_WITH_PIC	

	BUTTON_SetBmpFileName(buttonInc.btnHandle, "bmp_Add.bin",1);	
	BUTTON_SetBmpFileName(buttonDec.btnHandle, "bmp_Dec.bin",1);
	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);	
	
	BUTTON_SetBitmapEx(buttonInc.btnHandle,0,&bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonDec.btnHandle,0,&bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonMove.btnHandle,0,&bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonExtruct.btnHandle,0,&bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonStep.btnHandle,0,&bmp_struct,BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonRet.btnHandle,0,&bmp_struct,BMP_PIC_X, BMP_PIC_Y);
#if 0	
	BUTTON_SetBkColor(buttonInc.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_color);
	BUTTON_SetBkColor(buttonInc.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_color);
	BUTTON_SetTextColor(buttonInc.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_textcolor);
	BUTTON_SetTextColor(buttonInc.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_textcolor);

	BUTTON_SetBkColor(buttonDec.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_color);
	BUTTON_SetBkColor(buttonDec.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_color);
	BUTTON_SetTextColor(buttonDec.btnHandle, BUTTON_CI_PRESSED, gCfgItems.btn_textcolor);
	BUTTON_SetTextColor(buttonDec.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.btn_textcolor);

	BUTTON_SetBkColor(buttonRet.btnHandle, BUTTON_CI_PRESSED, gCfgItems.back_btn_color);
	BUTTON_SetBkColor(buttonRet.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.back_btn_color);
	BUTTON_SetTextColor(buttonRet.btnHandle, BUTTON_CI_PRESSED, gCfgItems.back_btn_textcolor);
	BUTTON_SetTextColor(buttonRet.btnHandle, BUTTON_CI_UNPRESSED, gCfgItems.back_btn_textcolor);
#endif	
	if(gCfgItems.multiple_language != 0)
	{
		BUTTON_SetText(buttonInc.btnHandle, speed_menu.add);
		BUTTON_SetText(buttonDec.btnHandle,speed_menu.dec);
		BUTTON_SetText(buttonRet.btnHandle, common_menu.text_back);	
	}
	#endif
	
	disp_print_speed();
	disp_speed_type();
	disp_step_speed();
}

void Clear_changeSpeed()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hChangeSpeedWnd))
	{
		WM_DeleteWindow(hChangeSpeedWnd);
		//GUI_Exec();
	}
	//GUI_Clear();
}

void disp_print_speed()
{
	char buf[30] = {0};
	char buf1[30] = {0};

	TEXT_SetTextColor(textPrintSpeed, gCfgItems.title_color);
	TEXT_SetBkColor(textPrintSpeed, gCfgItems.background_color);
	TEXT_SetTextColor(textSpeedVal, gCfgItems.title_color);
	TEXT_SetBkColor(textSpeedVal, gCfgItems.background_color);	
	
	if(speedType ==  0)	//move
	{
		sprintf(buf1, "%s",speed_menu.move_speed);
		sprintf(buf, "%d%%", feedrate_percentage);
		
	}
	else if(speedType ==  1)	// e1
	{
		sprintf(buf1, "%s",speed_menu.extrude_speed);	
		sprintf(buf, "%d%%", planner.flow_percentage[0]);	
	}
	TEXT_SetText(textPrintSpeed, buf1);
	TEXT_SetText(textSpeedVal, buf);

}

void disp_speed_type()
{
	switch(speedType)
	{
		case 1:
			BUTTON_SetBmpFileName(buttonExtruct.btnHandle, "bmp_extruct_sel.bin",1);	
			BUTTON_SetBmpFileName(buttonMove.btnHandle, "bmp_mov_changeSpeed.bin",1);			
			BUTTON_SetBitmapEx(buttonExtruct.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
			BUTTON_SetBitmapEx(buttonMove.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
							
			break;

		default:
			BUTTON_SetBmpFileName(buttonMove.btnHandle, "bmp_mov_sel.bin",1);
			BUTTON_SetBmpFileName(buttonExtruct.btnHandle, "bmp_speed_extruct.bin",1);
			BUTTON_SetBitmapEx(buttonMove.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
			BUTTON_SetBitmapEx(buttonExtruct.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);		
			break;
	}
		
	if(gCfgItems.multiple_language != 0)
	{
		BUTTON_SetText(buttonExtruct.btnHandle, speed_menu.extrude);
		BUTTON_SetText(buttonMove.btnHandle, speed_menu.move);	
	}

}

void disp_step_speed()
{
	if(gCfgItems.stepPrintSpeed == 1)
	{
		BUTTON_SetBmpFileName(buttonStep.btnHandle, "bmp_step1_percent.bin",1);     							
	}
	else if(gCfgItems.stepPrintSpeed == 5)
	{
		BUTTON_SetBmpFileName(buttonStep.btnHandle, "bmp_step5_percent.bin",1);			  										
	}
	else if(gCfgItems.stepPrintSpeed == 10)
	{         								
		BUTTON_SetBmpFileName(buttonStep.btnHandle, "bmp_step10_percent.bin",1);										
	}

	if(gCfgItems.multiple_language != 0)
	{
		if(gCfgItems.stepPrintSpeed == 1)
		{
			BUTTON_SetText(buttonStep.btnHandle, speed_menu.step_1percent);
		}
		else if(gCfgItems.stepPrintSpeed == 5)
		{
			BUTTON_SetText(buttonStep.btnHandle, speed_menu.step_5percent);	
		}
		else if(gCfgItems.stepPrintSpeed == 10)
		{
			BUTTON_SetText(buttonStep.btnHandle, speed_menu.step_10percent);	
		}
	}

}


