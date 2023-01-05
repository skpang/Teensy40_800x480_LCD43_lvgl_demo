
#include <Arduino.h>
#include "skp_lvgl.h"
#include <lvgl.h>
#include <Wire.h>

#include <Adafruit_FT6206.h>

#include "ui.h"
#include "ui_helpers.h"
#include "SSD1963.h"

Adafruit_FT6206 ts = Adafruit_FT6206();

int oldTouchX = 0;
int oldTouchY = 0;

static const uint16_t screenWidth  = 800;  //800x480
static const uint16_t screenHeight = 480;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * 10 ];

extern SSD1963 lcd;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{ 
   uint16_t width = (area->x2 - area->x1 +1);
   uint16_t height = (area->y2 - area->y1+1);
 
   lcd.writeRect(area->x1, area->y1, width, height, (uint16_t *)color_p);
   lv_disp_flush_ready(disp); /* tell lvgl that flushing is done */
}

bool my_touchpad_read(lv_indev_t * indev, lv_indev_data_t * data)
{
    uint16_t touchX, touchY;
  
    if (ts.touched())
    {   
        // Retrieve a point  
        TS_Point p = ts.getPoint(); 
        touchX = p.x;
        touchY = p.y;
  
        if ((touchX != oldTouchX) || (touchY != oldTouchY))
         {
              Serial.print("x= ");
              Serial.print(touchX,DEC);
              Serial.print(" y= ");
              Serial.println(touchY,DEC);
              
              oldTouchY = touchY;
              oldTouchX = touchX;
              data->state = LV_INDEV_STATE_PR; 
              data->point.x = touchX;
              data->point.y = touchY;
         
         }
    }else
    {
        data->point.x = oldTouchX;
        data->point.y = oldTouchY;
        data->state =LV_INDEV_STATE_REL;
     }
           
    return 0;
}


void skp_lvgl_init(void)
{
   Serial.println("lvgl init");
   if (!ts.begin(40)) { 
      Serial.println("Unable to start touchscreen.");
    } 
    else { 
        Serial.println("Touchscreen started."); 
    }
    
    lv_init();
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
   
    disp_drv.rotated = LV_DISP_ROT_180;
    disp_drv.sw_rotate = 1;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register( &indev_drv );
 
    Serial.println("lvgl init done");
    
    ui_init();
  
}
