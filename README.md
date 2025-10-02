# LED Control with OneButton

## Phần cứng
- ESP32 Devkit V1
- LED1: GPIO2 (onboard LED)
- LED2: GPIO5 (ngoài, nối điện trở 1k)
- Button: GPIO21 (nút nhấn, kéo xuống GND)

## Chức năng
- **Single click**: bật/tắt LED đang điều khiển.
- **Double click**: chuyển chế độ điều khiển giữa LED1 và LED2.
- **Long press**: bật/tắt chế độ nhấp nháy (200ms) cho LED hiện tại.

## Cách chạy
1. Nạp code bằng PlatformIO.
2. Kết nối phần cứng như sơ đồ.
3. Dùng button để điều khiển LED theo các chức năng trên.
