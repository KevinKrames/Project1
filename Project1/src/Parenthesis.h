/*
 * Parenthesis.h
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */


using namespace std;

#ifndef Parenthesis_H_

#define Parenthesis_H_

#include <iostream>
#include <exception>
#include <string>
#include "Entity.h"

namespace std {

class Parenthesis: public Entity {
public:
	Parenthesis(char value1);
	~Parenthesis();
	char getValue();

	char value;
};

} /* namespace std */
#endif /* Parenthesis_H_ */
