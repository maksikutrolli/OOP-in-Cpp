/*
 *      Author: MaksiKutrolli
 */

#include "Shape.h"

Shape::Shape(const std::string &type) {
	this->type = type;
}

void Shape::draw() const {
	std::cout << "Drawing a " << type << " shape." << std::endl;
}

