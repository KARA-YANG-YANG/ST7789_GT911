| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-C5 | ESP32-C6 | ESP32-C61 | ESP32-H2 | ESP32-P4 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- | --------- | -------- | -------- | -------- | -------- |

### Hardware Required

* An ESP32-S3 development board
* An st7789 LCD panel, with SPI interface （2.8 INCH,240RGBx320）
* A touch panel with I2C interface(such as gt911)
* An USB cable for power supply and programming

### Hardware Connection

The connection between ESP Board and the LCD is as follows:

```
       ESP Board                      ST7789 Panel + TOUCH(GT911)
┌──────────────────────┐              ┌────────────────────┐
│             GND      ├─────────────►│ GND                │
│                      │              │                    │
│             3V3      ├─────────────►│ VCC                │
│                      │              │                    │
│             PCLK     ├─────────────►│ SCL                │
│                      │              │                    │
│             MOSI     ├─────────────►│ MOSI               │
│                      │              │                    │
│             MISO     |◄─────────────┤ MISO               │
│                      │              │                    │
│             RST      ├─────────────►│ RES                │
│                      │              │                    │
│             DC       ├─────────────►│ DC                 │
│                      │              │                    │
│             LCD CS   ├─────────────►│ LCD CS             │
│                      │              │                    │
│             TOUCH CS ├─────────────►│ TOUCH CS           │
│                      │              │                    │
│             BK_LIGHT ├─────────────►│ BLK                │
└──────────────────────┘              └────────────────────┘


### Introduction

* 两个图片分别在两个屏幕界面上显示，一个是显示猫咪拿平底锅，一个是显示海贼王索隆
* 点击第一个界面的NEXT SCREEN按钮，切换到第二个界面，显示海贼王索隆（拉高GPIO13，可以点灯）
* 点击第二个界面的HOME按钮，切换到第一个界面，显示猫咪拿平底锅（拉低GPIO13，可以灭灯）

### PIN脚定义

 #define EXAMPLE_LCD_GPIO_SCLK       (GPIO_NUM_39)
 #define EXAMPLE_LCD_GPIO_MOSI       (GPIO_NUM_41)
 #define EXAMPLE_LCD_GPIO_RST        (GPIO_NUM_18)
 #define EXAMPLE_LCD_GPIO_DC         (GPIO_NUM_42)
 #define EXAMPLE_LCD_GPIO_CS         (GPIO_NUM_45)
 #define EXAMPLE_LCD_GPIO_BL         (GPIO_NUM_1)
 
 
 #define EXAMPLE_TOUCH_I2C_SCL       (GPIO_NUM_20)
 #define EXAMPLE_TOUCH_I2C_SDA       (GPIO_NUM_21)
 #define EXAMPLE_TOUCH_GPIO_INT      (GPIO_NUM_3)
 
WS2812B RGB  GPIO38 
GPIO13  LED 