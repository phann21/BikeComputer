#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include "driver/i2c_master.h"

static const i2c_port_num_t i2c_port = 0;
static const gpio_num_t i2c_sda_pin = 21;
static const gpio_num_t i2c_scl_pin = 22;
static const uint8_t i2c_glitch_ignore_cnt = 7;
//static const uint16_t display_addr = 0x78;
// static const uint32_t sleep_time_ms = 1000;


void app_main(void)
{
    i2c_master_bus_handle_t i2c_bus = NULL;
    //i2c_master_dev_handle_t ssd1306dev;

    i2c_master_bus_config_t bus_config = {
        .clk_source = I2C_CLK_SRC_DEFAULT,
        .glitch_ignore_cnt = i2c_glitch_ignore_cnt,
        .i2c_port = i2c_port,
        .sda_io_num = i2c_sda_pin,
        .scl_io_num = i2c_scl_pin,
        .flags.enable_internal_pullup = true
    };
    ESP_ERROR_CHECK(i2c_new_master_bus(&bus_config, &i2c_bus));
}
