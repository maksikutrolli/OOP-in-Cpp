/*
 *      Author: MaksiKutrolli
 */

// In this example, we have three functions: findMax, findMin, and inputArrayData.
// These functions serve distinct purposes to efficiently process the data in the program.
// The findMax function takes a 2-dimensional array and its row and column sizes as inputs,
// allowing us to determine the maximum value present in the array.
// Similarly, the findMin function also takes the 2-dimensional array and its row and column sizes
// as arguments, enabling us to identify the minimum value within the array. The third function,
// inputArrayData, takes a 2-dimensional array and its row and column sizes as parameters,
// offering an efficient way to input a set of integers directly into the array.


// The 2d array is represented as follows:
//----------------------------------------
//| Index | 0 | 1 | 2 |
//|-------|---|---|---|
//| 0     | 7 | 8 | 9 |
//| 1     | 2 | 1 | 3 |
//| 2     | 6 | 4 | 5 |
//----------------------------------------
//| Elements: | arr[0][0] | arr[0][1] | arr[0][2] |
//----------------------------------------
//| Elements: | arr[1][0] | arr[1][1] | arr[1][2] |
//----------------------------------------
//| Elements: | arr[2][0] | arr[2][1] | arr[2][2] |
//----------------------------------------

// This line includes the input/output stream library, which allows us to use functions like
// std::cin and std::cout for user input and output.
#include <iostream>

// Function to find the maximum value in a 2-dimensional array
int findMax(const int arr[][5], int rows, int columns) {
    int max = arr[0][0]; // Initialize 'max' to the first element of the array.

    // Loop through the array and compare each element with the current 'max',
    // updating the 'max' value accordingly.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // Return the final maximum value found in the array.
    return max;
}

// Function to find the minimum value in a 2-dimensional array
int findMin(const int arr[][5], int rows, int columns) {
    int min = arr[0][0]; // Initialize 'min' to the first element of the array.

    // Loop through the array and compare each element with the current 'min',
    // updating the 'min' value accordingly.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    // Return the final minimum value found in the array.
    return min;
}

// Function to input data into the 2-dimensional array
void inputArrayData(int arr[][5], int rows, int columns) {
    std::cout << "Enter " << (rows * columns) << " integers: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin >> arr[i][j];
        }
    }
}

// This is the main function where the program execution starts.
int main() {
    const int rows = 3;
    const int columns = 5;

    // Declare a 2-dimensional array to store the integers provided by the user.
    int numbers[rows][columns];

    // Call the inputArrayData function to input data into the array.
    inputArrayData(numbers, rows, columns);

    // Find the maximum and minimum values using the functions.
    int maxVal = findMax(numbers, rows, columns);
    int minVal = findMin(numbers, rows, columns);

    // Display the results.
    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Minimum value: " << minVal << std::endl;

    return 0;
}
