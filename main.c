#include <stdio.h>
#include "esp_log.h"

static const char *TAG = "Tonya";/*The static keyword limits the 
                                    symbol’s visibility to the current file, 
                                    while const ensures the string is stored 
                                    in read-only memory instead of consuming RAM.*/

int age = 59;
float height = 5.5;

/*The available macros are:

ESP_LOGE – Error
ESP_LOGW – Warning
ESP_LOGI – Info
ESP_LOGD – Debug
ESP_LOGV – Verbose*/

/*Each logging macro takes two main arguments:

Tag - the label under which the log will be grouped.
Message – a printf-style format string followed by variadic arguments.*/


void app_main(void)
{
    ESP_LOGI(TAG, "Hello world! This is an info log.");
    ESP_LOGW(TAG, "This is a warning log.");
    ESP_LOGE(TAG, "This is an error log.");
    ESP_LOGD(TAG, "This is a debug log.");
    ESP_LOGV(TAG, "This is a verbose log.");
    ESP_LOGI(TAG, "Age = %d, Height = %.1f\n", age, height);
}
/*I (273) Tonya: Hello world! This is an info log.
W (273) Tonya: This is a warning log.
E (273) Tonya: This is an error log.
I (273) Tonya: Age = 59, Height = 5.5*/