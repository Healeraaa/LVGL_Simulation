// 该文件由SquareLine Studio生成
// SquareLine Studio版本: SquareLine Studio 1.3.0
// LVGL版本: 8.2.0
// 项目名称: test

#ifndef _TEST_UI_HELPERS_H // 头文件保护宏，防止重复包含
#define _TEST_UI_HELPERS_H

#ifdef __cplusplus // C++兼容性处理
extern "C" {       // 确保C++环境中使用C语言链接规则
#endif

#include "ui.h" // 包含主UI头文件（依赖UI组件声明）

/*-------------------------------------
  通用配置常量
-------------------------------------*/
#define _UI_TEMPORARY_STRING_BUFFER_SIZE 32 // 临时字符串缓冲区大小（用于文本处理）

/*-------------------------------------
  组件属性操作宏与函数
-------------------------------------*/
// 进度条属性操作
#define _UI_BAR_PROPERTY_VALUE           0                    // 操作进度条当前值
#define _UI_BAR_PROPERTY_VALUE_WITH_ANIM 1                    // 带动画效果设置进度条值
void _ui_bar_set_property(lv_obj_t *target, int id, int val); // 设置进度条属性

// 基础组件属性操作
#define _UI_BASIC_PROPERTY_POSITION_X 0                         // 操作X坐标
#define _UI_BASIC_PROPERTY_POSITION_Y 1                         // 操作Y坐标
#define _UI_BASIC_PROPERTY_WIDTH      2                         // 操作宽度
#define _UI_BASIC_PROPERTY_HEIGHT     3                         // 操作高度
void _ui_basic_set_property(lv_obj_t *target, int id, int val); // 设置基础属性

// 下拉框属性操作
#define _UI_DROPDOWN_PROPERTY_SELECTED 0 // 操作选中项索引
void _ui_dropdown_set_property(lv_obj_t *target, int id, int val);

// 图片组件属性操作
#define _UI_IMAGE_PROPERTY_IMAGE 0 // 操作图片资源
void _ui_image_set_property(lv_obj_t *target, int id, uint8_t *val);

// 标签组件属性操作
#define _UI_LABEL_PROPERTY_TEXT 0 // 操作文本内容
void _ui_label_set_property(lv_obj_t *target, int id, const char *val);

// 滚轮组件属性操作
#define _UI_ROLLER_PROPERTY_SELECTED           0 // 设置选中项
#define _UI_ROLLER_PROPERTY_SELECTED_WITH_ANIM 1 // 带动画设置选中项
void _ui_roller_set_property(lv_obj_t *target, int id, int val);

// 滑块组件属性操作
#define _UI_SLIDER_PROPERTY_VALUE           0 // 设置滑块值
#define _UI_SLIDER_PROPERTY_VALUE_WITH_ANIM 1 // 带动画设置滑块值
void _ui_slider_set_property(lv_obj_t *target, int id, int val);

/*-------------------------------------
  屏幕与组件操作函数
-------------------------------------*/
void _ui_screen_change(lv_obj_t *target,            // 目标屏幕对象
                       lv_scr_load_anim_t fademode, // 切换动画模式
                       int spd,                     // 动画速度（毫秒）
                       int delay);                  // 动画延迟（毫秒）

// 组件数值递增操作
void _ui_arc_increment(lv_obj_t *target, int val);             // 圆弧组件数值增加
void _ui_bar_increment(lv_obj_t *target, int val, int anm);    // 进度条数值增加
void _ui_slider_increment(lv_obj_t *target, int val, int anm); // 滑块数值增加

// 键盘组件关联输入框
void _ui_keyboard_set_target(lv_obj_t *keyboard, lv_obj_t *textarea);

/*-------------------------------------
  组件状态与样式操作
-------------------------------------*/
// 标志位操作模式
#define _UI_MODIFY_FLAG_ADD    0                                 // 添加标志位
#define _UI_MODIFY_FLAG_REMOVE 1                                 // 移除标志位
#define _UI_MODIFY_FLAG_TOGGLE 2                                 // 切换标志位状态
void _ui_flag_modify(lv_obj_t *target, int32_t flag, int value); // 修改组件标志位

// 状态操作模式
#define _UI_MODIFY_STATE_ADD    0                                  // 添加状态
#define _UI_MODIFY_STATE_REMOVE 1                                  // 移除状态
#define _UI_MODIFY_STATE_TOGGLE 2                                  // 切换状态
void _ui_state_modify(lv_obj_t *target, int32_t state, int value); // 修改组件状态

// 设置组件透明度（0-255）
void _ui_opacity_set(lv_obj_t *target, int val);

/*-------------------------------------
  动画系统相关定义
-------------------------------------*/
/** 自定义动画用户数据结构体 */
typedef struct _ui_anim_user_data_t {
    lv_obj_t *target;      // 动画目标对象
    lv_img_dsc_t **imgset; // 图片帧集合（用于帧动画）
    int32_t imgset_size;   // 图片帧数量
    int32_t val;           // 自定义数值参数
} ui_anim_user_data_t;

// 释放动画用户数据的回调
void _ui_anim_callback_free_user_data(lv_anim_t *a);

// 动画属性设置回调簇
void _ui_anim_callback_set_x(lv_anim_t *a, int32_t v);           // 设置X坐标动画
void _ui_anim_callback_set_y(lv_anim_t *a, int32_t v);           // 设置Y坐标动画
void _ui_anim_callback_set_width(lv_anim_t *a, int32_t v);       // 设置宽度动画
void _ui_anim_callback_set_height(lv_anim_t *a, int32_t v);      // 设置高度动画
void _ui_anim_callback_set_opacity(lv_anim_t *a, int32_t v);     // 透明度动画
void _ui_anim_callback_set_image_zoom(lv_anim_t *a, int32_t v);  // 图片缩放动画
void _ui_anim_callback_set_image_angle(lv_anim_t *a, int32_t v); // 图片旋转角度动画
void _ui_anim_callback_set_image_frame(lv_anim_t *a, int32_t v); // 图片帧切换动画

// 动画属性获取回调簇
int32_t _ui_anim_callback_get_x(lv_anim_t *a);           // 获取当前X坐标
int32_t _ui_anim_callback_get_y(lv_anim_t *a);           // 获取当前Y坐标
int32_t _ui_anim_callback_get_width(lv_anim_t *a);       // 获取当前宽度
int32_t _ui_anim_callback_get_height(lv_anim_t *a);      // 获取当前高度
int32_t _ui_anim_callback_get_opacity(lv_anim_t *a);     // 获取当前透明度
int32_t _ui_anim_callback_get_image_zoom(lv_anim_t *a);  // 获取图片缩放值
int32_t _ui_anim_callback_get_image_angle(lv_anim_t *a); // 获取图片旋转角度
int32_t _ui_anim_callback_get_image_frame(lv_anim_t *a); // 获取当前图片帧

/*-------------------------------------
  组件联动功能
-------------------------------------*/
void _ui_arc_set_text_value(lv_obj_t *trg,        // 目标标签对象
                            lv_obj_t *src,        // 来源圆弧组件
                            const char *prefix,   // 数值前缀（如："Value: "）
                            const char *postfix); // 数值后缀（如："%"）

void _ui_slider_set_text_value(lv_obj_t *trg, // 目标标签对象
                               lv_obj_t *src, // 来源滑块组件
                               const char *prefix,
                               const char *postfix);

void _ui_checked_set_text_value(lv_obj_t *trg,        // 目标标签对象
                                lv_obj_t *src,        // 来源复选框组件
                                const char *txt_on,   // 选中时显示文本
                                const char *txt_off); // 未选中时显示文本

#ifdef __cplusplus
} /*extern "C"*/ // 结束C++兼容作用域
#endif

#endif // 结束头文件保护宏 _TEST_UI_HELPERS_H