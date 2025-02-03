/*
 * IKS01A3Motion.cpp
 *
 *  Created on: Nov 12, 2024
 *      Author: seraphin
 */

#include "IKS01A3Motion.h"

IKS01A3_Motion::IKS01A3_Motion() {}

IKS01A3_Motion::~IKS01A3_Motion() {}

void IKS01A3_Motion::enable(uint32_t instance, uint32_t function){
	IKS01A3_MOTION_SENSOR_Enable(instance, function);
}

void IKS01A3_Motion::getValue(uint32_t instance, uint32_t function, int32_t* XAxis, int32_t* YAxis, int32_t* ZAxis){
	IKS01A3_MOTION_SENSOR_GetAxes(instance, instance, &AxisValues);
	*XAxis = AxisValues.x - AxisOffsets.x;
	*YAxis = AxisValues.y - AxisOffsets.y;
	*ZAxis = AxisValues.z - AxisOffsets.z;
}

void IKS01A3_Motion::init(uint32_t instance, uint32_t function){
	IKS01A3_MOTION_SENSOR_Init(instance, function);
}

void IKS01A3_Motion::setZero(uint32_t instance, uint32_t function){
	IKS01A3_MOTION_SENSOR_GetAxes(instance, function, &AxisOffsets);
}

void IKS01A3_Motion::updateValues(uint32_t instance, uint32_t function){
	IKS01A3_MOTION_SENSOR_GetAxes(instance, function, &AxisValues);
}

void IKS01A3_Motion::getAVGValues(int32_t* XAxis, int32_t* YAxis, int32_t* ZAxis){
	*XAxis = AxisValues.x - AxisOffsets.x;
	*YAxis = AxisValues.y - AxisOffsets.y;
	*ZAxis = AxisValues.z - AxisOffsets.z;
}
