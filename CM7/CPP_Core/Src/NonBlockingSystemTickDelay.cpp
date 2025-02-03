/*
 * NonBlockingSystemTickDelay.cpp
 *
 *  Created on: Nov 5, 2024
 *      Author: seraphin
 */

#include "NonBlockingSystemTickDelay.h"

namespace myhal {

	NonBlockingSystemTickDelay::~NonBlockingSystemTickDelay() {}

	void NonBlockingSystemTickDelay::initialise(uint32_t delay) {
		wait = delay;
		tickstart = HAL_GetTick();

	}

	bool NonBlockingSystemTickDelay::checkExpiration() {
		return (HAL_GetTick() >= tickstart + wait);
	}

}



