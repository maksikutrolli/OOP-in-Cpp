/*
 *      Author: MaksiKutrolli
 */

#include "Color.h"

Color::Color(const std::string &color) {
	this->color = color;
}

void Color::applyColor() const {
	std::cout << "Applying " << color << " color." << std::endl;
}

