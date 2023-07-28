/*
 *      Author: MaksiKutrolli
 */


//In this example, we have two functions: calculateArea and calculatePerimeter. These functions take the length
//and width of a rectangle as parameters and return the calculated area and perimeter, respectively.
//
//This example demonstrates how functions can be used to encapsulate specific calculations, making the
//main program more readable and organized. By using functions, you can break down complex tasks into smaller,
//manageable pieces, improving the overall structure of your program.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

// This is the main function where the program execution starts.
int main() {
    double length, width;

    // Prompt user to input the length and width of the rectangle
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate the area and perimeter using the functions
    double area = calculateArea(length, width);
    double perimeter = calculatePerimeter(length, width);

    // Display the results
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}
