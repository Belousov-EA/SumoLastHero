/*
 * Sensors.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef SENSORS_H_
#define SENSORS_H_

#include "Arduino.h"

class Sensors {
public:
	Sensors(int _pin);
	virtual ~Sensors();
	virtual void call() = 0;
protected:
	int pin;
};

#endif /* SENSORS_H_ */
