/*
 * BlinkingLed.cpp
 *
 *  Created on: Nov 12, 2024
 *      Author: seraphin
 */

#include "BlinkingLed.h"

namespace myhal {

	BlinkingLed::BlinkingLed() {}
	BlinkingLed::~BlinkingLed() {}


	void BlinkingLed::processBlinking() {
		if (checkExpiration()) {
			toggleLED();
			initialise(frequency_);
		}
	}

	void BlinkingLed::setFrequency(float frequency) {
		if (frequency != 0) {
			frequency_ = myHelper::millToHz(frequency);
		}
	}

}

