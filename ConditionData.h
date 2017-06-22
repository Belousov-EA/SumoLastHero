/*
 * ConditionData.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef CONDITIONDATA_H_
#define CONDITIONDATA_H_

class ConditionData {
public:
	ConditionData();
	virtual ~ConditionData();
	friend bool operator==(ConditionData& left, ConditionData& right);

};

#endif /* CONDITIONDATA_H_ */
