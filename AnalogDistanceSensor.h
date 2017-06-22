/*
 * AnalogDistanceSensor.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef ANALOGDISTANCESENSOR_H_
#define ANALOGDISTANCESENSOR_H_

#include "AnalogSensor.h"

class AnalogDistanceSensor : public AnalogSensor{
public:
	AnalogDistanceSensor(int _pin, int _k);
	virtual ~AnalogDistanceSensor();
	virtual void call();
private:
	int k;
};

#endif /* ANALOGDISTANCESENSOR_H_ */
