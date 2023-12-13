/*
 *      Author: MaksiKutrolli
 */

// Main.cpp
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    shape1->displayArea();
    shape2->displayArea();

    return 0;
}
