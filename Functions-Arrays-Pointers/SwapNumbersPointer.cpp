/*
 *      Author: MaksiKutrolli
 */


//This example demonstrates the benefits of using functions and pointers to efficiently swap two numbers.
//By encapsulating the swapping logic in a separate function, the main program becomes more organized and readable.
//Additionally, passing pointers as function arguments allows direct manipulation of the original data,
//leading to a more efficient and concise code.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to swap two numbers using pointers
void swapNumbers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// This is the main function where the program execution starts.
int main() {
    int num1, num2;

    // Prompt user to input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display the original numbers
    std::cout << "Original numbers: " << num1 << " " << num2 << std::endl;

    // Call the swapNumbers function to swap the numbers
    swapNumbers(&num1, &num2);

    // Display the swapped numbers
    std::cout << "Swapped numbers: " << num1 << " " << num2 << std::endl;

    return 0;
}
