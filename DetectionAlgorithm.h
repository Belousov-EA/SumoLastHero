/*
 * DetectionAlgorithm.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef DETECTIONALGORITHM_H_
#define DETECTIONALGORITHM_H_

#include "SensorData.h"

class DetectionAlgorithm {
public:
	DetectionAlgorithm();
	virtual ~DetectionAlgorithm();
	void call();
private:
	SensorData<int, 1>& leftSensor;
	SensorData<int, 1>& rightSensor;
	//TODO создать ссылки на все дальномеры
};

#endif /* DETECTIONALGORITHM_H_ */
