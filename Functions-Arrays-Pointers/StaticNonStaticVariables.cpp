/*
 *      Author: MaksiKutrolli
 */


//In C++, variables declared inside functions can either be static or non-static. 
//
//Non-static (local) variables:
//-When you declare a variable inside a function without the static keyword, it becomes a non-static (local) variable.
//-Non-static variables have a limited scope, meaning they are only accessible within the function they are declared in.
//-Every time the function is called, a new instance of the non-static variable is created, and it is initialized each time
// the function is entered.
//-The variable retains its value between function calls if its value is not explicitly changed or if it's not defined as const.


//Static variables inside functions:
//-When you declare a variable inside a function with the static keyword, it becomes a static variable.
//-Static variables have a lifetime that spans the entire program execution.
//-Unlike non-static variables, static variables are initialized only once, at the first execution of the function.
// Subsequent calls to the function will retain the variable's value from the previous call.
//-Static variables maintain their values between function calls, making them useful for retaining information between
// different calls to the same function.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Example of a non-static variable inside a function:
void nonStaticFunction() {
    int count = 0; // Non-static (local) variable
    count++;
    std::cout << "Non-static variable count: " << count << std::endl;
}

// Example of a static variable inside a function:
void staticFunction() {
    static int count = 0; // Static variable
    count++;
    std::cout << "Static variable count: " << count << std::endl;
}


// This is the main function where the program execution starts.
int main() {

    // Call the non-static function and show the output.
    nonStaticFunction(); // Output: Non-static variable count: 1
    nonStaticFunction(); // Output: Non-static variable count: 1 (new instance of count is created)

    // Call the static function and show the output.
    staticFunction(); // Output: Static variable count: 1
    staticFunction(); // Output: Static variable count: 2 (retains the value from the previous call)
    staticFunction(); // Output: Static variable count: 3 (retains the value from the previous call)
    return 0;
}
