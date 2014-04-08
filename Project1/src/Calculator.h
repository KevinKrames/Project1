/*
 * Calculator.h
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */



#ifndef Calculator_H_
#define Calculator_H_

#include <vector>
#include <iostream>
#include <exception>
#include <string>
#include "Entity.h"

using std::vector;

namespace std {

class Calculator {
public:

	Calculator();
	virtual ~Calculator();
    string simplify(string inputString);
    bool isRational(char testChar);
    bool isOperator(char testChar);
    bool isParenthesis(char testChar);
    vector<Entity*> simplifyVector(vector<Entity*> tempVector);

private:
	vector<Entity*> pastSolution;
	vector<Entity*> currentSolution;

};



} /* namespace std */
#endif /* Calculator_H_ */
