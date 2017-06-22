/*
 * DigitalSensor.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef DIGITALSENSOR_H_
#define DIGITALSENSOR_H_

#include "SensorData.h"

class DigitalSensor : public Sensors{
public:
	DigitalSensor(int _pin);
	virtual ~DigitalSensor();
	virtual void call();
	virtual void init();
	SensorData<bool, 1>& getData();
protected:
	SensorData<bool, 1> data;
};

#endif /* DIGITALSENSOR_H_ */
