/*
 * SearchAlgorithm.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef SEARCHALGORITHM_H_
#define SEARCHALGORITHM_H_

#include "HitAlgorithm.h"
#include "DetectionAlgorithm.h"
#include "ConditionData.h"
#include "ManeuverData.h"
#include "InstructionData.h"

class SearchAlgorithm {
public:
	SearchAlgorithm();
	virtual ~SearchAlgorithm();
	void call();
private:
	HitAlgorithm& hitAlgorithm;
	DetectionAlgorithm& detectioinAlgorithm;
	ConditionData curentCondition;
	ManeuverData maneuversData;
	InstructionData instructionData;
};

#endif /* SEARCHALGORITHM_H_ */
