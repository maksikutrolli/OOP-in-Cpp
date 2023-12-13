
/*
 *      Author: MaksiKutrolli
 */

#include "Derived.h"

int main() {
    Derived obj;

    obj.display();    // Calls Base class display()
    obj.display(42);  // Calls Derived class display(int)

    return 0;
}
