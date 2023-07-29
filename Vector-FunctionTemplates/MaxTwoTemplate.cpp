/*
 *      Author: MaksiKutrolli
 */

//Example: Maximum Function Template:

//In this example, we created a function template called 'max,' designed to find the maximum of two values of any type.
//The template uses the 'typename' keyword to make the function generic. This approach allows us to compare and
//determine the maximum value of different data types.

//This example demonstrates how function templates can be used to create generic functions that work with different
//types of data. The template allows us to write a single function definition that can be used for multiple data types,
//providing code reusability and flexibility.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function template to find the maximum of two values of any type
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}


// This is the main function where the program execution starts.
int main() {
    int intMax = max(5, 10); // Calling max with integers
    double doubleMax = max(2.5, 3.7); // Calling max with doubles

    std::cout << "Integer Max: " << intMax << std::endl;
    std::cout << "Double Max: " << doubleMax << std::endl;

    return 0;
}
