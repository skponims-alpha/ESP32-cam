#include "espnow.h"
#include <esp_now.h>
#include <WiFi.h>
void captureAndSend(){}
void initESPNOW(){
  WiFi.mode(WIFI_STA);
  esp_now_init();
}