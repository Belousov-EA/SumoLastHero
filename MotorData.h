/*
 * MotorData.h
 *
 *  Created on: Jun 22, 2017
 *      Author: user
 */

#ifndef MOTORDATA_H_
#define MOTORDATA_H_

class MotorData {
public:
	MotorData();
	virtual ~MotorData();

	void setRigth(float _right);
	void setLeft(float _left);

	float getRight();
	float getLeft();
private:
	float right;
	float left;
};

#endif /* MOTORDATA_H_ */
