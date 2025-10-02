# OneButton LED Demo

## Giới thiệu
Dự án sử dụng thư viện **OneButton** để điều khiển LED bằng nút nhấn:
- Single click: Bật/tắt LED.
- Double click: Bật/tắt chế độ nhấp nháy LED.

## Phần cứng
- ESP32 Devkit v1
- 1 LED nối ngoài + điện trở 1kΩ (chân D5/GPIO5)
- 1 nút nhấn nối vào chân D21 (GPIO21)

## Cách chạy
1. Mở project bằng PlatformIO (VS Code).
2. Build và upload code.
3. Thao tác với nút nhấn:
   - Nhấn 1 lần: LED bật/tắt.
   - Nhấn 2 lần: LED nhấp nháy.

