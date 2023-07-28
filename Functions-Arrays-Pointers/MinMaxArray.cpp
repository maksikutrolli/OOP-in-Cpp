/*
 *      Author: MaksiKutrolli
 */

//In this example, we have three functions: findMax, findMin, and inputArrayData.
//These functions serve distinct purposes to efficiently process the data in the program.
//The findMax function takes an array and its size as inputs, allowing us to determine the maximum value present in the array.
//Similarly, the findMin function also takes the array and its size as arguments, enabling us to identify the minimum
//value within the array. The third function, inputArrayData, takes an array and its size as parameters and offers an
//efficient way to input a set of integers directly into the array.


// The array is represented as follows:
//----------------------------------------------------------
//| Index | 0 | 1 | 2 | 3 | 4 |
//|-------|---|---|---|---|---|
//| Value | 7 | 8 | 9 | 2 | 1 |
//|-------|---|---|---|---|---|
//| Elements: | arr[0] | arr[1] | arr[2] | arr[3] | arr[4] |
//----------------------------------------------------------


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>


// Function to find the maximum value in an array
int findMax(const int arr[], int size) {
    // Initialize 'max' to the first element of the array.
    int max = arr[0];

    // Loop through the array starting from the second element (index 1).
    // Compare each element with the current 'max', and if an element is greater,
    // update the 'max' value accordingly.
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Return the final maximum value found in the array.
    return max;
}

// Function to find the minimum value in an array
int findMin(const int arr[], int size) {
    // Initialize 'min' to the first element of the array.
    int min = arr[0];

    // Loop through the array starting from the second element (index 1).
    // Compare each element with the current 'min', and if an element is smaller,
    // update the 'min' value accordingly.
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Return the final minimum value found in the array.
    return min;
}

// Function to input data into the array
void inputArrayData(int arr[], int size) {
    std::cout << "Enter " << size << " integers: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

// This is the main function where the program execution starts.
int main() {

	//This line defines a constant size with a value of 5, which represents the number of integers the user will input.
    const int size = 5;

    //This line declares an array named numbers of size 5 to store the integers provided by the user.
    int numbers[size];

    // Call the inputArrayData function to input data into the array.
    inputArrayData(numbers, size);

    // Find the maximum and minimum values using the functions.
    //This line calls the findMax function and stores the maximum value returned by the function in the variable maxVal.
    int maxVal = findMax(numbers, size);
    //This line calls the findMin function and stores the minimum value returned by the function in the variable minVal.
    int minVal = findMin(numbers, size);

    // Display the results.
    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Minimum value: " << minVal << std::endl;

    return 0;
}
