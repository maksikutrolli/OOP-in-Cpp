/*
 *      Author: MaksiKutrolli
 */


#include <iostream>

class A {
public:
   virtual void f() {
	   std::cout << "Class A" << std::endl;
   }
};

class B: public A {
public:
//   using A::f;
   void f(int) {
	   std::cout << "Class B" << std::endl;
   }

};

class C: public B {
public:
   void f() override{
	   std::cout << "Class C" << std::endl;
   }
};

int main() {
   B b;
//   b.f();
   C c;
   A * pa1 = &b;
   A * pa2 = &c;
   c.f();
   pa1->f();
   pa2->f();

   return 0;
}

