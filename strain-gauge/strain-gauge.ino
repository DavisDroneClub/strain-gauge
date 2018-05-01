/**
 * Davis Drone Club Strain Gauge v0.0
 * Testing firmware
 * 
 * HX711 library can be downloaded here: https://github.com/bogde/HX711
 */

#include "HX711.h"

HX711 scale(A1,A0);

void setup() {
  Serial.begin(38400);
  
  scale.set_scale(2280.f);
}

void loop() {
  Serial.println(scale.read());
}
