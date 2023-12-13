
/*
 *      Author: MaksiKutrolli
 */

#include "Color.h"
#include "Shape.h"

// Derived class from both Shape and Color
class ColoredShape : public Shape, public Color {
public:
    ColoredShape(const std::string &type, const std::string &color);
};
