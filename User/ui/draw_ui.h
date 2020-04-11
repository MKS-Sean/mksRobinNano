#ifndef _DRAW_UI_
#define _DRAW_UI_
#include<stdlib.h>

#include "stdint.h"
#include "string.h"
#include "main.h"
#include "gui.h"
#include "button.h"
#include "PROGBAR.h"
#include "fontLib.h"
#include "LISTBOX.h"
#include "text.h"

#include "mks_cfg.h"

#include "id_manage.h"
#include "draw_dialog.h"
#include "id_manage.h"
//#include "configuration.h"
//#include "repetier.h"
#include "ff.h"
//#include "hal.h"
//#include "ui.h"

#include "string_deal.h"
#include "pic.h"
#include "Multi_language.h"
#include "draw_meshleveling.h"
#include "draw_machine_para.h"
#include "draw_ready_print.h"
#include "draw_machine_settings.h"
#include "draw_temperature_settings.h"
#include "draw_motor_settings.h"
#include "draw_machine_type.h"
#include "draw_stroke.h"
#include "draw_home_dir.h"
#include "draw_endstop_type.h"
#include "draw_filament_settings.h"
#include "draw_levelingsettings.h"
#include "draw_levelingPara_config.h"
#include "draw_deltaLevelPare.h"
#include "draw_XYZLevelPara.h"
#include "draw_MaxFeedRate.h"
#include "draw_steps.h"
#include "draw_acceleration.h"
#include "draw_jerk.h"
#include "draw_motor_dir.h"
#include "draw_home_speed.h"
#include "draw_nozzle_config.h"
#include "draw_hotbed_config.h"
#include "draw_advanced.h"
#include "draw_doublez.h"
#include "draw_EnablePin_Invert.h"
#include "draw_number_key.h"

extern float delta_height;
extern float delta_radius;
extern float delta_diagonal_rod;
extern float delta_calibration_radius;

extern float zprobe_zoffset;
extern void gcode_M500();
extern void gcode_M501();

typedef enum
{
	X_stroke,
	Y_stroke,
	Z_stroke,
	X_stroke_min,
	Y_stroke_min,
	Z_stroke_min,

	Load_Temper_limit,
	Load_Speed,
	Load_Length,
	Unload_Temper_limit,
	Unload_Speed,
	Unload_Length,	

	xoffset,
	yoffset,
	zoffset,
	xyspeed,
	zspeed,

	DeltaRadius,
	DeltaDiagonalRod,
	PrintableRadius,
	DeltaHeight,
	SmoothRodOffset,
	EffectorOffset,
	CalibrationRadius,

	Point1_x,
	Point2_x,
	Point3_x,
	Point4_x,
	Point5_x,

	Point1_y,
	Point2_y,
	Point3_y,
	Point4_y,
	Point5_y,

	XMaxFeedRate,
	YMaxFeedRate,
	ZMaxFeedRate,
	E0MaxFeedRate,
	E1MaxFeedRate,
	
	PrintAcceleration,
	RetractAcceleration,
	TravelAcceleration,
	XAcceleration,
	YAcceleration,
	ZAcceleration,
	E0Acceleration,
	E1Acceleration,

	XJerk,
	YJerk,
	ZJerk,
	EJerk,

	Xstep,
	Ystep,
	Zstep,
	E0step,
	E1step,

	XYspeed,
	Zspeed,

	Nozzle_Cnt,
	Nozzle_min,
	Nozzle_max,
	Extrude_min_temper,
	Nozzle_pid_p,
	Nozzle_pid_i,
	Nozzle_pid_d,
	
	HotBed_min,
	HotBed_max,
	HotBed_pid_p,
	HotBed_pid_i,
	HotBed_pid_d

}value_state;

extern value_state value;

/*
typedef struct Screen_size
{
	uint8_t display_style;//屏幕首页显示风格。
	uint8_t firstpage_gap;//简约版首页按钮间隔。	

	uint8_t gap_h;//按钮间的水平间隔
	uint8_t gap_v;//按钮间的垂直间隔
	
	uint16_t width;//屏幕的宽X
	uint16_t high;//屏幕的高Y
	
	uint16_t btn_x_pixel;//按钮的宽x
	uint16_t btn_y_pixel;//按钮的高y
	
	uint16_t title_xpos;//标题栏的x位置
	uint16_t title_ypos;//标题栏的y位置
	uint16_t title_high;//标题栏的高度

	
}Screen;

extern Screen TFT_screen;
*/

//#define SAVE_FROM_SD				//断电续打保存在SD中。

#define VERSION_WITH_PIC	1
extern uint32_t To_pre_view;

extern uint8_t flash_preview_begin;
extern uint8_t default_preview_flg;

//**#define LCD_WIDTH	320
//**#define LCD_HEIGHT	240

#define PREVIEW_LITTLE_PIC_SIZE		40910//400*100+9*101+1
#define PREVIEW_SIZE			202720//(PREVIEW_LITTLE_PIC_SIZE+800*200+201*9+1)

#if (0)
#define LCD_WIDTH			800
#define LCD_HEIGHT		480

#define titleHeight	40


#define imgHeight		(LCD_HEIGHT - titleHeight)	

#define TITLE_XPOS		3
#define TITLE_YPOS		5

#define MARGIN_PIXEL 3

#define INTERVAL_H	4
#define INTERVAL_V	3

#define BTN_X_PIXEL	196
#define BTN_Y_PIXEL	216

#define BTN_PIC_X_PIXEL	100
#define BTN_PIC_Y_PIXEL	100

#define BTN_PIC_X_OFFSET		45
#define BTN_PIC_Y_OFFSET		30

#define BTN_TEXT_OFFSET		25

#define STATE_PIC_X_PIXEL	50
#define STATE_PIC_Y_PIXEL	50


#endif
#if defined(MKS_ROBIN_MINI)||defined(MKS_ROBIN_NANO)
#if defined(TFT35)
#define VALUE_DEFAULT_X				70
#define VALUE_DEFAULT_Y				28


#define LCD_WIDTH			480
#define LCD_HEIGHT		320

#define MAIN_PAGE_X		32
#define MAIN_PAGE_Y		90

#define TOP_BLANK			30
#define TOP_WIDTH			160

#define ICON_GAP_H	 2
#define ICON_GAP_V  2

#define SUB_PAGE_X		2
#define SUB_PAGE_Y		0

#define SUB_BTN_X_PIXEL 	100
#define SUB_BTN_Y_PIXEL  40

#define titleHeight	36//TFT_screen.title_high


#define imgHeight		(LCD_HEIGHT-titleHeight)//(TFT_screen.high-TFT_screen.title_high)

#define SIMPLE_MAIN_PAGE_GAP	32

#define TITLE_XPOS	 3		//TFT_screen.title_xpos//
#define TITLE_YPOS		5		//TFT_screen.title_ypos//

#define MARGIN_PIXEL  3

#define INTERVAL_H	2		//TFT_screen.gap_h
#define INTERVAL_V	2		//TFT_screen.gap_v

#define BTN_X_PIXEL	117		//TFT_screen.btn_x_pixel//
#define BTN_Y_PIXEL	140//TFT_screen.btn_y_pixel//

#define BTN_PIC_X_PIXEL	117
#define BTN_PIC_Y_PIXEL	140

#define BTN_PIC_X_OFFSET		0
#define BTN_PIC_Y_OFFSET		0

#define BTN_TEXT_OFFSET		8

#define OTHER_BTN_XPIEL		117
#define OTHER_BTN_YPIEL		92

#define STATE_PIC_X_PIXEL	45
#define STATE_PIC_Y_PIXEL	45

#define FILE_PRE_PIC_X_OFFSET	8
#define FILE_PRE_PIC_Y_OFFSET	5

#define	DIALOG_BTN_XPIEL		140
#define DIALOG_BTN_YPIEL		50

#define SIMPLE_FIRST_PAGE_GRAP	32	

#else
#define LCD_WIDTH			320//480
#define LCD_HEIGHT		240//320

#define titleHeight	30//TFT_screen.title_high//36


#define imgHeight		 (LCD_HEIGHT - titleHeight)//(TFT_screen.high-TFT_screen.title_high)//

#define SIMPLE_FIRST_PAGE_GRAP	21	

#define TITLE_XPOS	 0//TFT_screen.title_xpos//	3
#define TITLE_YPOS		0//TFT_screen.title_ypos//5

#define MARGIN_PIXEL  3

#define INTERVAL_H	2//TFT_screen.gap_h// 2
#define INTERVAL_V	2//TFT_screen.gap_v// 2

#define BTN_X_PIXEL	78//TFT_screen.btn_x_pixel//117
#define BTN_Y_PIXEL	104//TFT_screen.btn_y_pixel// 140

#define BTN_PIC_X_PIXEL	78//117
#define BTN_PIC_Y_PIXEL	104//140

#define BTN_PIC_X_OFFSET		0
#define BTN_PIC_Y_OFFSET		0

#define BTN_TEXT_OFFSET		8

#define OTHER_BTN_XPIEL		117
#define OTHER_BTN_YPIEL		92
#if defined(MKS_ROBIN_MINI)||defined(MKS_ROBIN_NANO)
#define	DIALOG_BTN_XPIEL		80
#define DIALOG_BTN_YPIEL		40
#else
#define	DIALOG_BTN_XPIEL		140
#define DIALOG_BTN_YPIEL		50

#endif
#define STATE_PIC_X_PIXEL	45
#define STATE_PIC_Y_PIXEL	45

#define FILE_PRE_PIC_X_OFFSET	8
#define FILE_PRE_PIC_Y_OFFSET	5
#endif
#endif

#define GUI_PURPLE			0x300018

//#define GUI_STATE_COLOR         0x646400 
//#define GUI_STATE_COLOR         0x806480 
#define GUI_RET_BUTTON_COLOR			GUI_BLACK//GUI_DARKGREEN//0x00a800
#define GUI_STATE_COLOR        			GUI_BLACK//GUI_DARKBLUE
#define GUI_BK_CLOLOR					GUI_BLACK
#define GUI_TITLE_TEXT_COLOR			GUI_WHITE
#define GUI_STATE_TEXT_COLOR			GUI_WHITE
#define GUI_FILE_NAME_TEXT_COLOR		GUI_WHITE
#define GUI_FILE_NAME_BK_COLOR			GUI_BLACK//GUI_BLUE
#define GUI_PRINTING_STATE_BK_COLOR		GUI_BLACK//GUI_DARKBLUE
#define GUI_PRINTING_STATE_TEXT_COLOR		GUI_WHITE


#define GUI_BUTTON_COLOR		GUI_BLACK // GUI_BLUE
#define GUI_FOCUS_CLOLOR		GUI_RET_BUTTON_COLOR


#define GUI_DARKGREEN2         GUI_DARKGREEN



extern char BMP_PIC_X ;
extern char BMP_PIC_Y;  // 0// 17

#define BMP_PIC_X_H		0
#define BMP_PIC_Y_H    0

#if 0
//璇█
#define LANG_SIMPLE_CHINESE		1
#define LANG_COMPLEX_CHINESE	2
#define LANG_ENGLISH			3

#define FONT_BUTTON	GUI_FontHZ_fontHz14
#define FONT_STATE_INF	GUI_FontHZ_fontHz14
#define FONT_TITLE		GUI_FontHZ_fontHz14
#endif

#define FILE_SYS_USB	0
#define FILE_SYS_SD	1


struct PressEvt
{
 int x;
 int y;
 unsigned char pressed;
};

typedef struct
{
	
	int16_t  days;    //**
	uint16_t    hours;
	uint8_t    minutes;
	volatile int8_t    seconds;
	int8_t    ms_10;
	int8_t	start;
	
} PRINT_TIME;




typedef enum
{
	MAIN_UI,
	PRINT_READY_UI,
	PRINT_FILE_UI,
	PRINTING_UI,
	MOVE_MOTOR_UI,
	OPERATE_UI,
	PAUSE_UI,
	EXTRUSION_UI,
	FAN_UI,
	PRE_HEAT_UI,
	CHANGE_SPEED_UI,
	TEMP_UI,
	SET_UI,
	ZERO_UI,
	SPRAYER_UI,
	MACHINE_UI,
	LANGUAGE_UI,
	ABOUT_UI,
	LOG_UI,
	DISK_UI,
	CALIBRATE_UI,
	DIALOG_UI,
	WIFI_UI,
	MORE_UI,
	FILETRANSFER_UI,
	FILETRANSFERSTATE_UI,
	PRINT_MORE_UI,
	FILAMENTCHANGE_UI,
	LEVELING_UI,
	MESHLEVELING_UI,
	BIND_UI,
	ZOFFSET_UI,
	TOOL_UI,
	HARDWARE_TEST_UI,
	WIFI_LIST_UI,
	KEY_BOARD_UI,
	TIPS_UI,
	MACHINE_PARA_UI,
	MACHINE_SETTINGS_UI,
	TEMPERATURE_SETTINGS_UI,
	MOTOR_SETTINGS_UI,
	MACHINETYPE_UI,
	STROKE_UI,
	HOME_DIR_UI,
	ENDSTOP_TYPE_UI,
	FILAMENT_SETTINGS_UI,
	LEVELING_SETTIGNS_UI,
	LEVELING_PARA_UI,
	DELTA_LEVELING_PARA_UI,
	XYZ_LEVELING_PARA_UI,
	MAXFEEDRATE_UI,
	STEPS_UI,
	ACCELERATION_UI,
	JERK_UI,
	MOTORDIR_UI,
	HOMESPEED_UI,
	NOZZLE_CONFIG_UI,
	HOTBED_CONFIG_UI,
	ADVANCED_UI,
	DOUBLE_Z_UI,
	ENABLE_INVERT_UI,
	NUMBER_KEY_UI
} DISP_STATE;

typedef struct
{
	DISP_STATE _disp_state[100];
	char       _disp_index;
	
} DISP_STATE_STACK;

#define  CB_EVENT_DEPTH	20
typedef struct
{	
	int16_t event[CB_EVENT_DEPTH];
	int8_t  r_idx;
	int8_t  w_idx;
	
} CB_EVENT_STACK;


typedef enum
{
	SD_NOT_INIT = 1,
	SD_INIT_OK,
	SD_FILE_RET_BEGIN,
	SD_FILE_RET_END,
	SD_SEL_FILE
	
} SD_STATE;





typedef struct
{
	BUTTON_Handle btnHandle;
	GUI_BITMAP btnPic;
	
} BUTTON_STRUCT;


#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

extern CFG_ITMES gCfgItems;

extern uint8_t temperature_change_frequency;

//extern fileNameList gcodeFileList;

//extern GUI_FLASH const GUI_FONT GUI_FontHZ_fontHz14;

extern DISP_STATE disp_state;
extern DISP_STATE last_disp_state;
extern DISP_STATE_STACK disp_state_stack;

#if _LFN_UNICODE
extern TCHAR curFileName[100];
#else
extern char curFileName[100];
#endif


//extern PR_STATUS printerStaus;
extern void DRAW_LOGO();
extern int8_t get_printing_rate(FIL *fileHandle);
extern void disp_sel_lang(void);
extern void draw_return_ui();

extern void clear_cur_ui(void);
extern char *creat_title_text(void);
extern void gui_view_init(void);
extern void push_cb_stack(int16_t event_id);
extern void GUI_callback(void);
//extern void BUTTON_SetBmpFileName(BUTTON_STRUCT *btnStruct, const uint8_t *picName);
extern void GUI_RefreshPage(void);
extern void save_preview_to_flash(char *path,int xpos_pixel,int ypos_pixel);
extern void disp_pre_gcode(int xpos_pixel,int ypos_pixel);
extern void preview_gcode_prehandle(char *path);
extern uint8_t have_pre_pic(char *path);
extern void gcode_has_preview(char *path);

//extern uint8_t drawicon_preview(char *path,int xsize_small,int ysize_small,int xsize_big,int ysize_big,char sel);

// HC-chen 2017.7.27
//按钮背景色
#define PreHeat_bk_color 0x008bff
#define Move_bk_color 0x2311e8
#define Zero_bk_color 0x8c00ed
#define Print_bk_color 0x7a2167
#define Extrude_bk_color 0xf0bd20
#define Leveling_bk_color 0x94b200
#define Set_bk_color 0x499e00
#define More_bk_color 0x0ad8bb
#define PreHeat_add_bk_color 0xcb7e43
#define PreHeat_Dec_bk_color 0xcb7e43
#define PreHeat_E_bk_color 0x505050
#define PreHeat_step_bk_color 0x505050
#define PreHeat_close_bk_color 0x505050
#define Move_X_add_bk_color 0x505050
#define Move_Y_add_bk_color 0x505050
#define Move_Z_add_bk_color 0x505050
#define Move_X_dec_bk_color 0x505050
#define Move_Y_dec_bk_color 0x505050
#define Move_Z_dec_bk_color 0x505050
#define Move_step_bk_color 0xcb7e43
#define Home_all_bk_color 0xca7e43
#define Home_X_bk_color 0x505050
#define Home_Y_bk_color 0x505050
#define Home_Z_bk_color 0x505050
#define Printing_file_bk_color
#define Printing_pageUp_bk_color 0x290c14
#define Printing_pageDown_bk_color 0x290c14
#define Extrude_in_bk_color 0xcb7e43
#define Extrude_out_bk_color 0xcb7e43
#define Extrude_E_bk_color 0x505050
#define Extrude_step_bk_color 0x505050
#define Extrude_speed_bk_color 0x505050
#define Leveling_first_bk_color 0x505050
#define Leveling_second_bk_color 0x505050
#define Leveling_third_bk_color 0x505050
#define Leveling_fourth_bk_color 0x505050
#define Set_M_off_bk_color 0xcb7e43
#define Set_wifi_bk_color 0xcb7e43
#define Set_fan_bk_color 0xcb7e43
#define Set_about_bk_color 0xcb7e43
#define Set_continue_bk_color 0xcb7e43
#define Set_change_bk_color 0xcb7e43
#define Set_disk_bk_color 0xcb7e43
#define Fan_add_bk_color 0xcb7e43
#define Fan_dec_bk_color 0xcb7e43
#define Fan_full_bk_color 0x505050
#define Fan_half_bk_color 0x505050
#define Fan_close_bk_color 0x505050
#define Change_in_bk_color 0xcb7e43
#define Change_out_bk_color 0xcb7e43
#define Change_E_bk_color 0x505050
#define Change_PreHeat_bk_color 0x008bff
#define Change_stop_bk_color 0xcb7e43
#define More_more_bk_color 0x505050
#define Oprate_bk_color 0xcb7e43
#define Oprate_Pause_bk_color 0xcb7e43
#define Oprate_Stop_bk_color 0xcb7e43
#define Oprate_temerature_bk_color 0x505050
#define Oprate_more_bk_color 0x505050
#define Oprate_speed_bk_color 0x505050
#define Oprate_speed_add_bk_color 0xcb7e43
#define Oprate_speed_dec_bk_color 0xcb7e43
#define Oprate_speed_move_bk_color 0x505050
#define Oprate_speed_move_sel_bk_color 0x9dfcff
#define Oprate_speed_extrude_bk_color 0x505050
#define Oprate_speed_extrude_sel_bk_color 0x9dfcff
#define Oprate_speed_step_bk_color 0x505050
#define Oprate_more_bk_color 0x505050
#define Pause_resume_bk_color 0xcb7e43
#define Pause_stop_bk_color 0xcb7e43
#define Pause_extrude_bk_color 0xf0bd20
#define Pause_move_bk_color 0x2311e8
#define Pause_temperature_bk_color 0xffd200
#define Pause_more_bk_color 0x0ad8bb
#define Back_bk_color 0x4dcb32
#define Off_machine_sel_bk_color 0x9efcff
#define Off_machine_bk_color 0x505050
#define Print_file_name_bk_color 0x290c14
//按钮字体显示
#define Simple_PreHeat "预热"
#define Complex_PreHeat "預熱"
#define English_PreHeat "PreHeat"
#define Simple_Move "移动"
#define Complex_Move "移動"
#define English_Move "Move"
#define Simple_Home "归零"
#define Complex_Home "歸零"
#define English_Home "Home"
#define Simple_Printing "打印"
#define Complex_Printing "打印"
#define English_Printing "Printing"
#define Simple_Extrude "挤出"
#define Complex_Extrude "擠出"
#define English_Extrude "Extrude"
#define Simple_Leveling "调平"
#define Complex_Leveling "調平"
#define English_Leveling "Leveling"
#define Simple_AutoLeveling "自动调平"
#define Complex_AutoLeveling "自動調平"
#define English_AutoLeveling "Auto Leveling"
#define Simple_Set "设置"
#define Complex_Set "設置"
#define English_Set "Set"
#define Simple_More "更多"
#define Complex_More "更多"
#define English_More "More"
#define Simple_Add "增加"
#define Complex_Add "增加"
#define English_Add "Add"
#define Simple_Dec"减少"
#define Complex_Dec "減少"
#define English_Dec "Dec"
#define Simple_E1 "喷头1"
#define Complex_E1 "噴頭1"
#define English_E1 "E1"
#define Simple_E2 "喷头2"
#define Complex_E2 "噴頭2"
#define English_E2 "E2"
#define temperature1 "1℃"
#define temperature5 "5℃"
#define temperature10 "10℃"
#define Simple_Close "关闭"
#define Complex_Close "關閉"
#define English_Close "Close"
#define Simple_Back "返回"
#define Complex_Back "返回"
#define English_Back "Back"
#define Move_X_Add "X+"
#define Move_X_Dec "X-"
#define Move_Y_Add "Y+"
#define Move_Y_Dec "Y-"
#define Move_Z_Add "Z+"
#define Move_Z_Dec "Z-"
#define Step_01mm "0.1mm"
#define Step_1mm "1mm"
#define Step_5mm "5mm"
#define Step_10mm "10mm"
#define Home_X "X"
#define Home_Y "Y"
#define Home_Z "Z"
#define Simple_PageUp "上一页"
#define Complex_PageUp "上一頁"
#define English_PageUp "Page Up"
#define Simple_PageDown "下一页"
#define Complex_PageDown "下一頁"
#define English_PageDown "Page Down"
#define Simple_Operate "操作"
#define Complex_Operate "操作"
#define English_Operate "Option"
#define Simple_Operate "操作"
#define Complex_Operate "操作"
#define English_Operate "Option"
#define Simple_Pause "暂停"
#define Complex_Pause "暫停"
#define English_Pause "Pause"
#define Simple_Stop "停止"
#define Complex_Stop "停止"
#define English_Stop "Stop"
#define Simple_Temperature "温度"
#define Complex_Temperature "溫度"
#define English_Temperature "Temperature"
#define Simple_Speed "变速"
#define Complex_Speed "變速"
#define English_Speed "Speed"
#define Simple_Speed "速度"
#define Complex_Speed "速度"
#define English_Speed "Speed"
#define Simple_Resume "恢复"
#define Complex_Resume "恢复"
#define English_Resume "Resume"
#define Simple_In "进料"
#define Complex_In "進料"
#define English_In "In"
#define Simple_Out "退料"
#define Complex_Out "退料"
#define English_Out "Out"
#define Simple_Slow "慢速"
#define Complex_Slow "慢速"
#define English_Slow "Slow"
#define Simple_Normal "常速"
#define Complex_Normal "常速"
#define English_Normal "Normal"
#define Simple_High "高速"
#define Complex_High "高速"
#define English_High "High"
#define Simple_First "第一点"
#define Complex_First "第一點"
#define English_First "First"
#define Simple_Second "第二点"
#define Complex_Second "第二點"
#define English_Second "Second"
#define Simple_Third "第三点"
#define Complex_Third "第三點"
#define English_Third "Third"
#define Simple_Fourth "第四点"
#define Complex_Fourth "第四點"
#define English_Fourth "Fourth"
#define Simple_Five "第五点"
#define Complex_Five "第五點"
#define English_Five "Fifth"
#define Simple_Full "全速"
#define Complex_Full "全速"
#define English_Full "Full"
#define Simple_Half "半速"
#define Complex_Half "半速"
#define English_Half "Half"
#define Simple_ManualOff_machine "手动关机"
#define Complex_ManualOff_machine "手動關機"
#define English_ManualOff_machine "Manual off"
#define Simple_AutoOff_machine "自动关机"
#define Complex_AutoOff_machine "自動關機"
#define English_AutoOff_machine "Auto off"
#define English_Wifi "WIFI"
#define Simple_Fan "风扇"
#define Complex_Fan "風扇"
#define English_Fan "Fan"
#define Simple_About "关于"
#define Complex_About "關於"
#define English_About "About"
#define Simple_Continue "断点续打"
#define Complex_Continue "斷點續打"
#define English_Continue "Continue"
#define Simple_Change "换料"
#define Complex_Change "換料"
#define English_Change "Change"
#define Simple_M_off "关闭电机"
#define Complex_M_off "關閉電機"
#define English_M_off "M-off"
#define Simple_Bed "热床"
#define Complex_Bed "熱床"
#define English_Bed "Bed"
#define Simple_Filament "换料"
#define Complex_Filament "換料"
#define English_Filament "Filament"

#if defined(__cplusplus)
}     /* Make sure we have C-declarations in C++ programs */
#endif


#endif
