#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *pages;
    lv_obj_t *main;
    lv_obj_t *obj0;
    lv_obj_t *obj0__obj0;
    lv_obj_t *obj0__state_14;
    lv_obj_t *obj0__state_15;
    lv_obj_t *obj1;
    lv_obj_t *obj1__obj0;
    lv_obj_t *obj1__state_14;
    lv_obj_t *obj1__state_15;
    lv_obj_t *obj2;
    lv_obj_t *obj2__obj0;
    lv_obj_t *obj2__state_14;
    lv_obj_t *obj2__state_15;
    lv_obj_t *obj3;
    lv_obj_t *obj3__obj0;
    lv_obj_t *obj3__state_14;
    lv_obj_t *obj3__state_15;
    lv_obj_t *obj4;
    lv_obj_t *obj4__obj0;
    lv_obj_t *obj4__state_14;
    lv_obj_t *obj4__state_15;
    lv_obj_t *obj5;
    lv_obj_t *obj5__obj0;
    lv_obj_t *obj5__state_14;
    lv_obj_t *obj5__state_15;
    lv_obj_t *obj6;
    lv_obj_t *obj6__obj0;
    lv_obj_t *obj6__state_14;
    lv_obj_t *obj6__state_15;
    lv_obj_t *obj7;
    lv_obj_t *obj7__obj0;
    lv_obj_t *obj7__state_14;
    lv_obj_t *obj7__state_15;
    lv_obj_t *obj8;
    lv_obj_t *obj8__obj0;
    lv_obj_t *obj8__state_14;
    lv_obj_t *obj8__state_15;
    lv_obj_t *obj9;
    lv_obj_t *obj9__obj0;
    lv_obj_t *obj9__state_14;
    lv_obj_t *obj9__state_15;
    lv_obj_t *obj10;
    lv_obj_t *obj10__obj0;
    lv_obj_t *obj10__state_14;
    lv_obj_t *obj10__state_15;
    lv_obj_t *obj11;
    lv_obj_t *obj11__obj0;
    lv_obj_t *obj11__state_14;
    lv_obj_t *obj11__state_15;
    lv_obj_t *obj12;
    lv_obj_t *obj12__obj0;
    lv_obj_t *obj12__state_14;
    lv_obj_t *obj12__state_15;
    lv_obj_t *obj13;
    lv_obj_t *obj13__obj0;
    lv_obj_t *obj13__state_14;
    lv_obj_t *obj13__state_15;
    lv_obj_t *left_1;
    lv_obj_t *baraa_1;
    lv_obj_t *contaa_1;
    lv_obj_t *obj14;
    lv_obj_t *obj15;
    lv_obj_t *obj16;
    lv_obj_t *obj17;
    lv_obj_t *obj18;
    lv_obj_t *feedrate_1;
    lv_obj_t *tabe2_1;
    lv_obj_t *tabe3_1;
    lv_obj_t *tabe4_1;
    lv_obj_t *obj19;
    lv_obj_t *obj20;
    lv_obj_t *tabe5_1;
    lv_obj_t *tabe1_1;
    lv_obj_t *obj21;
    lv_obj_t *state_4;
    lv_obj_t *panel_dro_4;
    lv_obj_t *obj22;
    lv_obj_t *obj23;
    lv_obj_t *obj24;
    lv_obj_t *obj25;
    lv_obj_t *bottom_panel1;
    lv_obj_t *obj26;
    lv_obj_t *obj27;
    lv_obj_t *obj28;
    lv_obj_t *obj29;
    lv_obj_t *obj30;
    lv_obj_t *obj31;
    lv_obj_t *left;
    lv_obj_t *baraa;
    lv_obj_t *contaa;
    lv_obj_t *tabe1;
    lv_obj_t *state_1;
    lv_obj_t *panel_dro_1;
    lv_obj_t *tabe2;
    lv_obj_t *feedrate;
    lv_obj_t *tabe3;
    lv_obj_t *tabe4;
    lv_obj_t *obj32;
    lv_obj_t *obj33;
    lv_obj_t *tabe5;
    lv_obj_t *right;
    lv_obj_t *obj34;
    lv_obj_t *state_2;
    lv_obj_t *panel_dro_2;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_PAGES = 1,
    SCREEN_ID_MAIN = 2,
};

void create_screen_pages();
void delete_screen_pages();
void tick_screen_pages();

void create_screen_main();
void delete_screen_main();
void tick_screen_main();

void create_user_widget_dro(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_dro(void *flowState, int startWidgetIndex);

void create_screen_by_id(enum ScreensEnum screenId);
void delete_screen_by_id(enum ScreensEnum screenId);
void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/