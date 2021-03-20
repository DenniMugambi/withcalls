/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#ifndef __CONSOLE_UART_H__
#define __CONSOLE_UART_H__
#include "driver/uart.h"
#include "freertos/xtensa_api.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "esp_log.h"
#include "app_hf_msg_prs.h"

#define TAG_CNSL "CNSL"

/**
 * @brief     configure uart console for command input and process
 */
esp_err_t console_uart_init(void);

#endif /* __BT_APP_HF_H__*/
