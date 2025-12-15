#include <Arduino.h>
#include "esp_camera.h"
#include "camera_pins.h"
#include "wifi_manager.h"
#include "motion.h"
#include "espnow.h"
#include "power.h"

void setup() {
  Serial.begin(115200);
  if(!initWiFi()) startCaptivePortal();
  initESPNOW();
  esp_camera_init(&getCameraConfig());
}

void loop() {
  if (motionDetected()) captureAndSend();
  goToSleep();
}