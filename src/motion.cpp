#include "motion.h"
#include "esp_camera.h"
static uint32_t last=0;
bool motionDetected(){
  camera_fb_t *fb = esp_camera_fb_get();
  if(!fb) return false;
  uint32_t l=0;
  for(int i=0;i<fb->len;i+=10) l+=fb->buf[i];
  esp_camera_fb_return(fb);
  bool m = abs((int)l-(int)last)>25;
  last=l;
  return m;
}