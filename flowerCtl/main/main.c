#include "freertos/FreeRTOS.h"

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <esp_log.h>

#include "adcMeasurement.h"
#include "../../coreSNTP/source/include/core_sntp_client.h"

struct HumidityMeas
{
	// success info
	// timestamp
	// GPIO pin
	// value
};

bool UpdateTimeFromNTP()
{


	return true;
}

void EnterDeepSleep()
{


	return;
}

void HumidityMeasTask()
{
	const static char *TAG = "HumidityMeasTask";



	return;
}

void WiFiTask()
{
	const static char *TAG = "WiFiTask";



	return;
}

void app_main(void)
{
	const static char *TAG = "main";
	ESP_LOGI(TAG, "app_main started");

    while (true) {
        printf("Hello from app_main!\n");
        sleep(1);
    }
}
