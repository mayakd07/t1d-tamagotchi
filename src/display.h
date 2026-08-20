#pragma once

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "config.h"

Adafruit_SSD1306 screen(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void initDisplay() {
    screen.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
    // screen.clearDisplay();  // could be redundant
}