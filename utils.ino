#include "utils.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  print("Uptime:", uptime());

  delay(1000);
}
