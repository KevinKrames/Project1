/*
 * Calculator.cpp
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */

#include "Calculator.h"
#include "Operate.h"
#include "Parenthesis.h"
#include <string>
#include <vector>
#include <sstream>

namespace std {

Calculator::Calculator() {

}

Calculator::~Calculator() {
	// TODO Auto-generated destructor stub
}

string Calculator::simplify(string inputString) {
	//This part is converting a string into a vector of entities
	string nextNumber = "";
	for (unsigned i = 0; i < inputString.length(); i++) {
		nextNumber = "";
		//This is the check for a rational number
		if (isRational(inputString.at(i))) {
			nextNumber = nextNumber + inputString.at(i);
			for (unsigned j = i + 1; j < inputString.length(); j++) {
				//Check if the next number is also rational
				if (isRational(inputString.at(j))) {
					nextNumber += inputString.at(j);
					i++;
				} else {
					j = inputString.length();
				}
			} // End of check for more rational numbers

			//Add the number to the vector
			cout << nextNumber;
			istringstream num1(nextNumber);
			int tempNum;
			num1 >> tempNum;
			//Rational rational = new Rational(tempNum);
			//currentSolution.push_back(rational);

		} // End of check for a rational number

		//This is the check for operators
		if (isOperator(inputString.at(i))) {
			Operate *newOperate = new Operate(inputString.at(i));
			currentSolution.push_back(newOperate);
			cout << newOperate->getValue();
		}

		//This is the check for parenthesis
		if (isParenthesis(inputString.at(i))) {
			Parenthesis *newParenthesis = new Parenthesis(inputString.at(i));
			currentSolution.push_back(newParenthesis);
			cout << newParenthesis->getValue();

		}

		//Simplify the vector
		currentSolution = simplifyVector(currentSolution);

	}
	return "";
}

vector<Entity*> Calculator::simplifyVector(vector<Entity*> tempVector) {
	//Simplifies the whole vector

	//Cycle through to find first left parenthesis

	//Then find first right parenthesis from that point

	//Find multiplication/division from left to right and simplify if appropriate

	//Repeat with addition/subtraction

	//leave parenthesis if irrational and irrational or rational and irrational are left after simplification

	//remove parenthesis if just one rational or one irrational



	return tempVector;
}

bool Calculator::isRational(char testChar) {
	switch (testChar) {
	case '0':
		return true;
		break;
	case '1':
		return true;
		break;
	case '2':
		return true;
		break;
	case '3':
		return true;
		break;
	case '4':
		return true;
		break;
	case '5':
		return true;
		break;
	case '6':
		return true;
		break;
	case '7':
		return true;
		break;
	case '8':
		return true;
		break;
	case '9':
		return true;
		break;
	default:
		return false;
		break;
	}

} // end of isRational function

bool Calculator::isOperator(char testChar) {
	switch (testChar) {
	case '+':
		return true;
		break;
	case '-':
		return true;
		break;
	case '*':
		return true;
		break;
	case '/':
		return true;
		break;
	default:
		return false;
		break;

	}

} // end of isOperator function

bool Calculator::isParenthesis(char testChar) {
	switch (testChar) {
	case '(':
		return true;
		break;
	case ')':
		return true;
		break;
	default:
		return false;
		break;

	}

} // end of isParenthesis function

}

