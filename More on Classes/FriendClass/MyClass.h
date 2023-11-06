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
    MyClass(int val){
    	secretValue = val;
    }

    void displaySecretValue(){
    	std::cout<< "Secret Value: "<<  secretValue<<std::endl;
    }

    friend class FriendClass; // Declaration of the friend class
};


#endif /* MYCLASS_H_ */
