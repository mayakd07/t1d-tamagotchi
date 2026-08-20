#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "cat.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  // display.drawBitmap(32, 0, epd_bitmap_IMG_4638, 64, 64, SSD1306_WHITE);
  // display.display();
}

void loop() {
  //idle
  for(int j = 0; j < 3; j++){
    for(int i = 0; i < blink_allArray_LEN; i++){
      display.clearDisplay(); 
      display.drawBitmap(32, 0, blink_allArray[i], 64, 64, SSD1306_WHITE); 
      display.display(); 
      delay(150); 
    }
    display.clearDisplay(); 
    display.drawBitmap(32, 0, idle1, 64, 64, SSD1306_WHITE); 
    display.display(); 
    delay(1500);
  }

  for(int i = 0; i < swish_allArray_LEN; i++){
    display.clearDisplay(); 
    display.drawBitmap(32, 0, swish_allArray[i], 64, 64, SSD1306_WHITE);
    display.display(); 
    delay(250); 
  }
  // // sleeping
  // for(int i = 0; i < boxSleep_allArray_LEN; i++){
  //   display.clearDisplay(); 
  //   display.drawBitmap(32, 0, boxSleep_allArray[i], 64, 64, SSD1306_WHITE); 
  //   display.display(); 
  //   delay(300); 
  // }
  // display.clearDisplay(); 
  // display.drawBitmap(32, 0, boxSleep1, 64, 64, SSD1306_WHITE); 
  // display.display(); 
  // delay(1700);
}
