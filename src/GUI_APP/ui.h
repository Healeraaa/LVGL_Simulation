// 该文件由SquareLine Studio生成
// SquareLine Studio版本: SquareLine Studio 1.3.0
// LVGL版本: 8.2.0
// 项目名称: test

#ifndef _TEST_UI_H // 头文件保护宏，防止重复包含
#define _TEST_UI_H

#ifdef __cplusplus // 兼容C++编译器
extern "C" {       // 确保在C++环境中以C语言方式编译
#endif

/*-------------------------------------
  包含核心库与依赖项
-------------------------------------*/
#include "lvgl.h"       // LVGL图形库核心头文件
#include "ui_helpers.h" // UI辅助函数（布局/样式等工具）
#include "ui_events.h"  // UI事件处理函数声明

/*-------------------------------------
  屏幕与UI组件声明
-------------------------------------*/
// 声明屏幕初始化函数
void ui_Screen1_screen_init(void);

// 使用extern声明全局UI对象（实际定义在.c文件中）
extern lv_obj_t *ui_Screen1;             // 主屏幕容器对象
extern lv_obj_t *ui_iconHeart;           // 心形图标（可能用于状态指示）
extern lv_obj_t *ui_Keyboard2;           // 虚拟键盘组件
extern lv_obj_t *ui_Label1;              // 文本标签组件
extern lv_obj_t *ui____initial_actions0; // 初始布局容器（通常用于初始化配置）

/*-------------------------------------
  字体资源声明
-------------------------------------*/
// 声明项目中使用的字体（实际字体数据在外部定义）
LV_FONT_DECLARE(ui_font_ALIBABA16);  // 阿里巴巴普惠体16px字体
LV_FONT_DECLARE(ui_font_ALIBABA32);  // 阿里巴巴普惠体32px字体
LV_FONT_DECLARE(ui_font_iconfont32); // 图标字体32px（可能用于符号显示）

/*-------------------------------------
  核心函数声明
-------------------------------------*/
void ui_init(void); // UI系统初始化入口函数

#ifdef __cplusplus
} /*extern "C"*/ // 结束C++兼容作用域
#endif

#endif // 结束头文件保护宏 _TEST_UI_H