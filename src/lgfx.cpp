#include <lgfx.h>
#include <touch.h>

#define TFT_BL 2

LGFX lcd;

LGFX::LGFX(void) {
  {
    auto cfg = _bus_instance.config();
    cfg.panel = &_panel_instance;

    cfg.pin_d0 = GPIO_NUM_15; // B0
    cfg.pin_d1 = GPIO_NUM_7;  // B1
    cfg.pin_d2 = GPIO_NUM_6;  // B2
    cfg.pin_d3 = GPIO_NUM_5;  // B3
    cfg.pin_d4 = GPIO_NUM_4;  // B4

    cfg.pin_d5 = GPIO_NUM_9;  // G0
    cfg.pin_d6 = GPIO_NUM_46; // G1
    cfg.pin_d7 = GPIO_NUM_3;  // G2
    cfg.pin_d8 = GPIO_NUM_8;  // G3
    cfg.pin_d9 = GPIO_NUM_16; // G4
    cfg.pin_d10 = GPIO_NUM_1; // G5

    cfg.pin_d11 = GPIO_NUM_14; // R0
    cfg.pin_d12 = GPIO_NUM_21; // R1
    cfg.pin_d13 = GPIO_NUM_47; // R2
    cfg.pin_d14 = GPIO_NUM_48; // R3
    cfg.pin_d15 = GPIO_NUM_45; // R4

    cfg.pin_henable = GPIO_NUM_41;
    cfg.pin_vsync = GPIO_NUM_40;
    cfg.pin_hsync = GPIO_NUM_39;
    cfg.pin_pclk = GPIO_NUM_0;
    cfg.freq_write = 15000000;

    cfg.hsync_polarity = 0;
    cfg.hsync_front_porch = 40;
    cfg.hsync_pulse_width = 48;
    cfg.hsync_back_porch = 40;

    cfg.vsync_polarity = 0;
    cfg.vsync_front_porch = 1;
    cfg.vsync_pulse_width = 31;
    cfg.vsync_back_porch = 13;

    cfg.pclk_active_neg = 1;
    cfg.de_idle_high = 0;
    cfg.pclk_idle_high = 0;

    _bus_instance.config(cfg);
  }
  {
    auto cfg = _panel_instance.config();
    cfg.memory_width = 800;
    cfg.memory_height = 480;
    cfg.panel_width = 800;
    cfg.panel_height = 480;
    cfg.offset_x = 0;
    cfg.offset_y = 0;
    _panel_instance.config(cfg);
  }
  _panel_instance.setBus(&_bus_instance);
  setPanel(&_panel_instance);
}

// Display flushing
void my_display_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);
  lv_draw_sw_rgb565_swap(color_p, w*h);
  lcd.pushImageDMA<uint16_t>(area->x1, area->y1, w, h, (uint16_t *)color_p);
  // lcd.pushImageDMA(area->x1, area->y1, w, h, (lgfx::rgb565_t *)&color_p->full);
  lv_display_flush_ready(disp);
}

uint32_t my_tick_function() {
  return (esp_timer_get_time() / 1000LL);
}

//void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
void my_touchpad_read(lv_indev_t * drv, lv_indev_data_t * data) {
  if (touch_has_signal()) {
    if (touch_touched()) {
      // Update the coordinates for LVGL
      data->state = LV_INDEV_STATE_PR;
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;

      // Print touched coordinates
      // Serial.print("Touched at X: ");
      // Serial.print(data->point.x);
      // Serial.print(", Y: ");
      // Serial.print(data->point.y);
      // Serial.print("\n");
    } else if (touch_released()) {
      data->state = LV_INDEV_STATE_REL;
    }
  } else {
    data->state = LV_INDEV_STATE_REL;
  }
  delay(10);
}


void LGFX::setup() {
  // Initialise the display for LGFX
  this->begin();
  this->fillScreen(TFT_BLACK);
  this->setTextSize(2);
  screenWidth = this->width();
  screenHeight = this->height();

  // LVGL v9 Initialisierung
  lv_init();
  //lv_tick_set_cb(my_tick_function);
  lv_tick_set_cb(xTaskGetTickCount);
  lv_display_t *display = lv_display_create(screenWidth, screenHeight);
  lv_display_set_flush_cb(display, my_display_flush);
  lv_display_set_buffers(display, disp_draw_buf, nullptr, sizeof(disp_draw_buf), LV_DISPLAY_RENDER_MODE_PARTIAL);
  //lv_display_set_buffers(display, buf1, buf2, (screenWidth * screenHeight) / 6, LV_DISPLAY_RENDER_MODE_PARTIAL);
  lv_display_set_resolution(display, screenWidth, screenHeight);
  lv_display_set_physical_resolution(display, screenWidth, screenHeight);

  touch_init();
  lv_indev_t *indev = lv_indev_create();
  lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
  lv_indev_set_read_cb(indev, my_touchpad_read);

  ledcSetup(1, 300, 8);
  ledcAttachPin(TFT_BL, 1);
  ledcWrite(1, 255); // Screen brightness can be modified

  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, LOW);
  delay(500);
  digitalWrite(TFT_BL, HIGH);

}
