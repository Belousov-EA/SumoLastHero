/*
 * AnalogSensor.cpp
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(int _pin): Sensors(_pin) {
	// TODO Auto-generated constructor stub

}

AnalogSensor::~AnalogSensor() {
	// TODO Auto-generated destructor stub
}

void AnalogSensor::call(){
	data.setValue(analogRead(pin));
}
