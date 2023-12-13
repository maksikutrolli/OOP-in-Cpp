/*
 *      Author: MaksiKutrolli
 */


#ifndef EXAMPLES_SHAPES_SHAPE_H_
#define EXAMPLES_SHAPES_SHAPE_H_


class Shape {
public:
    virtual double calculateArea() const = 0;
    void displayArea() const;
};


#endif /* EXAMPLES_SHAPES_SHAPE_H_ */
