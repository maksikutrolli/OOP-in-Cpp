
/*
 *      Author: MaksiKutrolli
 */

#include <iostream>

// Base class for geometric shapes
class Shape {
private:
    std::string type;
public:
//    Shape(){};
    Shape(const std::string& type);

    void draw() const;
};
