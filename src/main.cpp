#include <Arduino.h>

void setup() {
  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, 0);
  delay(500);
  digitalWrite(5,1);
  delay(500);

}
