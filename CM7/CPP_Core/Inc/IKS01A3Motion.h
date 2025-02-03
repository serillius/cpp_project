/*
 * IKS01A3Motion.h
 *
 *  Created on: Nov 12, 2024
 *      Author: seraphin
 */

#ifndef SRC_IKS01A3MOTION_H_
#define SRC_IKS01A3MOTION_H_

#include "iks01a3_motion_sensors.h"

class IKS01A3_Motion {
public:
	IKS01A3_Motion();
	virtual ~IKS01A3_Motion();

	void enable(uint32_t instance, uint32_t function);
	void getValue(uint32_t instance, uint32_t function, int32_t* XAxis, int32_t* YAxis, int32_t* ZAxis);
	void init(uint32_t instance, uint32_t function);
	void setZero(uint32_t instance, uint32_t function);
	void updateValues(uint32_t instance, uint32_t function);
	void getAVGValues(int32_t* XAxis, int32_t* YAxis, int32_t* ZAxis);


private:
	IKS01A3_MOTION_SENSOR_Axes_t AxisValues;
	IKS01A3_MOTION_SENSOR_Axes_t AxisOffsets;
};

#endif /* SRC_IKS01A3MOTION_H_ */
