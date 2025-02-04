/*
 * Package.cpp
 *
 *  Created on: Feb 4, 2025
 *      Author: seraphin
 */

#include "Package.h"

Package::Package() {

}

Package::Package(float _Weight) {
	Weight = _Weight;
}

Package::~Package() {

}


float Package::getWeight() {
	return Weight;
}

void Package::setWeight(float _Weight) {
	Weight = _Weight;
}
