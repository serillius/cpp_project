/*
 * AccGyroSensor.cpp
 *
 *  Created on: Nov 12, 2024
 *      Author: seraphin
 */

#include "AccGyroSensor.h"

AccGyroSensor::~AccGyroSensor() {}

void AccGyroSensor::initSensor(){
	gyro_.init(INSTANCE, FUNCTION_INIT_ACC_GYRO);
	//acc_.init(INSTANCE, FUNCTION_ACC);
}

void AccGyroSensor::updateValues(){
	gyro_.updateValues(INSTANCE, FUNCTION_GYRO);
	acc_.updateValues(INSTANCE, FUNCTION_ACC);
}

void AccGyroSensor::setZero(){
	gyro_.setZero(INSTANCE, FUNCTION_GYRO);
	acc_.setZero(INSTANCE, FUNCTION_ACC);
}
