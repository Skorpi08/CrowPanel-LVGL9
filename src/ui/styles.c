#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: Panels
//

void init_style_panels_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_opa(style, 255);
    lv_style_set_radius(style, 0);
    lv_style_set_layout(style, LV_LAYOUT_FLEX);
    lv_style_set_flex_flow(style, LV_FLEX_FLOW_COLUMN);
    lv_style_set_flex_main_place(style, LV_FLEX_ALIGN_CENTER);
    lv_style_set_flex_cross_place(style, LV_FLEX_ALIGN_CENTER);
    lv_style_set_pad_top(style, 5);
    lv_style_set_pad_bottom(style, 5);
    lv_style_set_pad_left(style, 5);
    lv_style_set_pad_row(style, 11);
    lv_style_set_pad_right(style, 5);
    lv_style_set_bg_color(style, lv_color_hex(0xff353d41));
    lv_style_set_border_opa(style, 50);
    lv_style_set_border_color(style, lv_color_hex(0xff000000));
};

lv_style_t *get_style_panels_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_panels_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_panels(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_panels_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_panels(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_panels_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Labels
//

void init_style_labels_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_color(style, lv_color_hex(0xff30b2ff));
    lv_style_set_text_font(style, &lv_font_montserrat_16);
};

lv_style_t *get_style_labels_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_labels_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_labels(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_labels_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_labels(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_labels_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Label-Big
//

void init_style_label_big_MAIN_DEFAULT(lv_style_t *style) {
    init_style_labels_MAIN_DEFAULT(style);
    
    lv_style_set_text_color(style, lv_color_hex(0xff30b2ff));
    lv_style_set_text_font(style, &lv_font_montserrat_40);
};

lv_style_t *get_style_label_big_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_label_big_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_label_big(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_label_big_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_label_big(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_label_big_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Panel-Label
//

void init_style_panel_label_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_align(style, LV_ALIGN_CENTER);
    lv_style_set_text_font(style, &lv_font_montserrat_26);
    lv_style_set_bg_color(style, lv_color_hex(0xff000000));
    lv_style_set_text_color(style, lv_color_hex(0xff30b2ff));
};

lv_style_t *get_style_panel_label_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_panel_label_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_panel_label(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_panel_label_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_panel_label(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_panel_label_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Tab-Bar
//

void init_style_tab_bar_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xff353d41));
    lv_style_set_bg_opa(style, 255);
};

lv_style_t *get_style_tab_bar_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_tab_bar_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_tab_bar_ITEMS_CHECKED(lv_style_t *style) {
    lv_style_set_bg_opa(style, 255);
    lv_style_set_bg_color(style, lv_color_hex(0xff32383d));
    lv_style_set_text_color(style, lv_color_hex(0xff00ff22));
    lv_style_set_text_font(style, &lv_font_montserrat_26);
    lv_style_set_text_decor(style, LV_TEXT_DECOR_NONE);
};

lv_style_t *get_style_tab_bar_ITEMS_CHECKED() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_tab_bar_ITEMS_CHECKED(style);
    }
    return style;
};

void init_style_tab_bar_ITEMS_DEFAULT(lv_style_t *style) {
    lv_style_set_border_color(style, lv_color_hex(0xff1a1a1a));
    lv_style_set_border_opa(style, 0);
    lv_style_set_border_width(style, 5);
    lv_style_set_border_side(style, LV_BORDER_SIDE_LEFT);
    lv_style_set_shadow_width(style, 5);
    lv_style_set_text_color(style, lv_color_hex(0xff30b2ff));
    lv_style_set_text_font(style, &lv_font_montserrat_20);
};

lv_style_t *get_style_tab_bar_ITEMS_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_tab_bar_ITEMS_DEFAULT(style);
    }
    return style;
};

void add_style_tab_bar(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_tab_bar_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_tab_bar_ITEMS_CHECKED(), LV_PART_ITEMS | LV_STATE_CHECKED);
    lv_obj_add_style(obj, get_style_tab_bar_ITEMS_DEFAULT(), LV_PART_ITEMS | LV_STATE_DEFAULT);
};

void remove_style_tab_bar(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_tab_bar_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_tab_bar_ITEMS_CHECKED(), LV_PART_ITEMS | LV_STATE_CHECKED);
    lv_obj_remove_style(obj, get_style_tab_bar_ITEMS_DEFAULT(), LV_PART_ITEMS | LV_STATE_DEFAULT);
};

//
// Style: Tab-Content
//

void init_style_tab_content_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_bg_color(style, lv_color_hex(0xff32383d));
    lv_style_set_bg_opa(style, 255);
};

lv_style_t *get_style_tab_content_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_tab_content_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_tab_content(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_tab_content_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_tab_content(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_tab_content_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
// Style: Bottom-Buttons
//

void init_style_bottom_buttons_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_radius(style, 10);
    lv_style_set_bg_color(style, lv_color_hex(0xff222121));
    lv_style_set_clip_corner(style, false);
    lv_style_set_blend_mode(style, LV_BLEND_MODE_NORMAL);
    lv_style_set_shadow_color(style, lv_color_hex(0xff000000));
};

lv_style_t *get_style_bottom_buttons_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_malloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_bottom_buttons_MAIN_DEFAULT(style);
    }
    return style;
};

void add_style_bottom_buttons(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_bottom_buttons_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

void remove_style_bottom_buttons(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_bottom_buttons_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_panels,
        add_style_labels,
        add_style_label_big,
        add_style_panel_label,
        add_style_tab_bar,
        add_style_tab_content,
        add_style_bottom_buttons,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_panels,
        remove_style_labels,
        remove_style_label_big,
        remove_style_panel_label,
        remove_style_tab_bar,
        remove_style_tab_content,
        remove_style_bottom_buttons,
    };
    remove_style_funcs[styleIndex](obj);
}

