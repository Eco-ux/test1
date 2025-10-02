#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

// LED ở GPIO2 (có thể thay đổi theo board)
LED led(LED_PIN, LED_ACT);

// Button ở GPIO21
OneButton button(21, true);  // true = sử dụng internal pull-up (active low)

void btnPush();
void btnDouble();

void setup()
{
    led.off();

    // Single click: bật/tắt LED
    button.attachClick(btnPush);

    // Double click: bật/tắt chế độ nhấp nháy
    button.attachDoubleClick(btnDouble);
}

void loop()
{
    led.loop();     // duy trì trạng thái LED (đặc biệt là blink)
    button.tick();  // kiểm tra nút
}

void btnPush()
{
    led.flip();   // đổi trạng thái LED
}

void btnDouble()
{
    led.blink(200);  // bật chế độ nhấp nháy với chu kỳ 200ms
}
