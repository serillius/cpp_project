/*
 * STM32H7Led.h
 *
 *  Created on: Nov 6, 2024
 *      Author: seraphin
 */

#ifndef SRC_STM32H7LED_H_
#define SRC_STM32H7LED_H_

#include "main.h"

namespace myhal{
	class STM32H7Led {
	public:
		STM32H7Led();
		virtual ~STM32H7Led();

		void toggleLED();
		void setPinPort(GPIO_TypeDef* port, uint16_t pin);

	private:
		GPIO_TypeDef* port_;
		uint16_t pin_;
	};
}

#endif /* SRC_STM32H7LED_H_ */
