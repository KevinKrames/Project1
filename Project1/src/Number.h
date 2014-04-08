/*
 * Number.h
 *
 *  Created on: Mar 13, 2014
 *      Author: krames
 */


using namespace std;

#ifndef Number_H_

#define Number_H_

#include <iostream>
#include <exception>
#include "Entity.h"

namespace std {

class Number: public Entity {
public:
	Number();
	virtual ~Number();
	//virtual string get

};

} /* namespace std */
#endif /* Number_H_ */
