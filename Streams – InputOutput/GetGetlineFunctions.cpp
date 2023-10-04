/*
 *      Author: MaksiKutrolli
 */


#include <iostream>
#include <string>

//To use std::numeric_limits<std::streamsize>::max()
#include <limits>

int main() {

    // Using get() to read individual characters
    std::cout << "Enter a character: ";

    // Read a character
    char ch = std::cin.get();


    // Clear the newline from the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "You entered: " << ch << std::endl;


    // Using getline() to read a line of text
    std::cout << "Enter your full name: ";
    std::string fullName;

    // Read a line of text
    std::getline(std::cin, fullName);
    std::cout << "Hello, " << fullName << "!" << std::endl;

    return 0;
}
