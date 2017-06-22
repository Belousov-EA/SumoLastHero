/*
 * AnalogSensor.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef ANALOGSENSOR_H_
#define ANALOGSENSOR_H_

#include "Sensors.h"
#include "SensorData.h"

class AnalogSensor : public Sensors{
public:
	AnalogSensor(int _pin);
	virtual ~AnalogSensor();
	virtual void call();
	SensorData<int, 1>& getData();
protected:
	SensorData<int, 1> data;
};

#endif /* ANALOGSENSOR_H_ */
