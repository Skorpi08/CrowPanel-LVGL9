#include <lgfx.h>
#include <eez-framework.h> // for eez-framwork only
#include "ui/ui.h"
#include "ui/screens.h"



void setup() {
  Serial.begin(9600);
  lcd.setup();
  ui_init();
  //lv_tabview_rename_tab(lv_obj_get_parent(objects.baraa), 1, LV_SYMBOL_KEYBOARD);
}

void loop() {
  //  ui_tick();
  // lv_timer_handler();
  // delay(5);

  lv_task_handler();
  ui_tick();
  vTaskDelay(10);

}


