// Big OLED Display with Arduino/ESP23 - SSD1322 256x64px OLED Display

// created by upir, 2026
// youtube channel: https://www.youtube.com/upir_upir

// YouTube Video: https://youtu.be/EEmuondHHyY
// Source Files: https://github.com/upiir/ssd1322_256x64px_oled_display_arduino

// Links from the video:
// Do you like this video? You can buy me a coffee ☕: https://www.buymeacoffee.com/upir
// 256x64px OLED Display 3.12": https://s.click.aliexpress.com/e/_c2IKpRhp
// 256x64px OLED Display 2.8": https://s.click.aliexpress.com/e/_c4ahwmd5
// Arduino UNO: https://s.click.aliexpress.com/e/_c334TezN
// Seeed Studio XIAO ESP32S3: https://s.click.aliexpress.com/e/_c355j8YF
// Jumper Wires: https://s.click.aliexpress.com/e/_c3CysmWr
// Photopea (online graphics editor like Photoshop): https://www.photopea.com/
// u8g2 initialization: https://github.com/olikraus/u8g2/wiki/u8g2setupcpp#ssd1322-nhd_256x64
// u8g2 16bit mode: https://github.com/olikraus/u8g2/blob/master/doc/faq.txt#L159
// image2cpp (convert images to c-style array): https://javl.github.io/image2cpp/
// my soldering iron (GVDA GD300): https://s.click.aliexpress.com/e/_c4V9DgRt

// Related videos:
// Arduino + OLED displays: https://www.youtube.com/playlist?list=PLjQRaMdk7pBZ1UV3IL5ol8Qc7R9k-kwXA
// Arduino Tire Pressure TPMS: https://youtu.be/P85tkCbQGo8
// Arduino Parking Sensor Tutorial: https://youtu.be/gg08H-6Z1Lo
// Car VFD Gauges: https://youtu.be/Frq_JP1lalE


#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include "images.h"

// Uncomment this line is you are using Arduino UNO
// U8G2_SSD1322_NHD_256X64_1_4W_HW_SPI u8g2(U8G2_R0, /*cs*/ 10 , /*dc*/ 9, /*reset*/ 8);
// Uncomment this line if you are using Seeed XIAO ESP32S3
U8G2_SSD1322_NHD_256X64_F_4W_HW_SPI u8g2(U8G2_R0, /*cs*/ D7 , /*dc*/ D1, /*reset*/ D0);

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.clearBuffer();					// clear the internal memory
  u8g2.drawXBMP( 0, 0, 256, 64, epd_bitmap_256x64px_two_car_screens); // draw fullscreen image
  u8g2.sendBuffer();					// transfer internal memory to the display
  delay(1000);  
}

