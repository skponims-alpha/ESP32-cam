#include <WiFiManager.h>
WiFiManager wm;
bool initWiFi(){ return wm.autoConnect("ESP32-CAM-SETUP"); }
void startCaptivePortal(){ wm.startConfigPortal("ESP32-CAM-SETUP"); }