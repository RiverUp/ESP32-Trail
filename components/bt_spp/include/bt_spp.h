#ifndef __BT_SPP_H
#define __BT_SPP_H


#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_bt.h"
#include "esp_bt_main.h"
#include "esp_gap_bt_api.h"
#include "esp_bt_device.h"
#include "esp_spp_api.h"

#include "time.h"
#include "sys/time.h"

#define SPP_TAG "SPP_ACCEPTOR_DEMO"
#define SPP_SERVER_NAME "SPP_SERVER"
#define EXAMPLE_DEVICE_NAME "ESP_SPP_ACCEPTOR"
#define SPP_SHOW_DATA 0
#define SPP_SHOW_SPEED 1
#define SPP_SHOW_MODE SPP_SHOW_DATA    /*Choose show mode: show data or speed*/

extern const esp_spp_mode_t esp_spp_mode;
extern const bool esp_spp_enable_l2cap_ertm;

extern struct timeval time_new, time_old;
extern long data_num;

extern const esp_spp_sec_t sec_mask;
extern const esp_spp_role_t role_slave;


char *bda2str(uint8_t * bda, char *str, size_t size);
void print_speed(void);
void esp_spp_cb(esp_spp_cb_event_t event, esp_spp_cb_param_t *param);
void esp_bt_gap_cb(esp_bt_gap_cb_event_t event, esp_bt_gap_cb_param_t *param);


#endif 