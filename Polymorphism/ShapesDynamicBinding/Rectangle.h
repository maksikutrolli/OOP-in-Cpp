/*
 *      Author: MaksiKutrolli
 */


#ifndef EXAMPLES_SHAPES_RECTANGLE_H_
#define EXAMPLES_SHAPES_RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w);
    double calculateArea() const override;
};




#endif /* EXAMPLES_SHAPES_RECTANGLE_H_ */
