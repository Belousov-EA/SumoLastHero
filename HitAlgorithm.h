/*
 * HitAlgorithm.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef HITALGORITHM_H_
#define HITALGORITHM_H_

#include "SensorData.h"

class HitAlgorithm {
public:
	HitAlgorithm();
	virtual ~HitAlgorithm();
private:
	SensorData<bool, 1>& sensorData;
};

#endif /* HITALGORITHM_H_ */
