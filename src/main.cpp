#include <Arduino.h>
#include <OneButton.h>

// LED1 trên board (GPIO2)
#define LED1_PIN 2
// LED2 ngoài (GPIO5)
#define LED2_PIN 5
// Button (GPIO21)
#define BTN_PIN 21

OneButton button(BTN_PIN, true); // true: active low

int currentLed = LED1_PIN;   // LED đang được điều khiển
bool ledState = false;
bool blinkMode = false;

void onSingleClick();   // bật/tắt LED
void onDoubleClick();   // đổi LED điều khiển
void onLongPress();     // nhấp nháy LED

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);

  button.attachClick(onSingleClick);
  button.attachDoubleClick(onDoubleClick);
  button.attachLongPressStart(onLongPress);
}

void loop() {
  button.tick();

  if (blinkMode) {
    digitalWrite(currentLed, HIGH);
    delay(200);
    digitalWrite(currentLed, LOW);
    delay(200);
  }
}

void onSingleClick() {
  if (!blinkMode) {
    ledState = !ledState;
    digitalWrite(currentLed, ledState);
  }
}

void onDoubleClick() {
  // chuyển LED điều khiển
  if (currentLed == LED1_PIN) {
    currentLed = LED2_PIN;
  } else {
    currentLed = LED1_PIN;
  }
  blinkMode = false; // reset chế độ nhấp nháy khi đổi LED
}

void onLongPress() {
  blinkMode = !blinkMode; // bật/tắt chế độ blink
}
