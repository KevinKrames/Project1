/*
 * Parenthesis.cpp
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */

#include "Parenthesis.h"


Parenthesis::Parenthesis(char value1) : Entity(){
	this->value = value1;

}

Parenthesis::~Parenthesis() {
	// TODO Auto-generated destructor stub
}

char Parenthesis::getValue() {
	return value;

}

