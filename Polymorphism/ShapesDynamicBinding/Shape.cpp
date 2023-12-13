/*
 *      Author: MaksiKutrolli
 */


// Shape.cpp
#include "Shape.h"
#include <iostream>

void Shape::displayArea() const {
    std::cout << "Area: " << calculateArea() << std::endl;
}
