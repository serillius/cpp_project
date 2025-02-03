/*
 * STM32H7Led.cpp
 *
 *  Created on: Nov 6, 2024
 *      Author: seraphin
 */

#include "STM32H7Led.h"

namespace myhal {

	STM32H7Led::STM32H7Led() {}
	STM32H7Led::~STM32H7Led() {}

	void STM32H7Led::toggleLED() {
		HAL_GPIO_TogglePin(port_, pin_);
	}

	void STM32H7Led::setPinPort(GPIO_TypeDef* port, uint16_t pin) {
		port_ = port;
		pin_ = pin;
	}

}


