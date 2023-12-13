
/*
 *      Author: MaksiKutrolli
 */

#include "ColoredShape.h"

int main() {
    // Creating a ColoredShape object
    ColoredShape coloredRectangle("Rectangle", "Red");

    // Using methods from both base classes
    coloredRectangle.draw();      // Drawing a Rectangle shape.
    coloredRectangle.applyColor(); // Applying Red color.

    return 0;
}
