/*
 * Operate.cpp
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */

#include "Operate.h"


Operate::Operate(char value1) : Entity(){
	this->value = value1;
	this->type = "Operate";

}

Operate::~Operate() {
	// TODO Auto-generated destructor stub
}

string Operate::getType() {
	return type;

}

char Operate::getValue() {
	//string data = "" + value;
	return value;

}
