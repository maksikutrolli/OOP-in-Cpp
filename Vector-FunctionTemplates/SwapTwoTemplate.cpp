/*
 *      Author: MaksiKutrolli
 */

//Example: Swapping Function Template

//In this example, we utilized a function template named 'swapValues' to swap the values of two variables of any type.
//The template is defined using the 'typename' keyword to accommodate different data types for swapping. By employing
//function templates, we achieved a versatile and reusable function capable of swapping values of integers,
//doubles, or other types, simplifying the code and avoiding the need for separate swap functions for each
//data type.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function template to swap two values of any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


// This is the main function where the program execution starts.
int main() {
    int x = 5, y = 10;
    double a = 2.5, b = 3.7;

    swapValues(x, y); // Swapping integers
    swapValues(a, b); // Swapping doubles

    std::cout << "x: " << x << ", y: " << y << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;

    return 0;
}
