/*
 *      Author: MaksiKutrolli
 */

//In this example, we have two sets of functions for addition, subtraction, and multiplication.
//The first set is designed for integers, and the second set is for doubles. This demonstrates function overloading,
//where multiple functions share the same name but differ in their parameter types.
//The main function showcases the versatility of the overloaded functions by performing arithmetic operations on
//both integers and doubles. This approach simplifies code maintenance and enhances code readability, as we can use
//the same function name for similar operations on different data types.
//


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to perform addition for integers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to perform addition for doubles
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction for integers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to perform subtraction for doubles
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication for integers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to perform multiplication for doubles
double multiply(double num1, double num2) {
    return num1 * num2;
}


// This is the main function where the program execution starts.
int main() {
    int intNum1 = 10;
    int intNum2 = 5;
    double doubleNum1 = 2.5;
    double doubleNum2 = 1.5;

    // Perform addition
    std::cout << "Addition (int): " << add(intNum1, intNum2) << std::endl;
    std::cout << "Addition (double): " << add(doubleNum1, doubleNum2) << std::endl;

    // Perform subtraction
    std::cout << "Subtraction (int): " << subtract(intNum1, intNum2) << std::endl;
    std::cout << "Subtraction (double): " << subtract(doubleNum1, doubleNum2) << std::endl;

    // Perform multiplication
    std::cout << "Multiplication (int): " << multiply(intNum1, intNum2) << std::endl;
    std::cout << "Multiplication (double): " << multiply(doubleNum1, doubleNum2) << std::endl;

    return 0;
}
