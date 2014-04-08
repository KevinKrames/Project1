/*
 * Operate.h
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */


using namespace std;

#ifndef Operate_H_

#define Operate_H_

#include <iostream>
#include <exception>
#include <string>
#include "Entity.h"

namespace std {

class Operate: public Entity {
public:
	Operate(char value1);
	~Operate();
	char getValue();
	string getType();

	char value;
	string type;
};

} /* namespace std */
#endif /* Operate_H_ */
