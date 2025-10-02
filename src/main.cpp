#include <Arduino.h>
#include <OneButton.h>

#define LED_PIN 5
#define BTN_PIN 4

OneButton button(BTN_PIN, true);

bool ledState = false;
bool blinkMode = false;

void toggleLED() {
  if (!blinkMode) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }
}

void startBlink() {
  blinkMode = !blinkMode;
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  button.attachClick(toggleLED);        // single click
  button.attachDoubleClick(startBlink); // double click
}

void loop() {
  button.tick();
  if (blinkMode) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  }
}
