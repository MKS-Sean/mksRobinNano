#include "gui.h"
#include "button.h"
#include "PROGBAR.h"
#include "draw_extrusion.h"
#include "draw_ui.h"
#include "fontLib.h"
#include "LISTBOX.h"

#include "text.h"
//#include "mks_tft_fifo.h"
//#include "mks_tft_com.h"
#include "Marlin.h"
#include "temperature.h"
#include "mks_reprint.h"

#ifndef GUI_FLASH
#define GUI_FLASH
#endif

GUI_HWIN hExtrusionWnd;
static TEXT_Handle textPrintTemp, textExtruAmount,textPrintTemp_CHIN;

//extern TFT_FIFO gcodeCmdTxFIFO;		//gcode ָ��Ͷ���
//extern TFT_FIFO gcodeCmdRxFIFO;		//gcode	ָ����ն��
extern int X_ADD,X_INTERVAL;   //**ͼƬ���
extern uint8_t  Get_Temperature_Flg;

extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz18;

static BUTTON_STRUCT buttonStepForward, buttonStepBack, buttonSprayType, buttonStep, buttonSpeed,  buttonStepExtru, buttonRet;

static int32_t extructAmount;

//extern PR_STATUS printerStaus;
extern unsigned char positionSaveFlag;

extern float feedrate_mm_s;

static void cbExtrusionWin(WM_MESSAGE * pMsg) {

	char buf[30] = {0};

	switch (pMsg->MsgId)
	{
		case WM_PAINT:			
			//#if defined(TFT70)
			//GUI_SetColor(gCfgItems.state_background_color);
			//GUI_DrawRect(LCD_WIDTH/4+X_ADD, 0, LCD_WIDTH *3 / 4-X_INTERVAL, imgHeight /2 -15);
			//GUI_SetColor(gCfgItems.state_background_color);
			//GUI_FillRect(BTN_X_PIXEL+INTERVAL_V*2, 0, BTN_X_PIXEL *3+INTERVAL_V*3-1, BTN_Y_PIXEL-1);	
			//#elif defined(TFT35)
			//GUI_SetColor(gCfgItems.state_background_color);
			//GUI_FillRect(BTN_X_PIXEL+INTERVAL_V*2, 0, BTN_X_PIXEL *3+5, BTN_Y_PIXEL);
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
					if((mksCfg.extruders == 2)
						&&(mksReprint.mks_printer_state!=MKS_IDLE)
						&&(mksReprint.mks_printer_state!=MKS_REPRINTED))
					{
						if(gCfgItems.curSprayerChoose_bak == 1)
						{
							enqueue_and_echo_command("T1");
						}
						else
						{
							enqueue_and_echo_command("T0");
						}
						feedrate_mm_s = gCfgItems.moveSpeed_bak ;
					}
                    else
                    {
                        feedrate_mm_s = gCfgItems.extruSpeed_bak;
                    }
					
					last_disp_state = EXTRUSION_UI;
					Clear_extrusion();
					draw_return_ui();
					
				}

				else if(pMsg->hWinSrc == buttonStepForward.btnHandle)
				{
					//sprintf((char *)buf,"T%d\n",gCfgItems.curSprayerChoose);
					//enqueue_and_echo_commands_P(PSTR(buf));
					if(thermalManager.current_temperature[gCfgItems.curSprayerChoose]>= EXTRUDE_MINTEMP)
					{
						enqueue_and_echo_commands_P(PSTR("G91"));
						memset(buf,0,sizeof(buf));
						sprintf((char *)buf, "G1 E%d F%d\n", gCfgItems.extruStep, 60 * gCfgItems.extruSpeed);
						enqueue_and_echo_commands_P(PSTR(buf));	
						enqueue_and_echo_commands_P(PSTR("G90"));	
						#if 0
						//**gCfgItems.extruStep = abs(gCfgItems.extruStep);
						//**push_cb_stack(UI_ACTION_EPOSITION);
						//**extructAmount += gCfgItems.extruStep;
						//**disp_extru_amount();
						/////printf(RELATIVE_COORD_COMMAN);
						pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);
						
						if(gCfgItems.sprayerNum == 2)
						{							
							sprintf((char *)buf,"T%d\n",gCfgItems.curSprayerChoose);
							pushFIFO(&gcodeCmdTxFIFO, buf);
							memset(buf,0,sizeof(buf));
							sprintf((char *)buf, "G1 E%d F%d\n", gCfgItems.extruStep, 60 * gCfgItems.extruSpeed);
							pushFIFO(&gcodeCmdTxFIFO, buf);	
						}
						else
						{
							MOVE_E_COMMAN((char *)buf, gCfgItems.extruStep, 60 * gCfgItems.extruSpeed);
							pushFIFO(&gcodeCmdTxFIFO, buf);
						} 	
						///////printf(buf);
						//pushFIFO(&gcodeCmdTxFIFO, buf);
						////////printf(ABSOLUTE_COORD_COMMAN);
						pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
						#endif

						extructAmount += gCfgItems.extruStep;
						disp_extru_amount();
					}
					//�ƶ������ϱ�������
					//if(printerStaus== pr_pause)
					//	positionSaveFlag = 1;		
				}
				else if(pMsg->hWinSrc == buttonStepBack.btnHandle)
				{
					if(thermalManager.current_temperature[gCfgItems.curSprayerChoose]>= EXTRUDE_MINTEMP)
					{
						//sprintf((char *)buf,"T%d\n",gCfgItems.curSprayerChoose);
						//enqueue_and_echo_commands_P(PSTR(buf));
						enqueue_and_echo_commands_P(PSTR("G91"));
						memset(buf,0,sizeof(buf));
						sprintf((char *)buf, "G1 E%d F%d\n", 0-gCfgItems.extruStep, 60 * gCfgItems.extruSpeed);
						enqueue_and_echo_commands_P(PSTR(buf));	
						enqueue_and_echo_commands_P(PSTR("G90"));	
						#if 0
						//**gCfgItems.extruStep = 0 - abs(gCfgItems.extruStep);
						//**push_cb_stack(UI_ACTION_EPOSITION);
						//**extructAmount += gCfgItems.extruStep;
						//**disp_extru_amount();
						//////////printf(RELATIVE_COORD_COMMAN);

						pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)RELATIVE_COORD_COMMAN);

						if(gCfgItems.sprayerNum == 2)
						{
							sprintf((char *)buf,"T%d\n",gCfgItems.curSprayerChoose);
							pushFIFO(&gcodeCmdTxFIFO, buf);
							memset(buf,0,sizeof(buf));
							sprintf((char *)buf, "G1 E%d F%d\n",0 - gCfgItems.extruStep, 60 * gCfgItems.extruSpeed);						
							pushFIFO(&gcodeCmdTxFIFO, buf);
						}
						else
						{
							MOVE_E_COMMAN((char *)buf, 0 - gCfgItems.extruStep, 60 * gCfgItems.extruSpeed);
							pushFIFO(&gcodeCmdTxFIFO, buf);
						}					
						////printf(buf);
						//pushFIFO(&gcodeCmdTxFIFO, buf);
						////////printf(ABSOLUTE_COORD_COMMAN);
						pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);
#endif
						extructAmount -= gCfgItems.extruStep;
						disp_extru_amount();
						//�ƶ������ϱ�������
						//if(printerStaus== pr_pause)
						//	positionSaveFlag = 1;
					}
				}
				else if(pMsg->hWinSrc == buttonSprayType.btnHandle)
				{
					/*if (CfgPrinterItems.cfg_num_extruder == 2)
					{
						if(Extruder::current->id == 0)
						{					
                            			Extruder::selectExtruderById(1);
						}
						else if(Extruder::current->id == 1)
						{
							
                           			 Extruder::selectExtruderById(0);
						}
						
					}
					else
					{	
						if(Extruder::current->id != 0)
						{														
                           		 	Extruder::selectExtruderById(0);
						}
					}					
					extructAmount = 0;
					disp_sprayer_temp();

					disp_sprayer_type();
					
					disp_extru_amount();*/
					if(mksCfg.extruders == 2)
					{
						if(gCfgItems.curSprayerChoose == 0)
						{
							gCfgItems.curSprayerChoose = 1;
							enqueue_and_echo_command("T1");
						}
						else
						{
							gCfgItems.curSprayerChoose = 0;
							enqueue_and_echo_command("T0");
						}
					}
					else
					{
						gCfgItems.curSprayerChoose = 0;
					}
					
					extructAmount = 0;
					disp_sprayer_temp();

					disp_sprayer_type();
					
					disp_extru_amount();
					
				}
				else if(pMsg->hWinSrc == buttonStep.btnHandle)
				{					
					switch(abs(gCfgItems.extruStep))
					{
						case 1:
							gCfgItems.extruStep = 5;
							break;

						case 5:
							gCfgItems.extruStep = 10;
							break;
							
						case 10:
							gCfgItems.extruStep = 1;
							break;

						default:
							break;
					}
					disp_extru_step();
				}
				else if(pMsg->hWinSrc == buttonSpeed.btnHandle)
				{					
					switch(gCfgItems.extruSpeed)
					{
						case 1:
							gCfgItems.extruSpeed = 10;
							break;

						case 10:
							gCfgItems.extruSpeed = 20;
							break;

						case 20:
							gCfgItems.extruSpeed = 1;
							break;
						
						default:
							break;
					}
					disp_extru_speed();
				}

			}
			
			break;
			
		default:
			WM_DefaultProc(pMsg);
		}
	}


void draw_extrusion()
{
	int i;

	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != EXTRUSION_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = EXTRUSION_UI;
	}
	disp_state = EXTRUSION_UI;
		
	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();

	GUI_DispStringAt(creat_title_text(),  TITLE_XPOS, TITLE_YPOS);
	
	hExtrusionWnd = WM_CreateWindow(0, titleHeight, LCD_WIDTH, imgHeight, WM_CF_SHOW, cbExtrusionWin, 0);
	buttonStepForward.btnHandle = BUTTON_CreateEx(INTERVAL_V, 0,BTN_X_PIXEL, BTN_Y_PIXEL, hExtrusionWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonStepBack.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  0,BTN_X_PIXEL, BTN_Y_PIXEL, hExtrusionWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonSprayType.btnHandle = BUTTON_CreateEx(INTERVAL_V,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hExtrusionWnd, BUTTON_CF_SHOW, 0, 303);
	buttonStep.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hExtrusionWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonSpeed.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*2+INTERVAL_V*3,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hExtrusionWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,  BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hExtrusionWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

	BUTTON_SetBmpFileName(buttonStepForward.btnHandle, "bmp_in.bin",1);
	BUTTON_SetBmpFileName(buttonStepBack.btnHandle, "bmp_out.bin",1);
	
	
	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);
	
	BUTTON_SetBitmapEx(buttonStepForward.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonStepBack.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonSpeed.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonStep.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonRet.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);	



	if(gCfgItems.multiple_language != 0)
	{
		BUTTON_SetText(buttonStepForward.btnHandle,extrude_menu.in);
		BUTTON_SetText(buttonStepBack.btnHandle,extrude_menu.out);
		BUTTON_SetText(buttonRet.btnHandle,common_menu.text_back);	
	}

	textExtruAmount = TEXT_CreateEx(BTN_X_PIXEL+INTERVAL_V*2, BTN_Y_PIXEL/4, BTN_X_PIXEL*2+INTERVAL_V,30, hExtrusionWnd, WM_CF_SHOW, TEXT_CF_HCENTER,	GUI_ID_TEXT2, "�ܼ�����");

	textPrintTemp = TEXT_CreateEx(BTN_X_PIXEL+INTERVAL_V*2, BTN_Y_PIXEL/2, BTN_X_PIXEL*2+INTERVAL_V, 30, hExtrusionWnd, WM_CF_SHOW, TEXT_CF_HCENTER,	GUI_ID_TEXT1, "��ͷ�¶�");
	
	extructAmount = 0;
	
	

	gCfgItems.curSprayerChoose = active_extruder;
	disp_sprayer_temp();
	disp_extru_amount();
	disp_sprayer_type();

	disp_extru_speed();
	disp_extru_step();
	

}

void disp_extru_step()
{
	if(gCfgItems.extruStep == 1)
		BUTTON_SetBmpFileName(buttonStep.btnHandle, "bmp_step1_mm.bin",1);
	else if(gCfgItems.extruStep == 5)
		BUTTON_SetBmpFileName(buttonStep.btnHandle, "bmp_step5_mm.bin",1);
	else if(gCfgItems.extruStep == 10)
		BUTTON_SetBmpFileName(buttonStep.btnHandle, "bmp_step10_mm.bin",1);
	
	if(gCfgItems.multiple_language != 0)	
	{
		if(gCfgItems.extruStep == 1)
			BUTTON_SetText(buttonStep.btnHandle,extrude_menu.step_1mm);	
		else if(gCfgItems.extruStep == 5)
			BUTTON_SetText(buttonStep.btnHandle,extrude_menu.step_5mm);
		else if(gCfgItems.extruStep == 10)
			BUTTON_SetText(buttonStep.btnHandle,extrude_menu.step_10mm);		
	}


}

void disp_extru_speed()
{

	if(gCfgItems.extruSpeed == 20)
		BUTTON_SetBmpFileName(buttonSpeed.btnHandle, "bmp_speed_high.bin",1);
	else if(gCfgItems.extruSpeed == 1)
		BUTTON_SetBmpFileName(buttonSpeed.btnHandle, "bmp_speed_slow.bin",1);
	else
		BUTTON_SetBmpFileName(buttonSpeed.btnHandle, "bmp_speed_normal.bin",1);
	
	if(gCfgItems.multiple_language != 0)
	{
		if(gCfgItems.extruSpeed == 20)
			BUTTON_SetText(buttonSpeed.btnHandle,extrude_menu.high);
		else if(gCfgItems.extruSpeed == 1)	
			BUTTON_SetText(buttonSpeed.btnHandle,extrude_menu.low);
		else
			BUTTON_SetText(buttonSpeed.btnHandle,extrude_menu.normal);	
	}




}

void disp_sprayer_type()
{
	if(gCfgItems.curSprayerChoose == 0)
	{
		BUTTON_SetBmpFileName(buttonSprayType.btnHandle, "bmp_extru1.bin",1);	
	}
	else if(gCfgItems.curSprayerChoose == 1)
	{
		BUTTON_SetBmpFileName(buttonSprayType.btnHandle, "bmp_extru2.bin",1);
	}
	BUTTON_SetBitmapEx(buttonSprayType.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	if(gCfgItems.multiple_language != 0)
	{
		if(gCfgItems.curSprayerChoose == 0)
			BUTTON_SetText(buttonSprayType.btnHandle,extrude_menu.ext1);
		else if(gCfgItems.curSprayerChoose == 1)
			BUTTON_SetText(buttonSprayType.btnHandle,extrude_menu.ext2); 
	}	
}


void disp_sprayer_temp()
{
	char buf[30] = {0};
	char buf1[10] = {0};
	
	TEXT_SetTextColor(textPrintTemp, gCfgItems.title_color);
	TEXT_SetBkColor(textPrintTemp, gCfgItems.background_color);
#if 0
	if(gCfgItems.curSprayerChoose<1)
	{
		sprintf(buf1, extrude_menu.temp_value, (int)gCfgItems.curSprayerTemp[gCfgItems.curSprayerChoose]);
		sprintf(buf,extrude_menu.temper_text);
		strcat(buf,buf1);
	}
	else
	{
		sprintf(buf1, extrude_menu.temp_value, (int)gCfgItems.curSprayerTemp[gCfgItems.curSprayerChoose]);
		sprintf(buf,extrude_menu.temper_text);
		strcat(buf,buf1);		
	}
#endif
	sprintf(buf1, extrude_menu.temp_value, (int)thermalManager.current_temperature[gCfgItems.curSprayerChoose]);
	sprintf(buf,extrude_menu.temper_text);
	strcat(buf,buf1);

	TEXT_SetText(textPrintTemp, buf);
}

void disp_extru_amount()
{
	char buf[30] = {0};
	char buf1[10] = {0};

	TEXT_SetTextColor(textExtruAmount, gCfgItems.title_color);
	TEXT_SetBkColor(textExtruAmount, gCfgItems.background_color);	

	if(extructAmount < 999 && extructAmount > -99)
	{
		sprintf(buf1, extrude_menu.count_value_mm, extructAmount);
		if(gCfgItems.curSprayerChoose<1)
		{
			sprintf(buf,extrude_menu.ext1);
		}
		else
		{
			sprintf(buf,extrude_menu.ext2);		
		}
		strcat(buf,buf1);
	}	
	else if(extructAmount < 9999 && extructAmount > -999)
	{
		sprintf(buf1, extrude_menu.count_value_cm, extructAmount/10);
		if(gCfgItems.curSprayerChoose<1)
		{
			sprintf(buf,extrude_menu.ext1);
		}
		else
		{
			sprintf(buf,extrude_menu.ext2);		
		}
		strcat(buf,buf1);	
	}
	else
	{
		sprintf(buf1, extrude_menu.count_value_m, extructAmount/1000);
		if(gCfgItems.curSprayerChoose<1)
		{
			sprintf(buf,extrude_menu.ext1);
		}
		else
		{
			sprintf(buf,extrude_menu.ext2);		
		}
		strcat(buf,buf1);	
	}
	
	TEXT_SetText(textExtruAmount, buf);
}


void Clear_extrusion()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hExtrusionWnd))
	{
		WM_DeleteWindow(hExtrusionWnd);
		//GUI_Exec();
	}
	//GUI_Clear();
}



