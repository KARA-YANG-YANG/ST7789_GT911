idf_component_register(SRCS "spi_lcd_touch_example_main.c"
                       INCLUDE_DIRS "." 
                       REQUIRES "lvgl" "ui2" "esp_lcd" "esp_lvgl_port" "espressif__esp_lcd_touch" "espressif__esp_lcd_touch_gt911" "led_strip"
                       # "../components/ui2"
                       )
