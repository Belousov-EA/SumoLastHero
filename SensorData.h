/*
 * SensorData.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef SENSORDATA_H_
#define SENSORDATA_H_

template <typename outData, int sensorCount>
class SensorData {
public:
	SensorData();
	virtual ~SensorData();

	int getSensorCount() const;

	outData getValue(int num);
	outData getValue();

	void setValue(outData value, int num);
	void setValue(outData value);
private:
	outData values[sensorCount];
};

#endif /* SENSORDATA_H_ */
