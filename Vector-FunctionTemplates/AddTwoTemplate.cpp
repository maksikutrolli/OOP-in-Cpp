//Example: Addition Function Template

//In this example, we created a function template named 'add' that can add two values of any type, be it integers,
//doubles, or other data types. The function template is defined using the 'typename' keyword to allow generic
//parameter types. By utilizing the function template, we achieved code reusability and flexibility,
//enabling us to perform addition operations on different data types without creating multiple function overloads.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>


// Function template to add two values of any type
template <typename T>
T add(T a, T b) {
    return a + b;
}

// This is the main function where the program execution starts.
int main() {
    int intSum = add(5, 10); // Calling add with integers
    double doubleSum = add(2.5, 3.7); // Calling add with doubles

    std::cout << "Integer Sum: " << intSum << std::endl;
    std::cout << "Double Sum: " << doubleSum << std::endl;

    return 0;
}
