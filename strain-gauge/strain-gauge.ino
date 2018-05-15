/**
 * Davis Drone Club Strain Gauge v0.0
 * Testing firmware
 * 
 * HX711 library can be downloaded here: https://github.com/bogde/HX711
 */

#include "HX711.h"

HX711 scale(A1,A0);

void setup() {
  Serial.begin(115200);
  Serial.println("Begin testing");
  scale.set_scale(826.1);
  scale.tare();
  //Serial.println("Place weight now");
  //delay(5000);
  //Serial.println("too late");
  //Serial.println((scale.get_units(10))/1050);
  //scale.tare();
}

void loop() {
  Serial.println(scale.get_units(),1);
}
