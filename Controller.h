/*
 * Controller.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Maneuvers.h"

class ConditionData;

class Controller {
public:
	Controller();
	virtual ~Controller();
	void call();
private:
	Maneuvers** maneuvers;
	int currentManeuvers;
	ConditionData& curentCondition;

};

#endif /* CONTROLLER_H_ */
