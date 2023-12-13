
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


Integer operator+(int left, const Integer& right){
	return Integer(left + right.value);
}

Integer operator-(const Integer& obj){
	return Integer(-obj.value);
}

