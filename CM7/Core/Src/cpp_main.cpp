#include "cpp_main.h"
#include "main.h"
#include "retarget.h"
#include <iostream>

#include "fonts.h"

#include "BlinkingLed.h"
#include "AccGyroSensor.h"
#include "IKS01A3Motion.h"
#include "OLEDSSD1306.h"

#include "pool.h"

extern UART_HandleTypeDef huart3;
extern I2C_HandleTypeDef hi2c2;



void cpp_main(){
	RetargetInit(&huart3);

	std::cout << "\n\r\n\rStart up\n\r" << std::endl;

	auto led_pool = new k2lib::Pool<myhal::BlinkingLed,4>;

	myhal::BlinkingLed *ld0 = led_pool->palloc();
	myhal::BlinkingLed *ld1 = led_pool->palloc();
	myhal::BlinkingLed *ld2 = led_pool->palloc();
	myhal::BlinkingLed *ld3 = led_pool->palloc();

	ld1->setPinPort(LD1_GPIO_Port, LD1_Pin);
	ld2->setPinPort(LD2_GPIO_Port, LD2_Pin);
	ld3->setPinPort(LD3_GPIO_Port, LD3_Pin);

	ld1->setFrequency(4);
	ld2->setFrequency(2);
	ld3->setFrequency(1);

//	myhal::BlinkingLed ld1(LD1_GPIO_Port, LD1_Pin, 4);
//	myhal::BlinkingLed ld2(LD2_GPIO_Port, LD2_Pin, 2);
//	myhal::BlinkingLed ld3(LD3_GPIO_Port, LD3_Pin, 1);

	while(1){
		ld1->processBlinking();
		ld2->processBlinking();
		ld3->processBlinking();
	}
}
