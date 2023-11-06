/*
 *      Author: MaksiKutrolli
 */
#ifndef MYCLASS_H_
#define MYCLASS_H_
#include <iostream>

class MyClass {
private:
    int secretValue;
public:
    MyClass(int val) {
    	secretValue = val;
    }

    friend void friendFunction(MyClass& obj); // Declaration of the friend function
};

void friendFunction(MyClass& obj) {
    std::cout << "Friend Function: " << obj.secretValue << std::endl;
}




#endif /* MYCLASS_H_ */
