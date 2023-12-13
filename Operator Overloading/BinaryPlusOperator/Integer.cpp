
/*
 *      Author: MaksiKutrolli
 */

#include "Integer.h"
#include <iostream>

Integer::Integer(int val){
	this->value = val;

	std::cout<<"created"<<std::endl;
}

int Integer::getValue() const {
    return value;
}

void Integer::setValue(int val){
	value = val;
}

Integer Integer::operator+(const Integer& other) const {
    return Integer(value + other.value);
}
