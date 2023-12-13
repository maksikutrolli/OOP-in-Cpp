
/*
 *      Author: MaksiKutrolli
 */

#include <iostream>
#include "Integer.h"


int main() {
    Integer num1(5);

    Integer sum = 2 + num1;


    std::cout << "Sum: " << sum.getValue() << std::endl;

    Integer negation = -num1;

    std::cout << "Sum: " << sum.getValue() << std::endl;

    return 0;
}
