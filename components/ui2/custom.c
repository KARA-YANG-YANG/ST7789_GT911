/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"


/**
 * Create a demo application
 */

/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */
// #include <stdio.h>

#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"


// GPIO assignment

#define LED_GPIO (GPIO_NUM_13)
static const char *TAG = "LED";

 
void configure_led(void)
{
        ESP_LOGI(TAG, "Example configured to blink GPIO LED!");
        gpio_reset_pin(LED_GPIO);
        /* Set the GPIO as a push/pull output */
        gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);
        printf("config_led is finished");
}
void led_state_on_off(uint8_t s_led_state)
{
        /* Set the GPIO level according to the state (LOW or HIGH)*/
        gpio_set_level(LED_GPIO, s_led_state);
}

void custom_init(lv_ui *ui)
{
    /* Add your codes here */

}