// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__DA1368DB_F92F_4AAE_86E3_70C4BF842BE0__INCLUDED_)
#define AFX_STDAFX_H__DA1368DB_F92F_4AAE_86E3_70C4BF842BE0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#include <afxdisp.h>        // MFC Automation classes
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <afxtempl.h>
#endif // _AFX_NO_AFXCMN_SUPPORT



// 云台控制命令
typedef enum _PTZ_Command
{
	PTZ_CONTROL_UP = 0,							//上
	PTZ_CONTROL_DOWN = 1,								// 下
	PTZ_CONTROL_LEFT = 2,								// 左
	PTZ_CONTROL_RIGHT = 3,								// 右
	PTZ_CONTROL_ZOOM_ADD = 4,							// 变倍+
	PTZ_CONTROL_ZOOM_SUB = 5,						// 变倍-
	PTZ_CONTROL_FOCUS_ADD = 6,							// 调焦+
	PTZ_CONTROL_FOCUS_SUB = 7,						// 调焦-
	PTZ_CONTROL_IRIS_ADD = 8,							// 光圈+
	PTZ_CONTROL_IRIS_SUB = 9,							// 光圈-
	PTZ_CONTROL_POINT_MOVE = 10,						// 跳转到预设点
	PTZ_CONTROL_POINT_SET = 11,						// 预设点设置
	PTZ_CONTROL_UPLEFT = 12,							// 左上
	PTZ_CONTROL_UPRIGHT = 13,							// 右上
	PTZ_CONTROL_DOWNLEFT = 14,							// 左下
	PTZ_CONTROL_DOWNRIGHT = 15,							// 右下
	PTZ_CONTROL_SPEED_ADD = 16,						// 云台速度+
	PTZ_CONTROL_SPEED_SUB = 17,							// 云台速度-
	PTZ_CONTROL_AUTO = 18,							// 自动
} PTZ_Command;

//摄像机厂商定义
#define CAMERA_INC_DAHUA 1
#define CAMERA_INC_HAIKANG 2
#define CAMERA_INC_YAAN 3

//当前摄像头厂家
#define ALLTAB_CAMERA_INC_TYPE CAMERA_INC_HAIKANG

//工程 使用ushow2的库
/*************************************
//发布指南，目前分5种

//汽车单机版
ALLTAB_DETECT_CAR_MODE=1
YRVM_PINGTAI_MODE=0

//汽车联YRVM平台版
ALLTAB_DETECT_CAR_MODE=1
YRVM_PINGTAI_MODE=1

//电动车单机版
ALLTAB_DETECT_CAR_MODE=0
YRVM_PINGTAI_MODE=0

//电动联YRVM平台 写入电动车表 版
ALLTAB_DETECT_CAR_MODE=0
YRVM_PINGTAI_MODE=1
YRVM_PINGTAI_ELECAR_MIX_MODE=0

//电动联YRVM平台 写入机动车表 版
ALLTAB_DETECT_CAR_MODE=0
YRVM_PINGTAI_MODE=1
YRVM_PINGTAI_ELECAR_MIX_MODE=1

*************************************/

//汽车模式 1 电动车模式 0
#define ALLTAB_DETECT_CAR_MODE 0

//开启车牌识别代码=1 关闭=0  关闭就可以不用KEY也可以DEBUG
#define OPEN_CARDETECT_CODE 0

//开启人脸识别代码=1 关闭=0  关闭就可以不用KEY也可以DEBUG
#define OPEN_FACEDETECT_CODE 0

//结果输出到平台 模式 =1  单机版=0 
#define YRVM_PINGTAI_MODE	1

//结果输出到平台 电动车写入机动车表 =1  电动车写入电动车表=0 
#define YRVM_PINGTAI_ELECAR_MIX_MODE	0


//弹出框登录 1 不弹出窗登录0 //预留 请务必为1
#define ALLTAB_LOGIN_WIN_MODE 1

//开启POCO-FTP功能 需要2008编译
#define OPEN_VS2008_POCO_FTP	0


///////////////////////////

#if OPEN_CARDETECT_CODE
	#if ALLTAB_DETECT_CAR_MODE
		//弹出框题目
		#define MESSAGEBOX_TITLE "智能视频机动车车牌分析服务软件 2.0版"
	#else
		//弹出框题目
		#define MESSAGEBOX_TITLE "智能视频电动车车牌分析服务软件 2.0版"
	#endif
#else
	#define MESSAGEBOX_TITLE "智能视频车牌分析服务软件 2.0版"
#endif


//最多增加区域
#define MAX_AREA 1024

//最大显示多少个摄像头窗口
#define MAX_DEVICE_NUM 16

//亚安的RTSP地址 rtsp://10.142.50.249:554/0/888888:888888/main

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__DA1368DB_F92F_4AAE_86E3_70C4BF842BE0__INCLUDED_)
