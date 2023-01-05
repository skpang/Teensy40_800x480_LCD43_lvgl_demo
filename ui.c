// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLINE_ssd1963_43_800x480_demo

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Screen1_Button1;
lv_obj_t *ui_Screen1_Button2;
lv_obj_t *ui_Screen1_Button3;
lv_obj_t *ui_Screen1_Label1;
lv_obj_t *ui_Screen1_Label2;
lv_obj_t *ui_Screen1_Image1;
lv_obj_t *ui_Screen1_Arc1;
lv_obj_t *ui_Screen1_Colorwheel1;
lv_obj_t *ui_Screen1_Slider1;
lv_obj_t *ui_Screen1_Switch1;
lv_obj_t *ui_Screen1_Switch2;
lv_obj_t *ui_Screen1_Checkbox1;
lv_obj_t *ui_Screen1_Checkbox2;
lv_obj_t *ui_Screen1_Button4;
lv_obj_t *ui_Screen1_Button5;
lv_obj_t *ui_Screen1_Label3;
lv_obj_t *ui_Screen1_Label4;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Button1 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button1, 100);
lv_obj_set_height( ui_Screen1_Button1, 50);
lv_obj_set_x( ui_Screen1_Button1, 324 );
lv_obj_set_y( ui_Screen1_Button1, 27 );
lv_obj_set_align( ui_Screen1_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Button1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Button2 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button2, 100);
lv_obj_set_height( ui_Screen1_Button2, 50);
lv_obj_set_x( ui_Screen1_Button2, 326 );
lv_obj_set_y( ui_Screen1_Button2, 102 );
lv_obj_set_align( ui_Screen1_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Button2, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Button3 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button3, 100);
lv_obj_set_height( ui_Screen1_Button3, 50);
lv_obj_set_x( ui_Screen1_Button3, 325 );
lv_obj_set_y( ui_Screen1_Button3, 176 );
lv_obj_set_align( ui_Screen1_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1_Button3, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1_Button3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label1 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label1, 87 );
lv_obj_set_y( ui_Screen1_Label1, -198 );
lv_obj_set_align( ui_Screen1_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label1,"www.skpang.co.uk");

ui_Screen1_Label2 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label2, -89 );
lv_obj_set_y( ui_Screen1_Label2, -170 );
lv_obj_set_align( ui_Screen1_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label2,"Teensy 4.0 with \n4.3\" 800x480 LCD Demo");
lv_obj_set_style_text_font(ui_Screen1_Label2, &lv_font_montserrat_46, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Screen1_Image1, &ui_img_compass_inverted_png);
lv_obj_set_width( ui_Screen1_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Image1, -277 );
lv_obj_set_y( ui_Screen1_Image1, 118 );
lv_obj_set_align( ui_Screen1_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Screen1_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Arc1 = lv_arc_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Arc1, 150);
lv_obj_set_height( ui_Screen1_Arc1, 150);
lv_obj_set_x( ui_Screen1_Arc1, -83 );
lv_obj_set_y( ui_Screen1_Arc1, 114 );
lv_obj_set_align( ui_Screen1_Arc1, LV_ALIGN_CENTER );

ui_Screen1_Colorwheel1 = lv_colorwheel_create(ui_Screen1,true);
lv_obj_set_width( ui_Screen1_Colorwheel1, 150);
lv_obj_set_height( ui_Screen1_Colorwheel1, 150);
lv_obj_set_x( ui_Screen1_Colorwheel1, 117 );
lv_obj_set_y( ui_Screen1_Colorwheel1, 113 );
lv_obj_set_align( ui_Screen1_Colorwheel1, LV_ALIGN_CENTER );

ui_Screen1_Slider1 = lv_slider_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Slider1, 240);
lv_obj_set_height( ui_Screen1_Slider1, 34);
lv_obj_set_x( ui_Screen1_Slider1, -238 );
lv_obj_set_y( ui_Screen1_Slider1, -40 );
lv_obj_set_align( ui_Screen1_Slider1, LV_ALIGN_CENTER );

ui_Screen1_Switch1 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Switch1, 84);
lv_obj_set_height( ui_Screen1_Switch1, 39);
lv_obj_set_x( ui_Screen1_Switch1, 134 );
lv_obj_set_y( ui_Screen1_Switch1, -15 );
lv_obj_set_align( ui_Screen1_Switch1, LV_ALIGN_CENTER );

ui_Screen1_Switch2 = lv_switch_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Switch2, 84);
lv_obj_set_height( ui_Screen1_Switch2, 39);
lv_obj_set_x( ui_Screen1_Switch2, 137 );
lv_obj_set_y( ui_Screen1_Switch2, -84 );
lv_obj_set_align( ui_Screen1_Switch2, LV_ALIGN_CENTER );

ui_Screen1_Checkbox1 = lv_checkbox_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Checkbox1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Checkbox1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Checkbox1, -25 );
lv_obj_set_y( ui_Screen1_Checkbox1, -82 );
lv_obj_set_align( ui_Screen1_Checkbox1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags

ui_Screen1_Checkbox2 = lv_checkbox_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Checkbox2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Checkbox2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Checkbox2, -26 );
lv_obj_set_y( ui_Screen1_Checkbox2, -23 );
lv_obj_set_align( ui_Screen1_Checkbox2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Checkbox2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags

ui_Screen1_Button4 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button4, 100);
lv_obj_set_height( ui_Screen1_Button4, 50);
lv_obj_set_x( ui_Screen1_Button4, 323 );
lv_obj_set_y( ui_Screen1_Button4, -158 );
lv_obj_set_align( ui_Screen1_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Button5 = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Button5, 100);
lv_obj_set_height( ui_Screen1_Button5, 50);
lv_obj_set_x( ui_Screen1_Button5, 324 );
lv_obj_set_y( ui_Screen1_Button5, -83 );
lv_obj_set_align( ui_Screen1_Button5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Screen1_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Screen1_Button5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Screen1_Label3 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label3, 324 );
lv_obj_set_y( ui_Screen1_Label3, -156 );
lv_obj_set_align( ui_Screen1_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label3,"START");
lv_obj_set_style_text_font(ui_Screen1_Label3, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Screen1_Label4 = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_Screen1_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Screen1_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Screen1_Label4, 324 );
lv_obj_set_y( ui_Screen1_Label4, -74 );
lv_obj_set_align( ui_Screen1_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Screen1_Label4,"STOP\n");
lv_obj_set_style_text_font(ui_Screen1_Label4, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

}

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
lv_disp_load_scr( ui_Screen1);
}
