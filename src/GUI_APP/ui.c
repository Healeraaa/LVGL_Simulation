// 该文件由SquareLine Studio生成
// SquareLine Studio版本: SquareLine Studio 1.3.0
// LVGL版本: 8.2.0
// 项目名称: test

#include "ui.h"         // 包含自动生成的UI头文件
#include "ui_helpers.h" // 包含UI辅助函数头文件

///////////////////// 变量声明 ////////////////////

// 屏幕: ui_Screen1
void ui_Screen1_screen_init(void); // 屏幕初始化函数声明
lv_obj_t *ui_Screen1;              // 屏幕1对象指针
lv_obj_t *ui_iconHeart;            // 心形图标对象指针
lv_obj_t *ui_Keyboard2;            // 键盘组件对象指针
lv_obj_t *ui_Label1;               // 标签组件对象指针
lv_obj_t *ui____initial_actions0;  // 初始动作对象指针（可能用于初始化布局）

///////////////////// LVGL设置检查 ////////////////////
// 以下检查确保LVGL配置与SquareLine Studio设置匹配
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH应为16位以匹配SquareLine Studio设置"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP应为0以匹配SquareLine Studio设置"
#endif

///////////////////// 动画 ////////////////////
// （当前无动画定义，可在此添加动画相关代码）

///////////////////// 函数声明 ////////////////////
// （当前无函数定义，可在此添加自定义函数声明）

///////////////////// 屏幕初始化 ////////////////////

void ui_init(void)
{
    // 获取默认显示设备  
    lv_disp_t *dispp = lv_disp_get_default(); /* lv_scr_act()：获取默认显示器当前正在显示的活动屏幕对象（lv_obj_t *） */
      
    //lv_theme_default_init() 会创建一个主题对象，然后把它应用到指定显示器上，使得所有控件（按钮、标签、滑块等）都有统一的视觉风格（比如颜色、字体、圆角等）。
    // 初始化默认主题：
    // 参数1: 显示设备
    // 参数2: 主色（蓝色调色板）
    // 参数3: 强调色（红色调色板）
    // 参数4: 是否启用暗色模式（true表示启用）
    // 参数5: 默认字体
    lv_theme_t *theme = lv_theme_default_init(
        dispp,
        lv_palette_main(LV_PALETTE_BLUE),
        lv_palette_main(LV_PALETTE_RED),
        true,
        LV_FONT_DEFAULT);

    // 这个函数绑定“主题”和“显示器”，让这个显示器上所有新建的控件自动使用指定的主题。
    lv_disp_set_theme(dispp, theme);

    // 初始化Screen1屏幕
    ui_Screen1_screen_init();

    // 创建初始动作容器（可能作为其他元素的父容器）
    ui____initial_actions0 = lv_obj_create(NULL);

    // 加载Screen1屏幕到显示设备
    lv_disp_load_scr(ui_Screen1);
}