/*
 * AnalogDistanceSensor.cpp
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#include "AnalogDistanceSensor.h"

AnalogDistanceSensor::AnalogDistanceSensor(int _pin, int _k)
: k(_k),
AnalogSensor(_pin) {

}

void AnalogDistanceSensor::call(){
	data.setValue(k/analogRead(pin));
}

