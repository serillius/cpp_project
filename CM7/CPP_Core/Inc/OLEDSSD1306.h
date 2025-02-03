/*
 * OLEDSSD1306.h
 *
 *  Created on: Nov 17, 2024
 *      Author: seraphin
 */

#ifndef SRC_OLEDSSD1306_H_
#define SRC_OLEDSSD1306_H_

#include "main.h"
#include "ssd1306.h"

class OLED_SSD1306 {
public:
	OLED_SSD1306(I2C_HandleTypeDef *hi2c);
	virtual ~OLED_SSD1306();

	uint8_t Init(void);
	void UpdateScreen(void);
	void ToggleInvert(void);
	void Fill(SSD1306_COLOR_t Color);
	void DrawPixel(uint16_t x, uint16_t y, SSD1306_COLOR_t color);
	void GotoXY(uint16_t x, uint16_t y);
	char Putc(char ch, FontDef_t* Font, SSD1306_COLOR_t color);
	char Puts(const char* str, FontDef_t* Font, SSD1306_COLOR_t color);
	void DrawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, SSD1306_COLOR_t c);
	void DrawRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c);
	void DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c);
	void DrawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, SSD1306_COLOR_t color);
	void DrawCircle(int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c);
	void DrawFilledCircle(int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c);
	void I2C_Init();
	void I2C_Write(uint8_t address, uint8_t reg, uint8_t data);
	void I2C_WriteMulti(uint8_t address, uint8_t reg, uint8_t *data, uint16_t count);
	void DrawBitmap(int16_t x, int16_t y, const unsigned char* bitmap, int16_t w, int16_t h, uint16_t color);
	void ScrollRight(uint8_t start_row, uint8_t end_row);
	void ScrollLeft(uint8_t start_row, uint8_t end_row);
	void Scrolldiagright(uint8_t start_row, uint8_t end_row);
	void Scrolldiagleft(uint8_t start_row, uint8_t end_row);
	void Stopscroll(void);
	void InvertDisplay (int i);
	void setI2CSTMHandle(I2C_HandleTypeDef *HandleToI2CDisp);
	void Clear (void);
};

#endif /* SRC_OLEDSSD1306_H_ */
