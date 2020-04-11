#include "gui.h"
#include "button.h"
#include "draw_filamentchange.h"
#include "draw_ui.h"
//#include "printer.h"
#include "text.h"
//#include "gcode.h"
#include "draw_pre_heat.h"
//#include "mks_tft_fifo.h"
//#include "mks_tft_com.h"
#include "draw_printing.h"
#include "marlin.h"
#include "temperature.h"
#include "mks_reprint.h"
#include "draw_pause_ui.h"
extern float feedrate_mm_s;

//extern TFT_FIFO gcodeCmdTxFIFO;		//gcode ָ��Ͷ���
//extern TFT_FIFO gcodeCmdRxFIFO;		//gcode	ָ����ն���
extern int X_ADD,X_INTERVAL;

GUI_HWIN hFilamentChangeWnd;
static TEXT_Handle textExtruTemp, textExtruMsg;

static BUTTON_STRUCT buttonFilamentChangeIn, buttonFilamentChangeOut, buttonSprayType,buttonFilamentChangepreheat,buttonFilamentChangeStop, buttonRet;

extern volatile uint8_t get_temp_flag;
extern uint8_t Get_Temperature_Flg;
extern unsigned char positionSaveFlag;

uint8_t filamentchange_Process = 0;

extern uint8_t link_mutex_detect_time;

void disp_filament_sprayer_type();
void disp_filament_sprayer_temp();

uint8_t Filament_in_flg;
uint8_t Filament_out_flg;
uint8_t filament_loading_complete;
uint8_t filament_heating_flg;
uint8_t filament_loading_flg;
uint8_t filament_load_cmd_flg;
uint8_t filament_load_timing_flg;
uint16_t filament_load_timing_cnt;

uint8_t filament_load_heat_flg;
uint8_t filament_unload_heat_flg;

static uint8_t filament_in_out_flg;

extern uint8_t pause_flag;

extern void filament_sprayer_temp();


static void cbFilamentChangeWin(WM_MESSAGE * pMsg) {

	char buf[50] = {0};

	switch (pMsg->MsgId)
	{
		case WM_PAINT:			
			//GUI_SetColor(gCfgItems.state_background_color);
			//GUI_SetColor(gCfgItems.state_background_color);
			//GUI_DrawRect(LCD_WIDTH/4+X_ADD, 0, LCD_WIDTH *3 / 4-X_INTERVAL, imgHeight /2 -15);
			//GUI_SetColor(gCfgItems.state_background_color);
			//GUI_FillRect(LCD_WIDTH/4+X_ADD, 0, LCD_WIDTH *3 / 4-X_INTERVAL, imgHeight /2 -15);		
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
#if tan_mask
					//if(last_disp_state != PAUSE_UI)
					//{
					//Get_Temperature_Flg = 0;
					//}
					#if 0
					if((printerStaus== pr_pause)&&(pause_flag != 1))
					{
						pause_flag = 0;
						//I2C_EE_Init(400000);
						MX_I2C1_Init(400000);
						start_print_time();
						printerStaus = pr_working;
					}
					#endif
					if(filament_in_out_flg == 1)
					{
						if((gCfgItems.sprayerNum == 2)&&(printerStaus != pr_idle))
						{
							gCfgItems.curSprayerChoose = gCfgItems.curSprayerChoose_bak;
						}
						sprintf(buf,"M104 T%d S%.f\n",gCfgItems.curSprayerChoose,gCfgItems.desireSprayerTempBak_1[gCfgItems.curSprayerChoose]);
						pushFIFO(&gcodeCmdTxFIFO,(unsigned char *)buf);
					}
#endif
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

					thermalManager.target_temperature[gCfgItems.curSprayerChoose]= gCfgItems.desireSprayerTempBak;

					filament_in_out_flg = 0;	
					last_disp_state = FILAMENTCHANGE_UI;
					Clear_FilamentChange();
				     #if defined(TFT35)
				     draw_return_ui();
				     #else
		                    if(mksReprint.mks_printer_state== MKS_IDLE)
				         draw_return_ui();
		                    else
		                    {
		                        draw_pause();
		                    }
                        	     #endif
                        
				}
               
				else if(pMsg->hWinSrc == buttonFilamentChangeIn.btnHandle)
				{
					temperature_change_frequency = 1;
					filament_load_heat_flg=1;
					if((abs(thermalManager.target_temperature[gCfgItems.curSprayerChoose]-thermalManager.current_temperature[gCfgItems.curSprayerChoose])<=1)
					||(gCfgItems.filament_load_limit_temper<=thermalManager.current_temperature[gCfgItems.curSprayerChoose]))
					{
						last_disp_state = FILAMENTCHANGE_UI;
						Clear_FilamentChange();
						draw_dialog(DIALOG_TYPE_FILAMENT_HEAT_LOAD_COMPLETED);
					}
					else
					{
						last_disp_state = FILAMENTCHANGE_UI;
						Clear_FilamentChange();
						draw_dialog(DIALOG_TYPE_FILAMENT_LOAD_HEAT);
						if(thermalManager.target_temperature[gCfgItems.curSprayerChoose]<gCfgItems.filament_load_limit_temper)
						{
							memset(buf,0,sizeof(buf));
							sprintf(buf,"M104 T%d S%d\n",gCfgItems.curSprayerChoose,gCfgItems.filament_load_limit_temper);
							enqueue_and_echo_commands_P(PSTR(buf));
						}
						filament_sprayer_temp();
					}

				}
				
				else if(pMsg->hWinSrc == buttonFilamentChangeOut.btnHandle)
				{
					temperature_change_frequency=1;
					filament_unload_heat_flg=1;
					if((thermalManager.target_temperature[gCfgItems.curSprayerChoose] > 0)
						&&((abs((int)((int)thermalManager.target_temperature[gCfgItems.curSprayerChoose] - thermalManager.current_temperature[gCfgItems.curSprayerChoose]))<=1)
						||((int)thermalManager.current_temperature[gCfgItems.curSprayerChoose] >= gCfgItems.filament_unload_limit_temper)))
					{
						last_disp_state = FILAMENTCHANGE_UI;
						Clear_FilamentChange();
						draw_dialog(DIALOG_TYPE_FILAMENT_HEAT_UNLOAD_COMPLETED);
					}
					else
					{
						last_disp_state = FILAMENTCHANGE_UI;
						Clear_FilamentChange();
						draw_dialog(DIALOG_TYPE_FILAMENT_UNLOAD_HEAT);
						if(thermalManager.target_temperature[gCfgItems.curSprayerChoose]<gCfgItems.filament_unload_limit_temper)
						{
							memset(buf,0,sizeof(buf));
							sprintf(buf,"M104 T%d S%d\n",gCfgItems.curSprayerChoose,gCfgItems.filament_unload_limit_temper);
							enqueue_and_echo_commands_P(PSTR(buf));
						}
						filament_sprayer_temp();

						//gCfgItems.desireSprayerTemp[gCfgItems.curSprayerChoose] = gCfgItems.filament_unload_limit_temper;
						//Extruder::setTemperatureForExtruder(gCfgItems.filament_unload_limit_temper,gCfgItems.curSprayerChoose);
					}				
				}
				else if(pMsg->hWinSrc == buttonSprayType.btnHandle)
				{
					if(mksCfg.extruders == 2)
					{
						if(gCfgItems.curSprayerChoose == 0)
						{
							gCfgItems.curSprayerChoose = 1;
							//enqueue_and_echo_commands_P("T1");
						}
						else
						{
							gCfgItems.curSprayerChoose = 0;
							//enqueue_and_echo_commands_P("T0");
						}
					}
					else
					{
						gCfgItems.curSprayerChoose = 0;
					}
					
					disp_filament_sprayer_temp();
					disp_filament_sprayer_type();
				}	

			}		
			break;
		default:
			WM_DefaultProc(pMsg);
	}
}

void draw_FilamentChange()
{
	int8_t buf[100] = {0};
	//link_mutex_detect_time = 5;
	//Get_Temperature_Flg = 1;
	//get_temp_flag = 1;

	
	if(disp_state_stack._disp_state[disp_state_stack._disp_index] != FILAMENTCHANGE_UI)
	{
		disp_state_stack._disp_index++;
		disp_state_stack._disp_state[disp_state_stack._disp_index] = FILAMENTCHANGE_UI;
	}
	disp_state = FILAMENTCHANGE_UI;
		
	GUI_SetBkColor(gCfgItems.background_color);
	GUI_SetColor(gCfgItems.title_color);
	GUI_Clear();
	#if 0
	if(gCfgItems.language == LANG_COMPLEX_CHINESE)
	{
		GUI_SetFont(&GUI_FontHZ16);
	}
	else if(gCfgItems.language == LANG_SIMPLE_CHINESE)
	{
		GUI_SetFont(&FONT_TITLE);
	}
	else
	{
		GUI_SetFont(&GUI_FontHZ_fontHz18);
	}
	#endif
	
	GUI_DispStringAt(creat_title_text(),  TITLE_XPOS, TITLE_YPOS);

	hFilamentChangeWnd = WM_CreateWindow(0, titleHeight, LCD_WIDTH, imgHeight, WM_CF_SHOW, cbFilamentChangeWin, 0);

	buttonFilamentChangeIn.btnHandle = BUTTON_CreateEx(INTERVAL_V,0,BTN_X_PIXEL, BTN_Y_PIXEL, hFilamentChangeWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonFilamentChangeOut.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4,0,BTN_X_PIXEL, BTN_Y_PIXEL, hFilamentChangeWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonSprayType.btnHandle = BUTTON_CreateEx(INTERVAL_V,BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL, BTN_Y_PIXEL, hFilamentChangeWnd, BUTTON_CF_SHOW, 0, alloc_win_id());
	buttonRet.btnHandle = BUTTON_CreateEx(BTN_X_PIXEL*3+INTERVAL_V*4, BTN_Y_PIXEL+INTERVAL_H,BTN_X_PIXEL,BTN_Y_PIXEL, hFilamentChangeWnd, BUTTON_CF_SHOW, 0, alloc_win_id());

	BUTTON_SetBmpFileName(buttonFilamentChangeIn.btnHandle, "bmp_in.bin",1);
	BUTTON_SetBmpFileName(buttonFilamentChangeOut.btnHandle, "bmp_out.bin",1);
	BUTTON_SetBmpFileName(buttonRet.btnHandle, "bmp_return.bin",1);
	
	BUTTON_SetBitmapEx(buttonFilamentChangeIn.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonFilamentChangeOut.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	BUTTON_SetBitmapEx(buttonRet.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
	
	textExtruTemp = TEXT_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,(BTN_Y_PIXEL-90)/2,BTN_X_PIXEL*2+INTERVAL_V,60, hFilamentChangeWnd, WM_CF_SHOW, TEXT_CF_HCENTER|TEXT_CF_VCENTER,GUI_ID_TEXT2, " ");
	//textExtruMsg = TEXT_CreateEx(BTN_X_PIXEL+INTERVAL_V*2,(BTN_Y_PIXEL-30)/2+30, BTN_X_PIXEL*2+INTERVAL_V,30, hFilamentChangeWnd, WM_CF_SHOW, TEXT_CF_HCENTER|TEXT_CF_VCENTER,GUI_ID_TEXT1, " ");

	if(gCfgItems.multiple_language != 0)
	{
		BUTTON_SetText(buttonFilamentChangeIn.btnHandle,filament_menu.in);
		BUTTON_SetText(buttonFilamentChangeOut.btnHandle,filament_menu.out);	
		BUTTON_SetText(buttonRet.btnHandle,common_menu.text_back);
	}

	//TEXT_SetTextAlign(textExtruMsg,  GUI_TA_BOTTOM | GUI_TA_HCENTER);
	//TEXT_SetTextAlign(textExtruTemp,  GUI_TA_TOP| GUI_TA_HCENTER);

	
	gCfgItems.curSprayerChoose = active_extruder;
	disp_filament_sprayer_temp();
	disp_filament_sprayer_type();
	//TEXT_SetTextColor(textExtruMsg, gCfgItems.state_text_color);
	//TEXT_SetBkColor(textExtruMsg, gCfgItems.state_background_color);
	
	//sprintf((char*)buf,filament_menu.ready_replace);
	//TEXT_SetText(textExtruMsg, (const char *)buf);	
}


void disp_filament_sprayer_temp()
{
	int8_t buf[30] = {0};
	int8_t buf1[20] = {0};

	TEXT_SetTextColor(textExtruTemp, gCfgItems.title_color);
	TEXT_SetBkColor(textExtruTemp, gCfgItems.background_color);
	//TEXT_SetTextAlign(textExtruTemp,  GUI_TA_VERTICAL| GUI_TA_HCENTER);
	sprintf((char*)buf,"E%d: ",gCfgItems.curSprayerChoose+1);
	sprintf((char*)buf1, filament_menu.stat_temp, (int)thermalManager.current_temperature[gCfgItems.curSprayerChoose],(int)thermalManager.target_temperature[gCfgItems.curSprayerChoose]);
	strcat((char*)buf,(char*)buf1);
	TEXT_SetText(textExtruTemp, (const char *)buf);
}

void disp_filament_sprayer_type()
{
	if(gCfgItems.curSprayerChoose == 0)
	{			
		#if VERSION_WITH_PIC
		BUTTON_SetBmpFileName(buttonSprayType.btnHandle, "bmp_extru1.bin",1);
		BUTTON_SetBitmapEx(buttonSprayType.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
		#endif
	}
	else
	{
		#if VERSION_WITH_PIC
		BUTTON_SetBmpFileName(buttonSprayType.btnHandle, "bmp_extru2.bin",1);
		BUTTON_SetBitmapEx(buttonSprayType.btnHandle, 0, &bmp_struct, BMP_PIC_X, BMP_PIC_Y);
		#endif
	}
	if(gCfgItems.multiple_language != 0)
	{
		if(gCfgItems.curSprayerChoose == 0)
		{
			BUTTON_SetText(buttonSprayType.btnHandle,filament_menu.ext1);
		}
		else if(gCfgItems.curSprayerChoose == 1)
		{
			BUTTON_SetText(buttonSprayType.btnHandle,filament_menu.ext2);
		}		
	}	
}
#if 0
void FilamentChange_handle()
{
	char buf[15] = {0};

	switch(filamentchange_Process)
	{
	case 1:

		if(gcodeCmdTxFIFO.count <= 12)
		{
			//pushFIFO(&gcodeCmdTxFIFO, RELATIVE_COORD_COMMAN);
			
			if(gCfgItems.sprayerNum == 2)
			{							
				sprintf(buf,"T%d\n",gCfgItems.curSprayerChoose);
				pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
				memset(buf,0,sizeof(buf));
				sprintf(buf, "G1 E%d F%d\n", gCfgItems.filamentchange_step, gCfgItems.filamentchange_speed);
				pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);	
			}
			else
			{
				MOVE_E_COMMAN(buf, gCfgItems.filamentchange_step, gCfgItems.filamentchange_speed);
				pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
			} 	

			//pushFIFO(&gcodeCmdTxFIFO, ABSOLUTE_COORD_COMMAN);		
		}

		break;
	case 2:
	
		if(gcodeCmdTxFIFO.count <= 12)
		{
			//pushFIFO(&gcodeCmdTxFIFO, RELATIVE_COORD_COMMAN);
					
			if(gCfgItems.sprayerNum == 2)
			{							
				sprintf(buf,"T%d\n",gCfgItems.curSprayerChoose);
				pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
				memset(buf,0,sizeof(buf));
				sprintf(buf, "G1 E%d F%d\n", 0-gCfgItems.filamentchange_step, gCfgItems.filamentchange_speed);
				pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);	
			}
			else
			{
				MOVE_E_COMMAN(buf, 0-gCfgItems.filamentchange_step, gCfgItems.filamentchange_speed);
				pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)buf);
			} 	

			//pushFIFO(&gcodeCmdTxFIFO, ABSOLUTE_COORD_COMMAN);			
		}
		break;
	case 3:
		initFIFO(&gcodeCmdTxFIFO);
		filamentchange_Process = 0;	
		pushFIFO(&gcodeCmdTxFIFO, (unsigned char *)ABSOLUTE_COORD_COMMAN);//ȷ�������Ծ�������ִ��
		//�ƶ������ϱ�������
		if(last_disp_state == PRINT_MORE_UI)
			positionSaveFlag = 1;		
		break;
	default:break;		
	}
}
#endif
void Clear_FilamentChange()
{
	GUI_SetBkColor(gCfgItems.background_color);
	if(WM_IsWindow(hFilamentChangeWnd))
	{
		WM_DeleteWindow(hFilamentChangeWnd);
		GUI_Exec();
	}
	//GUI_Clear();
}


