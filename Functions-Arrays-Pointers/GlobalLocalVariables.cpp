/*
 *      Author: MaksiKutrolli
 */

//In this example, globalVar1 and globalVar2 are global variables, meaning they are declared outside of any function,
//and they can be accessed and modified from any function in the program. The functionWithGlobalVariables function demonstrates
//how global variables can be used and modified inside a function.
//
//On the other hand, the functionWithLocalVariables function uses local variables localVar1 and localVar2,
//which are declared inside the function. Local variables have a limited scope and are accessible only within the block
//of code in which they are declared. Attempting to access local variables from outside their declaring block,
//like in the main function, will result in a compilation error.

//This example showcases the distinction between global and local variable scope in C++.
//Global variables, declared outside any function, can be accessed and modified from any part of the program.
//In contrast, local variables, defined inside a function, are limited in scope and can only be used within that
//specific function. 


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Global variables
int globalVar1 = 10;
int globalVar2 = 20;

// Function using global variables
void functionWithGlobalVariables() {
    std::cout << "Inside functionWithGlobalVariables:" << std::endl;
    std::cout << "Global variable 1: " << globalVar1 << std::endl;
    std::cout << "Global variable 2: " << globalVar2 << std::endl;
    // Modifying global variables inside the function
    globalVar1 += 5;
    globalVar2 -= 10;
}

// Function using local variables
void functionWithLocalVariables() {
    // Local variables
    int localVar1 = 5;
    int localVar2 = 15;
    std::cout << "Inside functionWithLocalVariables:" << std::endl;
    std::cout << "Local variable 1: " << localVar1 << std::endl;
    std::cout << "Local variable 2: " << localVar2 << std::endl;
    // Modifying local variables inside the function
    localVar1 += 3;
    localVar2 -= 8;
}

// This is the main function where the program execution starts.
int main() {
    std::cout << "Global variable 1: " << globalVar1 << std::endl;
    std::cout << "Global variable 2: " << globalVar2 << std::endl;

    functionWithGlobalVariables();

    std::cout << "Global variable 1 (after function call): " << globalVar1 << std::endl;
    std::cout << "Global variable 2 (after function call): " << globalVar2 << std::endl;

    functionWithLocalVariables();

    // Attempt to access local variables from the main function (This will cause a compilation error)
    // std::cout << "Local variable 1 (in main): " << localVar1 << std::endl;
    // std::cout << "Local variable 2 (in main): " << localVar2 << std::endl;

    return 0;
}
