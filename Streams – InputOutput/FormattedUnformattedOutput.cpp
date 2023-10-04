/*
 *      Author: MaksiKutrolli
 */

#include <iostream>
#include <string>

int main() {
    double pi = 3.14159265359;
    char ch = 'X';

    // Convert the double to a string
    std::string strValue = std::to_string(pi);

    // Obtain a pointer to the character data
    const char* charPtr = strValue.c_str();

    // Print the double and the char* representation
    std::cout << "Double: " << pi << std::endl;
    std::cout << "char* : "; std::cout.write(charPtr, 7)<< std::endl;

    //reinterpret_cast is a low-level cast operator and doesn't perform any type
    //checking or conversion between unrelated types. It simply reinterprets the bits in
    //memory as if they were of the new type.
    std::cout.write(reinterpret_cast<const char*>(&pi), sizeof(pi));

    // Output of characters using the put member function
    std::cout << "\nCharacter Output: "; std::cout.put(ch).put('\n');


    return 0;
}
