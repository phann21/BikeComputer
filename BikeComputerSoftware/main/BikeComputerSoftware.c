#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"

#include "driver/i2c_master.h"

void app_main(void)
{
    char *ourTaskName = pcTaskGetName(NULL);
    ESP_LOGI(ourTaskName, "Hello, Starting up!\n");

    while (1){
        ESP_LOGI(ourTaskName, "Ha got eem!\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
