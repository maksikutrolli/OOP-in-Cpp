
/*
 *      Author: MaksiKutrolli
 */


#include <iostream>
#include "Complex.h"

int main() {
    Complex num1(3.0, 2.0);
    Complex num2(1.5, 0.5);

    Complex difference = num1 - num2;

    std::cout << "Difference: " << difference.getReal() << " + " << difference.getImaginary() << "i" << std::endl;

    return 0;
}
