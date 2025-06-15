#include <lvgl.h>
#include <LovyanGFX.hpp>
#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>
#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>

#ifndef _LGFX_H
#define _LGFX_H
class LGFX : public lgfx::LGFX_Device {
private:
  lgfx::Bus_RGB _bus_instance;
  lgfx::Panel_RGB _panel_instance;

  uint32_t screenWidth;
  uint32_t screenHeight;
  lv_color_t disp_draw_buf[800 * 480 / 15]; //25600
  // lv_color_t* buf1 = (lv_color_t*)heap_caps_aligned_alloc(32, (800 * 480 * 2) / 6, MALLOC_CAP_DMA); // 128000
  // lv_color_t* buf2 = (lv_color_t*)heap_caps_aligned_alloc(32, (800 * 480 * 2) / 6, MALLOC_CAP_DMA); // 128000

public:
  LGFX(void);

  void setup();
};

extern LGFX lcd;

#endif
