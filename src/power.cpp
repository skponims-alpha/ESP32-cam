#include "power.h"
#include "esp_sleep.h"
void goToSleep(){
  esp_sleep_enable_timer_wakeup(60*1000000ULL);
  esp_deep_sleep_start();
}