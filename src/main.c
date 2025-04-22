#include "porting/lv_porting.h"
#include "GUI_APP/ui.h"
#include "lvgl.h"

int main(int argc, char const *argv[])
{
    lv_porting_init();

    ui_init();
    while (1) {
        lv_timer_handler();
        lv_porting_delay();
    }
}
