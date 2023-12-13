/*
 *      Author: MaksiKutrolli
 */


#include <iostream>
using namespace std;

class A {
public:
    void f() {
    	std::cout << "Class A" << std::endl;
    }
};

class B : public A {
public:
    void f() {
    	std::cout << "Class B" << std::endl;
    }
};


int main() {
    B x;

    A &y = x;

    A *z = &x;

    x.f();
    y.f();
    z->f();

    return 0;
}
