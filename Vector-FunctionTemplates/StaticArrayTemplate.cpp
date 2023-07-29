/*
 *      Author: MaksiKutrolli
 */

//Example: Generic Static Array using Function Templates

//In this example, we have a C++ program that demonstrates the usage of function templates to work with static arrays.
//The program defines three function templates: calculateSum, print, and inputArrayData.

//calculateSum: This function template calculates the sum of elements in a static array of any type.
//It uses a reference to a const array to ensure that the array's size is determined at compile time.
//The function iterates through the array using a loop, accumulating the sum of elements, and returns the result.

//print: This function template prints out the elements of a static array of any type. Like calculateSum,
//it also takes a reference to a const array to ensure that the array's size is determined at compile time.
//The function iterates through the array using a loop and displays each element.

//inputArrayData: This function template allows the user to input data into a static array of any type.
//It prompts the user to enter elements of the array and uses a loop to read the input and populate the array.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function template to calculate the sum of elements in a static array
template <typename T, size_t N>
T calculateSum(const T (&arr)[N]) {
    T sum = T();
    for (size_t i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function template to print out the elements in a static array
template <typename T, size_t N>
void print(const T (&arr)[N]){
    std::cout << "{ ";
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "}" << std::endl;
}

// Function template to input data into a static  array
template <typename T, size_t N>
void inputArrayData(T (&arr)[N]){
    std::cout << "Enter " << N << " elemnts "<< std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
}


// This is the main function where the program execution starts.
int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};


    // Print out the intArray
    std::cout << "integers array:";
    print(intArray);

    // Calculate sum of integers in the static array
    int intSum = calculateSum(intArray);
    std::cout << "Sum of integers: " << intSum << std::endl;


    // Print out the doubleArray
    std::cout << "doubles array:";
    print(doubleArray);
    // Calculate sum of doubles in the static array
    double doubleSum = calculateSum(doubleArray);
    std::cout << "Sum of doubles: " << doubleSum << std::endl;

    return 0;
}
