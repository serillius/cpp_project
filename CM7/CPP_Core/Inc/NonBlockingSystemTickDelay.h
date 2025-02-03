/*
 * NonBlockingSystemTickDelay.h
 *
 *  Created on: Nov 5, 2024
 *      Author: seraphin
 */

#ifndef NONBLOCKINGSYSTEMTICKDELAY_H_
#define NONBLOCKINGSYSTEMTICKDELAY_H_

#include "main.h"

namespace myhal{
	class NonBlockingSystemTickDelay {
	public:
		NonBlockingSystemTickDelay(): wait(0), tickstart(0) {}
		virtual ~NonBlockingSystemTickDelay();

		void initialise(uint32_t delay);
		bool checkExpiration();


	private:
		uint32_t wait;
		uint32_t tickstart;
	};

	namespace myHelper {

		template<typename T>
		concept Arithmetic = std::is_arithmetic_v<T>;

		template<Arithmetic T>

		constexpr uint32_t millToHz(T value) {
			return static_cast<uint32_t>(1000/value);
		}

	}
}



#endif /* NONBLOCKINGSYSTEMTICKDELAY_H_ */
