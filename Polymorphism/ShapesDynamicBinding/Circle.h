/*
 *      Author: MaksiKutrolli
 */


#ifndef EXAMPLES_SHAPES_CIRCLE_H_
#define EXAMPLES_SHAPES_CIRCLE_H_


#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    double calculateArea() const override;
};




#endif /* EXAMPLES_SHAPES_CIRCLE_H_ */
