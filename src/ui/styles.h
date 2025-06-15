#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Style: Panels
lv_style_t *get_style_panels_MAIN_DEFAULT();
void add_style_panels(lv_obj_t *obj);
void remove_style_panels(lv_obj_t *obj);

// Style: Labels
lv_style_t *get_style_labels_MAIN_DEFAULT();
void add_style_labels(lv_obj_t *obj);
void remove_style_labels(lv_obj_t *obj);

// Style: Label-Big
lv_style_t *get_style_label_big_MAIN_DEFAULT();
void add_style_label_big(lv_obj_t *obj);
void remove_style_label_big(lv_obj_t *obj);

// Style: Panel-Label
lv_style_t *get_style_panel_label_MAIN_DEFAULT();
void add_style_panel_label(lv_obj_t *obj);
void remove_style_panel_label(lv_obj_t *obj);

// Style: Tab-Bar
lv_style_t *get_style_tab_bar_MAIN_DEFAULT();
lv_style_t *get_style_tab_bar_ITEMS_CHECKED();
lv_style_t *get_style_tab_bar_ITEMS_DEFAULT();
void add_style_tab_bar(lv_obj_t *obj);
void remove_style_tab_bar(lv_obj_t *obj);

// Style: Tab-Content
lv_style_t *get_style_tab_content_MAIN_DEFAULT();
void add_style_tab_content(lv_obj_t *obj);
void remove_style_tab_content(lv_obj_t *obj);

// Style: Bottom-Buttons
lv_style_t *get_style_bottom_buttons_MAIN_DEFAULT();
void add_style_bottom_buttons(lv_obj_t *obj);
void remove_style_bottom_buttons(lv_obj_t *obj);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/