/*
 *      Author: MaksiKutrolli
 */


#include <iostream>
//sstream is a C++ standard library class that provides a way to perform formatted input and output
//operations on strings, just like you would with input and output streams (std::cin and std::cout)
//for console input and output.
#include <sstream>
#include <string>

// Define a Person class
class Person {
public:
    std::string name;
    int age;
};

int main() {

    std::string inputString = "Alice 30";

    //std::istringstream is a class in C++ that represents an input stream associated
    //with a string. It allows you to treat a string as a source of input, just like you
    //would with std::cin for keyboard input or a file stream for file input.
    std::istringstream input(inputString);

    Person person;

    // Read data from the stringstream and populate the person object
    // Using >> to read formatted input while skipping whitespace
    input >> person.name >> person.age;

    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}
