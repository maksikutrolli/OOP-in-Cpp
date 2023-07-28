/*
 *      Author: MaksiKutrolli
 */
 
//In this example, we calculate the square of a number and update its value using both pass by value and pass by reference
//approaches. The functions calculateSquareByValue and calculateSquareByReference demonstrate pass by value and
//pass by reference, respectively, to calculate the square of the given number. Similarly, updateValueByValue and
//updateValueByReference demonstrate pass by value and pass by reference, respectively, to update the value of the number.
//

//Using functions in this example promotes code reusability and modularity, allowing us to encapsulate specific tasks
//like calculating the square and updating values. Pass by value creates a copy of the variable, ensuring that changes
//made within the function do not affect the original value in the main program. On the other hand, pass by reference
//allows us to directly modify the original value, leading to efficient memory usage and avoiding unnecessary copying.
//By understanding the benefits of function usage and the differences between pass by value and pass by reference,
//programmers can write more organized, maintainable, and efficient code.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to calculate the square of a number using pass by value
int calculateSquareByValue(int num) {
    return num * num;
}

// Function to calculate the square of a number using pass by reference
void calculateSquareByReference(int& num) {
    num = num * num;
}

// Function to update the value of a number using pass by value
void updateValueByValue(int num) {
    num = num + 10;
}

// Function to update the value of a number using pass by reference
void updateValueByReference(int& num) {
    num = num + 10;
}

// This is the main function where the program execution starts.
int main() {
    int num = 5;

    // Calculate and display the square using pass by value
    int squareByValue = calculateSquareByValue(num);
    std::cout << "Square (pass by value): " << squareByValue << std::endl;

    // Update the value using pass by value and display the updated value
    updateValueByValue(num);
    std::cout << "Value (pass by value): " << num << std::endl;

    // Calculate and display the square using pass by reference
    calculateSquareByReference(num);
    std::cout << "Square (pass by reference): " << num << std::endl;

    // Update the value using pass by reference and display the updated value
    updateValueByReference(num);
    std::cout << "Value (pass by reference): " << num << std::endl;

    return 0;
}

