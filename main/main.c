#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "terminal";

void app_main(void)
{
    ESP_LOGI(TAG, "Meshtastic M5Stack Terminal - ESP-IDF scaffold");
    ESP_LOGW(TAG, "Radio, keyboard, display and Meshtastic not implemented");
    while (true) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
