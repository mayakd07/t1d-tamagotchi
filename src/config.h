#pragma once

// SSD1306 OLED
#define OLED_ADDR 0x3C
#define SCREEN_WIDTH 128    // pixels
#define SCREEN_HEIGHT 64    // pixels

// Glucose range
#define URGENT_LOW_THRESHOLD 55
#define LOW_THRESHOLD 75
#define HIGH_THRESHOLD 180
#define VERY_HIGH_THRESHOLD 240
#define URGENT_HIGH_THRESHOLD 300

// Insulin and hunger 
#define HUNGER_HOURS 4
#define INSULIN_HOURS 3     // needs update
                            // also should this be universal or per unit/half-unit? 