/*
 *      Author: MaksiKutrolli
 */


// Circle.cpp
#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::calculateArea() const {
    return 3.14 * radius * radius;
}
