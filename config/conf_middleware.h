/*
 * conf_middleware.h
 *
 *  Created on: 2019��3��3��
 *      Author: asdf2
 */

#ifndef MIDDLEWARE_CONF_MIDDLEWARE_H_
#define MIDDLEWARE_CONF_MIDDLEWARE_H_

//-----------------AbstractButton----------------
#define ABUTTON_EN 1
#if ABUTTON_EN>0
#define ABUTTON_COUNT 2//<=255
#define ABUTTON_GET_FUNC_BUFFER_LEN 10//<256
#define ABUFFON_REFRESH_HOOK_EN 1
#define ABUTTON_RAWINPUT_WORDLENGTH 8

#endif
//-----------------GUI--------------------------
#define GUI_EN 0	
#if GUI_EN>0
#define GUI_WIDTH 128//<256
#define GUI_HEIGHT 64//<256
#define GUI_BUF_TYPE GUI_BLACK_V
#define GUI_BUF_NAME LCDBuffer
#define GUI_REFRESH_HOOK() LCDRefresh()
#endif
//----------------AppE--------------------------
#define APPE_EN 1
#if APPE_EN>0
#define BT_EXT_CALLBACK 1
#define APPE_PEND_BUF_MAX 20
#endif

#endif /* MIDDLEWARE_CONF_MIDDLEWARE_H_ */
