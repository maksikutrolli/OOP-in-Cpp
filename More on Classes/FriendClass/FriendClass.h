/*
 *      Author: MaksiKutrolli
 */

#ifndef FRIENDCLASS_H_
#define FRIENDCLASS_H_

#include "MyClass.h"

class FriendClass {
public:
    void accessMyClass(MyClass& obj) {
        obj.secretValue = 42; // Accessing private member of MyClass
    }
};



#endif /* FRIENDCLASS_H_ */
