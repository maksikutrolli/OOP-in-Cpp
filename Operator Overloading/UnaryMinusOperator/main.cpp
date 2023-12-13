/*
 *      Author: MaksiKutrolli
 */

#include <iostream>

#include "MyNumber.h"

int main() {
    MyNumber num(42);

    std::cout<<num.getValue()<<std::endl;

    MyNumber result = -num; // Calls the overloaded operator-

    std::cout<<result.getValue()<<std::endl;

    return 0;
}
