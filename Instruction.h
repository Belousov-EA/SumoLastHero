/*
 * Instruction.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef INSTRUCTION_H_
#define INSTRUCTION_H_

#include "Arduino.h"

class MotorData;
class InstructionData;

class Instruction {
public:
	Instruction();
	virtual ~Instruction();
	void go(float left, float right, float time);
	void go(float left, float right);
	void toPointing();
	void start();
	void finish();
	void setFinish(void (*callback)());
private:
	InstructionData& instructionData;
	MotorData& motorData;
};

#endif /* INSTRUCTION_H_ */
