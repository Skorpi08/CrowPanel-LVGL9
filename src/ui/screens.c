#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;

void create_screen_pages() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.pages = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff32383d), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // left_1
            lv_obj_t *obj = lv_tabview_create(parent_obj);
            objects.left_1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 545, 480);
            lv_tabview_set_tab_bar_position(obj, LV_DIR_LEFT);
            lv_tabview_set_tab_bar_size(obj, 100);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_shadow_width(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // baraa_1
                    lv_obj_t *obj = lv_tabview_get_tab_bar(parent_obj);
                    objects.baraa_1 = obj;
                    add_style_tab_bar(obj);
                }
                {
                    // contaa_1
                    lv_obj_t *obj = lv_tabview_get_content(parent_obj);
                    objects.contaa_1 = obj;
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    add_style_tab_content(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Move");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.obj14 = obj;
                                    lv_obj_set_pos(obj, -11, 156);
                                    lv_obj_set_size(obj, 398, 289);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff353d41), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 112, 103);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_label_big(obj);
                                            lv_label_set_text(obj, "Z");
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            objects.obj15 = obj;
                                            lv_obj_set_pos(obj, -2, 81);
                                            lv_obj_set_size(obj, 80, 80);
                                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff222121), LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    add_style_label_big(obj);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "X");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            objects.obj16 = obj;
                                            lv_obj_set_pos(obj, 84, -11);
                                            lv_obj_set_size(obj, 80, 80);
                                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff222121), LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    add_style_label_big(obj);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Z+");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            objects.obj17 = obj;
                                            lv_obj_set_pos(obj, 169, 81);
                                            lv_obj_set_size(obj, 80, 80);
                                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff222121), LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    add_style_label_big(obj);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Y");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            objects.obj18 = obj;
                                            lv_obj_set_pos(obj, 84, 173);
                                            lv_obj_set_size(obj, 80, 80);
                                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff222121), LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    add_style_label_big(obj);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Z-");
                                                }
                                            }
                                        }
                                    }
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -127, -156);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Step size Z:");
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -134, -103);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Feed Rate:");
                                }
                                {
                                    // feedrate_1
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    objects.feedrate_1 = obj;
                                    lv_obj_set_pos(obj, 156, 97);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "10000");
                                    lv_textarea_set_placeholder_text(obj, "100");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -119, -209);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Step size XY:");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 156, 44);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "0.991");
                                    lv_textarea_set_placeholder_text(obj, "0.991");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 156, -9);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "0.991");
                                    lv_textarea_set_placeholder_text(obj, "0.991");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, 84, -209);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Jog:");
                                }
                                {
                                    lv_obj_t *obj = lv_switch_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, -9);
                                    lv_obj_set_size(obj, 70, 42);
                                }
                            }
                        }
                        {
                            // tabe2_1
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Probe");
                            objects.tabe2_1 = obj;
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, 281, 395);
                                    lv_obj_set_size(obj, 100, 50);
                                    add_style_bottom_buttons(obj);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_panel_label(obj);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "Hole");
                                        }
                                    }
                                }
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, -4, 395);
                                    lv_obj_set_size(obj, 100, 50);
                                    add_style_bottom_buttons(obj);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_panel_label(obj);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "XY");
                                        }
                                    }
                                }
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, 117, 395);
                                    lv_obj_set_size(obj, 143, 50);
                                    add_style_bottom_buttons(obj);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_panel_label(obj);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "Auto Level");
                                        }
                                    }
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, 34);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "10");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, 19, -214);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Fast find rate:");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, -11);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "100");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -10, -168);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Endmill Diameter:");
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, 16, -122);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Slow find rate:");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, 80);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "100");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, 126);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "1");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, 1, -76);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Retract amount:");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, 171);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "19.23");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -38, -30);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Touch Plate thickness:");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, 217);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "-11.28");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, 6, 16);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Probe Distance:");
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -12, 62);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Work Coordinates:");
                                }
                                {
                                    lv_obj_t *obj = lv_dropdown_create(parent_obj);
                                    lv_obj_set_pos(obj, 305, 263);
                                    lv_obj_set_size(obj, 70, LV_SIZE_CONTENT);
                                    lv_dropdown_set_options(obj, "G54\nG55\nG56\nG57\nG58\nG59");
                                    lv_dropdown_set_dir(obj, LV_DIR_LEFT);
                                    lv_dropdown_set_symbol(obj, LV_SYMBOL_LEFT);
                                    lv_dropdown_set_selected(obj, 0);
                                }
                            }
                        }
                        {
                            // tabe3_1
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Job");
                            objects.tabe3_1 = obj;
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, -9, 240);
                                    lv_obj_set_size(obj, 148, 50);
                                    add_style_bottom_buttons(obj);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_panel_label(obj);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "FLASH | sd");
                                        }
                                    }
                                }
                                {
                                    lv_obj_t *obj = lv_list_create(parent_obj);
                                    lv_obj_set_pos(obj, -9, -11);
                                    lv_obj_set_size(obj, 396, 236);
                                }
                            }
                        }
                        {
                            // tabe4_1
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Wifi");
                            objects.tabe4_1 = obj;
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -84, -164);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Wifi: ON");
                                }
                                {
                                    lv_obj_t *obj = lv_switch_create(parent_obj);
                                    lv_obj_set_pos(obj, 199, 6);
                                    lv_obj_set_size(obj, 70, 30);
                                }
                                {
                                    lv_obj_t *obj = lv_list_create(parent_obj);
                                    objects.obj19 = obj;
                                    lv_obj_set_pos(obj, -13, 50);
                                    lv_obj_set_size(obj, 281, 253);
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff353d41), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    lv_obj_t *obj = lv_checkbox_create(parent_obj);
                                    objects.obj20 = obj;
                                    lv_obj_set_pos(obj, 9, 311);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_checkbox_set_text(obj, "Auto-connect");
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff2fadf7), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                                }
                            }
                        }
                        {
                            // tabe5_1
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Settings");
                            objects.tabe5_1 = obj;
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, 100, 50);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "Button");
                                        }
                                    }
                                }
                            }
                        }
                        {
                            // tabe1_1
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Terminal");
                            objects.tabe1_1 = obj;
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                        }
                    }
                }
            }
        }
        {
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.obj21 = obj;
            lv_obj_set_pos(obj, 558, 0);
            lv_obj_set_size(obj, 235, 56);
            lv_bar_set_value(obj, 75, LV_ANIM_OFF);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff13ff00), LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 100, LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff353d41), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // state_4
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.state_4 = obj;
            lv_obj_set_pos(obj, 614, 5);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            add_style_label_big(obj);
            lv_label_set_text(obj, "state");
        }
        {
            // panel-dro_4
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_dro_4 = obj;
            lv_obj_set_pos(obj, 553, 54);
            lv_obj_set_size(obj, 240, 203);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            add_style_panels(obj);
            lv_obj_set_style_pad_top(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_row(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_column(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.obj0 = obj;
                    lv_obj_set_pos(obj, 11, 80);
                    lv_obj_set_size(obj, 227, 44);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    create_user_widget_dro(obj, getFlowState(flowState, 60), 3);
                }
                {
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.obj1 = obj;
                    lv_obj_set_pos(obj, 5, 71);
                    lv_obj_set_size(obj, 227, 44);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    create_user_widget_dro(obj, getFlowState(flowState, 61), 7);
                }
                {
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.obj2 = obj;
                    lv_obj_set_pos(obj, 16, 71);
                    lv_obj_set_size(obj, 227, 44);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    create_user_widget_dro(obj, getFlowState(flowState, 62), 11);
                }
                {
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.obj3 = obj;
                    lv_obj_set_pos(obj, 130, 71);
                    lv_obj_set_size(obj, 226, 44);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    create_user_widget_dro(obj, getFlowState(flowState, 63), 15);
                }
            }
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 553, 266);
            lv_obj_set_size(obj, 240, 207);
            add_style_panels(obj);
            lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_COLUMN_WRAP, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.obj22 = obj;
                    lv_obj_set_pos(obj, -353, -189);
                    lv_obj_set_size(obj, 90, 50);
                    add_style_bottom_buttons(obj);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff08ff00), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj23 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "START");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.obj24 = obj;
                    lv_obj_set_pos(obj, -353, -189);
                    lv_obj_set_size(obj, 90, 50);
                    add_style_bottom_buttons(obj);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj25 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "STOP");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 692, 319);
                    lv_obj_set_size(obj, 90, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Reset");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 693, 391);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Home");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 665, 416);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "Zero All");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 514, -618);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Unlock");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    lv_obj_set_pos(obj, 128, 52);
                    lv_obj_set_size(obj, 125, 171);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    add_style_panels(obj);
                    lv_obj_set_style_pad_top(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_row(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_column(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_flex_cross_place(obj, LV_FLEX_ALIGN_START, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_COLUMN_WRAP, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_labels(obj);
                            lv_label_set_text(obj, "FRO: 100%   ");
                        }
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_labels(obj);
                            lv_label_set_text(obj, "SRO: 100%");
                        }
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_labels(obj);
                            lv_label_set_text(obj, "Job: 75%");
                        }
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_labels(obj);
                            lv_label_set_text(obj, "F1000 S24000");
                        }
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_labels(obj);
                            lv_label_set_text(obj, "M3 M7 M8");
                        }
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_labels(obj);
                            lv_label_set_text(obj, "G21 G54 G91");
                        }
                    }
                }
            }
        }
    }
    
    tick_screen_pages();
}

void delete_screen_pages() {
    lv_obj_delete(objects.pages);
    objects.pages = 0;
    objects.left_1 = 0;
    objects.baraa_1 = 0;
    objects.contaa_1 = 0;
    objects.obj14 = 0;
    objects.obj15 = 0;
    objects.obj16 = 0;
    objects.obj17 = 0;
    objects.obj18 = 0;
    objects.feedrate_1 = 0;
    objects.tabe2_1 = 0;
    objects.tabe3_1 = 0;
    objects.tabe4_1 = 0;
    objects.obj19 = 0;
    objects.obj20 = 0;
    objects.tabe5_1 = 0;
    objects.tabe1_1 = 0;
    objects.obj21 = 0;
    objects.state_4 = 0;
    objects.panel_dro_4 = 0;
    objects.obj0 = 0;
    objects.obj1 = 0;
    objects.obj2 = 0;
    objects.obj3 = 0;
    objects.obj22 = 0;
    objects.obj23 = 0;
    objects.obj24 = 0;
    objects.obj25 = 0;
    deletePageFlowState(0);
}

void tick_screen_pages() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    tick_user_widget_dro(getFlowState(flowState, 60), 3);
    tick_user_widget_dro(getFlowState(flowState, 61), 7);
    tick_user_widget_dro(getFlowState(flowState, 62), 11);
    tick_user_widget_dro(getFlowState(flowState, 63), 15);
}

void create_screen_main() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff1a1a1a), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // bottom-panel1
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.bottom_panel1 = obj;
            lv_obj_set_pos(obj, 0, 420);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            add_style_panels(obj);
            lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_ROW, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Reset");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Unlock");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Home");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    lv_obj_set_pos(obj, 92, 0);
                    lv_obj_set_size(obj, 120, 50);
                    add_style_bottom_buttons(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_label_set_text(obj, "Terminal");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.obj26 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff00a20a), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj27 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "START");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.obj28 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj29 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "STOP");
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_button_create(parent_obj);
                    objects.obj30 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 50);
                    add_style_bottom_buttons(obj);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff576900), LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.obj31 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            add_style_panel_label(obj);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "PAUSE");
                        }
                    }
                }
            }
        }
        {
            // left
            lv_obj_t *obj = lv_tabview_create(parent_obj);
            objects.left = obj;
            lv_obj_set_pos(obj, 0, 5);
            lv_obj_set_size(obj, 395, 410);
            lv_tabview_set_tab_bar_position(obj, LV_DIR_LEFT);
            lv_tabview_set_tab_bar_size(obj, 100);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // baraa
                    lv_obj_t *obj = lv_tabview_get_tab_bar(parent_obj);
                    objects.baraa = obj;
                    add_style_tab_bar(obj);
                }
                {
                    // contaa
                    lv_obj_t *obj = lv_tabview_get_content(parent_obj);
                    objects.contaa = obj;
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    add_style_tab_content(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // tabe1
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "DRO");
                            objects.tabe1 = obj;
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // state_1
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    objects.state_1 = obj;
                                    lv_obj_set_pos(obj, 76, -17);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_label_big(obj);
                                    lv_label_set_text(obj, "state");
                                }
                                {
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    lv_obj_set_pos(obj, -5, 249);
                                    lv_obj_set_size(obj, 274, 133);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    add_style_panels(obj);
                                    lv_obj_set_style_pad_top(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_bottom(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_left(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_right(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_row(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_column(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_flex_cross_place(obj, LV_FLEX_ALIGN_START, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_COLUMN_WRAP, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "FRO: 100%   ");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "SRO: 100%");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "Job: 99%");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "F1000 S24000");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "M3 M7 M8");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "G21 G54 G91");
                                        }
                                    }
                                }
                                {
                                    // panel-dro_1
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel_dro_1 = obj;
                                    lv_obj_set_pos(obj, -5, 52);
                                    lv_obj_set_size(obj, 274, 189);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    add_style_panels(obj);
                                    lv_obj_set_style_pad_top(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_row(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_column(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_right(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_left(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_bottom(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj4 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 29), 19);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj5 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 30), 23);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj6 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 31), 27);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj7 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 32), 31);
                                        }
                                    }
                                }
                            }
                        }
                        {
                            // tabe2
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Step size");
                            objects.tabe2 = obj;
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -93, -41);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Z:");
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -103, -169);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Feed \nrate:");
                                }
                                {
                                    // feedrate
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    objects.feedrate = obj;
                                    lv_obj_set_pos(obj, 61, 16);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "10000");
                                    lv_textarea_set_placeholder_text(obj, "100");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                }
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -101, -100);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "XY:");
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 61, 123);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "0.991");
                                    lv_textarea_set_placeholder_text(obj, "0.991");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                                {
                                    lv_obj_t *obj = lv_textarea_create(parent_obj);
                                    lv_obj_set_pos(obj, 61, 69);
                                    lv_obj_set_size(obj, 70, 42);
                                    lv_textarea_set_max_length(obj, 128);
                                    lv_textarea_set_text(obj, "0.991");
                                    lv_textarea_set_placeholder_text(obj, "0.991");
                                    lv_textarea_set_one_line(obj, true);
                                    lv_textarea_set_password_mode(obj, false);
                                }
                            }
                        }
                        {
                            // tabe3
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Job");
                            objects.tabe3 = obj;
                        }
                        {
                            // tabe4
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Wifi");
                            objects.tabe4 = obj;
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, -84, -164);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_panel_label(obj);
                                    lv_label_set_text(obj, "Wifi: ON");
                                }
                                {
                                    lv_obj_t *obj = lv_switch_create(parent_obj);
                                    lv_obj_set_pos(obj, 199, 6);
                                    lv_obj_set_size(obj, 70, 30);
                                }
                                {
                                    lv_obj_t *obj = lv_list_create(parent_obj);
                                    objects.obj32 = obj;
                                    lv_obj_set_pos(obj, -13, 50);
                                    lv_obj_set_size(obj, 281, 253);
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff353d41), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    lv_obj_t *obj = lv_checkbox_create(parent_obj);
                                    objects.obj33 = obj;
                                    lv_obj_set_pos(obj, 9, 311);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_checkbox_set_text(obj, "Auto-connect");
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff2fadf7), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                                }
                            }
                        }
                        {
                            // tabe5
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Settings");
                            objects.tabe5 = obj;
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, 100, 50);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "Button");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        {
            // right
            lv_obj_t *obj = lv_tabview_create(parent_obj);
            objects.right = obj;
            lv_obj_set_pos(obj, 405, 5);
            lv_obj_set_size(obj, 395, 410);
            lv_tabview_set_tab_bar_position(obj, LV_DIR_RIGHT);
            lv_tabview_set_tab_bar_size(obj, 100);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_tabview_get_tab_bar(parent_obj);
                    add_style_tab_bar(obj);
                }
                {
                    lv_obj_t *obj = lv_tabview_get_content(parent_obj);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    add_style_tab_content(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Move");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_buttonmatrix_create(parent_obj);
                                    objects.obj34 = obj;
                                    lv_obj_set_pos(obj, -10, -13);
                                    lv_obj_set_size(obj, 271, 395);
                                    static const char *map[15] = {
                                        "Btn",
                                        "Y+",
                                        "Btn",
                                        "\n",
                                        "X-",
                                        " ",
                                        "X+",
                                        "\n",
                                        "Btn",
                                        "Y-",
                                        "Btn",
                                        "\n",
                                        "Z-",
                                        "Z+",
                                        NULL,
                                    };
                                    static lv_buttonmatrix_ctrl_t ctrl_map[11] = {
                                        1,
                                        1,
                                        1,
                                        1,
                                        1 | LV_BUTTONMATRIX_CTRL_HIDDEN,
                                        1,
                                        1,
                                        1,
                                        1,
                                        1,
                                        1,
                                    };
                                    lv_buttonmatrix_set_map(obj, map);
                                    lv_buttonmatrix_set_ctrl_map(obj, ctrl_map);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_24, LV_PART_ITEMS | LV_STATE_DEFAULT);
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff353d41), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_top(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_bottom(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_left(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_right(obj, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    lv_obj_set_pos(obj, 2, 30);
                                    lv_obj_set_size(obj, 247, 352);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
                                    add_style_panels(obj);
                                    lv_obj_set_style_layout(obj, LV_LAYOUT_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Button");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 86);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "X-");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 172);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Button");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 81, 0);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Y+");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 81, 172);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Y-");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 159, 0);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Button");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 159, 86);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "X+");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 159, 172);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Button");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 258);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Z-");
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_button_create(parent_obj);
                                            lv_obj_set_pos(obj, 159, 258);
                                            lv_obj_set_size(obj, 70, 80);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_label_set_text(obj, "Z+");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        {
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Tab");
                        }
                        {
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "Tab");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // state_2
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    objects.state_2 = obj;
                                    lv_obj_set_pos(obj, 76, -17);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    add_style_label_big(obj);
                                    lv_label_set_text(obj, "state");
                                }
                                {
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    lv_obj_set_pos(obj, -5, 309);
                                    lv_obj_set_size(obj, 274, 73);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    add_style_panels(obj);
                                    lv_obj_set_style_pad_top(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_bottom(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_left(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_right(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_row(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_column(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_flex_cross_place(obj, LV_FLEX_ALIGN_START, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_flex_flow(obj, LV_FLEX_FLOW_COLUMN_WRAP, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "FRO: 100%   ");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "SRO: 100%");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "Job: 99%");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "F1000 S24000");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "M3 M7 M8");
                                        }
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            add_style_labels(obj);
                                            lv_label_set_text(obj, "G21 G54 G91");
                                        }
                                    }
                                }
                                {
                                    // panel-dro_2
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel_dro_2 = obj;
                                    lv_obj_set_pos(obj, -8, 26);
                                    lv_obj_set_size(obj, 274, 278);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    add_style_panels(obj);
                                    lv_obj_set_style_pad_top(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_row(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_column(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_right(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_left(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_pad_bottom(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj8 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 86), 35);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj9 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 87), 39);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj10 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 88), 43);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj11 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 89), 47);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj12 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 90), 51);
                                        }
                                        {
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.obj13 = obj;
                                            lv_obj_set_pos(obj, 124, 72);
                                            lv_obj_set_size(obj, 260, 44);
                                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            create_user_widget_dro(obj, getFlowState(flowState, 91), 55);
                                        }
                                    }
                                }
                            }
                        }
                        {
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "1");
                        }
                        {
                            lv_obj_t *obj = lv_tabview_add_tab(lv_obj_get_parent(parent_obj), "h");
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_button_create(parent_obj);
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, 100, 50);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_label_set_text(obj, "Button");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    tick_screen_main();
}

void delete_screen_main() {
    lv_obj_delete(objects.main);
    objects.main = 0;
    objects.bottom_panel1 = 0;
    objects.obj26 = 0;
    objects.obj27 = 0;
    objects.obj28 = 0;
    objects.obj29 = 0;
    objects.obj30 = 0;
    objects.obj31 = 0;
    objects.left = 0;
    objects.baraa = 0;
    objects.contaa = 0;
    objects.tabe1 = 0;
    objects.state_1 = 0;
    objects.panel_dro_1 = 0;
    objects.obj4 = 0;
    objects.obj5 = 0;
    objects.obj6 = 0;
    objects.obj7 = 0;
    objects.tabe2 = 0;
    objects.feedrate = 0;
    objects.tabe3 = 0;
    objects.tabe4 = 0;
    objects.obj32 = 0;
    objects.obj33 = 0;
    objects.tabe5 = 0;
    objects.right = 0;
    objects.obj34 = 0;
    objects.state_2 = 0;
    objects.panel_dro_2 = 0;
    objects.obj8 = 0;
    objects.obj9 = 0;
    objects.obj10 = 0;
    objects.obj11 = 0;
    objects.obj12 = 0;
    objects.obj13 = 0;
    deletePageFlowState(1);
}

void tick_screen_main() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    tick_user_widget_dro(getFlowState(flowState, 29), 19);
    tick_user_widget_dro(getFlowState(flowState, 30), 23);
    tick_user_widget_dro(getFlowState(flowState, 31), 27);
    tick_user_widget_dro(getFlowState(flowState, 32), 31);
    tick_user_widget_dro(getFlowState(flowState, 86), 35);
    tick_user_widget_dro(getFlowState(flowState, 87), 39);
    tick_user_widget_dro(getFlowState(flowState, 88), 43);
    tick_user_widget_dro(getFlowState(flowState, 89), 47);
    tick_user_widget_dro(getFlowState(flowState, 90), 51);
    tick_user_widget_dro(getFlowState(flowState, 91), 55);
}

void create_user_widget_dro(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    (void)flowState;
    (void)startWidgetIndex;
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 225, 44);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_layout(obj, LV_LAYOUT_FLEX, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0xff25eb0a), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff13ff00), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // state_14
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 1] = obj;
                    lv_obj_set_pos(obj, 45, -1);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_label_big(obj);
                    lv_label_set_text(obj, "X:");
                }
                {
                    // state_15
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 2] = obj;
                    lv_obj_set_pos(obj, 85, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    add_style_label_big(obj);
                    lv_label_set_text(obj, "000.000");
                }
            }
        }
    }
}

void tick_user_widget_dro(void *flowState, int startWidgetIndex) {
    (void)flowState;
    (void)startWidgetIndex;
}


extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "pages", "main" };
static const char *object_names[] = { "pages", "main", "obj0", "obj0__obj0", "obj0__state_14", "obj0__state_15", "obj1", "obj1__obj0", "obj1__state_14", "obj1__state_15", "obj2", "obj2__obj0", "obj2__state_14", "obj2__state_15", "obj3", "obj3__obj0", "obj3__state_14", "obj3__state_15", "obj4", "obj4__obj0", "obj4__state_14", "obj4__state_15", "obj5", "obj5__obj0", "obj5__state_14", "obj5__state_15", "obj6", "obj6__obj0", "obj6__state_14", "obj6__state_15", "obj7", "obj7__obj0", "obj7__state_14", "obj7__state_15", "obj8", "obj8__obj0", "obj8__state_14", "obj8__state_15", "obj9", "obj9__obj0", "obj9__state_14", "obj9__state_15", "obj10", "obj10__obj0", "obj10__state_14", "obj10__state_15", "obj11", "obj11__obj0", "obj11__state_14", "obj11__state_15", "obj12", "obj12__obj0", "obj12__state_14", "obj12__state_15", "obj13", "obj13__obj0", "obj13__state_14", "obj13__state_15", "left_1", "baraa_1", "contaa_1", "obj14", "obj15", "obj16", "obj17", "obj18", "feedrate_1", "tabe2_1", "tabe3_1", "tabe4_1", "obj19", "obj20", "tabe5_1", "tabe1_1", "obj21", "state_4", "panel_dro_4", "obj22", "obj23", "obj24", "obj25", "bottom_panel1", "obj26", "obj27", "obj28", "obj29", "obj30", "obj31", "left", "baraa", "contaa", "tabe1", "state_1", "panel_dro_1", "tabe2", "feedrate", "tabe3", "tabe4", "obj32", "obj33", "tabe5", "right", "obj34", "state_2", "panel_dro_2" };
static const char *style_names[] = { "Panels", "Labels", "Label-Big", "Panel-Label", "Tab-Bar", "Tab-Content", "Bottom-Buttons" };


typedef void (*create_screen_func_t)();
create_screen_func_t create_screen_funcs[] = {
    create_screen_pages,
    create_screen_main,
};
void create_screen(int screen_index) {
    create_screen_funcs[screen_index]();
}
void create_screen_by_id(enum ScreensEnum screenId) {
    create_screen_funcs[screenId - 1]();
}

typedef void (*delete_screen_func_t)();
delete_screen_func_t delete_screen_funcs[] = {
    delete_screen_pages,
    delete_screen_main,
};
void delete_screen(int screen_index) {
    delete_screen_funcs[screen_index]();
}
void delete_screen_by_id(enum ScreensEnum screenId) {
    delete_screen_funcs[screenId - 1]();
}

typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_pages,
    tick_screen_main,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    eez_flow_init_styles(add_style, remove_style);
    
    eez_flow_init_screen_names(screen_names, sizeof(screen_names) / sizeof(const char *));
    eez_flow_init_object_names(object_names, sizeof(object_names) / sizeof(const char *));
    eez_flow_init_style_names(style_names, sizeof(style_names) / sizeof(const char *));
    
    eez_flow_set_create_screen_func(create_screen);
    eez_flow_set_delete_screen_func(delete_screen);
    
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_pages();
    create_screen_main();
}
