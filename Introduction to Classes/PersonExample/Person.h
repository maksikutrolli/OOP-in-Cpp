/*
 *      Author: MaksiKutrolli
 */

// Include the standard input/output stream library.
#include <iostream>

// Define the Person class.
class Person {
public:
    // Declare and initialize data members: name, age, and gender.
    std::string name{"Maksi"};
    int age{29};
    char gender{'M'};

public:
    // Define a member function named to introduce the person.
    void introduce() {
        // Output a greeting message with the person's name and age.
        std::cout << "Hello, I'm " << name << ". I'm " << age << " years old.";

        // Check the gender and provide additional information accordingly.
        if (gender == 'M') {
            std::cout << " I'm a male." << std::endl;
        } else if (gender == 'F') {
            std::cout << " I'm a female." << std::endl;
        } else {
            std::cout << " Gender unspecified." << std::endl;
        }
    }
};