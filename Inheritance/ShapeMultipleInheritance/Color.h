
/*
 *      Author: MaksiKutrolli
 */


#include <iostream>

// Base class for colors
class Color {
private:
    std::string color;
public:
    Color(const std::string& color);

    void applyColor() const;

};

