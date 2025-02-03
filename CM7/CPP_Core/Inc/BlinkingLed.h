/*
 * BlinkingLed.h
 *
 *  Created on: Nov 12, 2024
 *      Author: seraphin
 */

#ifndef SRC_BLINKINGLED_H_
#define SRC_BLINKINGLED_H_

#include <NonBlockingSystemTickDelay.h>
#include <STM32H7Led.h>

namespace myhal {

	class BlinkingLed: protected NonBlockingSystemTickDelay, public STM32H7Led {
	public:
		BlinkingLed();
		virtual ~BlinkingLed();

		void processBlinking();
		void setFrequency(float);

	private:
		uint32_t frequency_;
	};

}



#endif /* SRC_BLINKINGLED_H_ */
