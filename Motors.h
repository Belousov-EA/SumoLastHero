/*
 * Motors.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef MOTORS_H_
#define MOTORS_H_

#include "MotorData.h"
#include "Arduino.h"

class Motors {
public:
	Motors();
	virtual ~Motors();
	void call();
	void init();
	MotorData& getData();

private:
	MotorData data;
	int leftPowerPin;
	int rightPowerPin;
	int leftDirectionPin;
	int rightDirectionPin;
	bool isRightTrue;
	bool isLeftThrue;
};

#endif /* MOTORS_H_ */
