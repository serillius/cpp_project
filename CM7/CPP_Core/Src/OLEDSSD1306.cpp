/*
 * OLEDSSD1306.cpp
 *
 *  Created on: Nov 17, 2024
 *      Author: seraphin
 */

#include "OLEDSSD1306.h"

OLED_SSD1306::OLED_SSD1306(I2C_HandleTypeDef *hi2c){
	OLED_SSD1306::setI2CSTMHandle(hi2c);
	OLED_SSD1306::Init();
}

OLED_SSD1306::~OLED_SSD1306() {

}

uint8_t OLED_SSD1306::Init(void) {
	SSD1306_Init();
}

void OLED_SSD1306::UpdateScreen(void) {
	SSD1306_UpdateScreen();
}

void OLED_SSD1306::ToggleInvert(void) {
	SSD1306_ToggleInvert();
}

void OLED_SSD1306::Fill(SSD1306_COLOR_t Color) {
	SSD1306_Fill(Color);
}

void OLED_SSD1306::DrawPixel(uint16_t x, uint16_t y, SSD1306_COLOR_t color) {
	SSD1306_DrawPixel(x, y, color);
}

void OLED_SSD1306::GotoXY(uint16_t x, uint16_t y) {
	SSD1306_GotoXY(x, y);
}

char OLED_SSD1306::Putc(char ch, FontDef_t* Font, SSD1306_COLOR_t color) {
	SSD1306_Putc(ch, Font, color);
}

char OLED_SSD1306::Puts(const char* str, FontDef_t* Font, SSD1306_COLOR_t color) {
	SSD1306_Puts(str, Font, color);
}

void OLED_SSD1306::DrawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, SSD1306_COLOR_t c) {
	SSD1306_DrawLine(x0, y0, x1, y1, c);
}

void OLED_SSD1306::DrawRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c) {
	SSD1306_DrawRectangle(x, y, w, h, c);
}

void OLED_SSD1306::DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c) {
	SSD1306_DrawFilledRectangle(x, y, w, h, c);
}

void OLED_SSD1306::DrawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, SSD1306_COLOR_t color) {
	SSD1306_DrawTriangle(x1, y1, x2, y2, x3, y3, color);

}

void OLED_SSD1306::DrawCircle(int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c) {
	SSD1306_DrawCircle(x0, y0, r, c);
}

void OLED_SSD1306::DrawFilledCircle(int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c) {
	SSD1306_DrawFilledCircle(x0, y0, r, c);
}

void OLED_SSD1306::DrawBitmap(int16_t x, int16_t y, const unsigned char* bitmap, int16_t w, int16_t h, uint16_t color) {
	SSD1306_DrawBitmap(x, y, bitmap, w, h, color);
}

void OLED_SSD1306::ScrollRight(uint8_t start_row, uint8_t end_row) {
	SSD1306_ScrollRight(start_row, end_row);
}

void OLED_SSD1306::ScrollLeft(uint8_t start_row, uint8_t end_row) {
	SSD1306_ScrollLeft(start_row, end_row);
}

void OLED_SSD1306::Scrolldiagright(uint8_t start_row, uint8_t end_row) {
	SSD1306_Scrolldiagright(start_row, end_row);
}

void OLED_SSD1306::Scrolldiagleft(uint8_t start_row, uint8_t end_row) {
	SSD1306_Scrolldiagleft(start_row, end_row);
}

void OLED_SSD1306::Stopscroll(void) {
	SSD1306_Stopscroll();
}

void OLED_SSD1306::InvertDisplay (int i) {
	SSD1306_InvertDisplay (i);
}

void OLED_SSD1306::setI2CSTMHandle(I2C_HandleTypeDef *HandleToI2CDisp) {
	SSD1306_setI2CSTMHandle(HandleToI2CDisp);
}

void OLED_SSD1306::Clear (void) {
	SSD1306_Clear ();
}

