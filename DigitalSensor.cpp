/*
 * DigitalSensor.cpp
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#include "DigitalSensor.h"

DigitalSensor::DigitalSensor(int _pin) : Sensors(_pin){
	// TODO Auto-generated constructor stub

}

DigitalSensor::~DigitalSensor() {
	// TODO Auto-generated destructor stub
}

void DigitalSensor::call(){
	data.setValue(digitalRead(pin));
}
