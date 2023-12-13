
/*
 *      Author: MaksiKutrolli
 */

#ifndef DERIVED_H_
#define DERIVED_H_

#include "Base.h"
class Derived : public Base {
public:
	// Brings the Base class display into the scope of Derived
	using Base::display;

    void display(int x) {
        // Derived class display function with a different signature
    	std::cout<<"Derived"<<std::endl;
    }
};




#endif /* _DERIVED_H_ */
