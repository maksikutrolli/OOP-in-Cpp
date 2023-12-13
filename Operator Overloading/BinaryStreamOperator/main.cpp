

/*
 *      Author: MaksiKutrolli
 */


#include <iostream>
#include "Person.h"

#include <sstream>

int main() {
    Person p("John John", 25);

    // Using the stream insertion operator
    std::cout << "Person Details: " << p << std::endl;

    Person p1;

    // Using the stream extraction operator
    std::cout << "Enter person details (Name Age): ";

    std::istringstream john("John 39");

    john>>p1;

//    std::cin >> maksi;

    std::cout << "Entered Person: " << p1 << std::endl;

    return 0;
}
