/*
 * Maneuvers.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef MANEUVERS_H_
#define MANEUVERS_H_

#include "Instruction.h"
#include "ConditionData.h"
#include "ManeuverData.h"

class Maneuvers {
public:
	Maneuvers();
	virtual ~Maneuvers();
	virtual void call() = 0;
	virtual void stop() = 0;
	virtual void init();
	Instruction& getStart();
	Instruction& getExaption();

private:
	Instruction instruction;
	ConditionData start;
	ConditionData exaption;
	ManeuverData& maneuversData;
};

#endif /* MANEUVERS_H_ */
