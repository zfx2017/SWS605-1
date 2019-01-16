#pragma once

#define LED_COUNT (16)

extern __code uint8_t text[][160];

void pallette(void);
void displayImage(uint8_t num);
void wheel(uint16_t wheel_pos, uint8_t brightness, uint8_t *data);
void WheelImage(uint16_t i, uint16_t WheelPos);
void showImage16dots(uint8_t num);
void showImage16(uint8_t num);
