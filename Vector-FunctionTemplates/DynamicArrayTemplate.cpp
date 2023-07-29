/*
 *      Author: MaksiKutrolli
 */

//Example: Generic Dynamic Array using Function Templates

//In this example, the calculateSum function template is used to calculate the sum of integers and doubles in
//dynamic arrays. It showcases how function templates can handle different data types and adapt to various array sizes,
//providing a versatile approach to working with dynamic arrays in C++. Remember to deallocate the memory allocated
//for dynamic arrays using delete[] to avoid memory leaks.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>


// Function template to calculate the sum of elements in a dynamic array
template <typename T>
T calculateSum(const T* arr, size_t N) {
    T sum = T();
    for (size_t i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function template to print out the elements in a dynamic array
template <typename T>
void print(const T* arr, size_t N){
    std::cout << "{ ";
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "}" << std::endl;
}


// Function template to input data into a dynamic array
template <typename T>
void inputArrayData(T* arr, size_t N){
    std::cout << "Enter " << N << " elemnts "<< std::endl;
    for (size_t i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
}

// This is the main function where the program execution starts.
int main() {

	size_t size = 5;
    // Create dynamic arrays of integers and doubles
    int* intArray = new int[size]{1, 2, 3, 4, 5};
    double* doubleArray = new double[size]{1.1, 2.2, 3.3, 4.4, 5.5};

    // Print out the intArray
    std::cout << "integers array:";
    print(intArray, size);
    // Calculate sum of integers in the dynamic array
    int intSum = calculateSum(intArray, size);
    std::cout << "Sum of integers: " << intSum << std::endl;

    // Print out the doubleArray
    std::cout << "doubles array:";
    print(doubleArray, size);
    // Calculate sum of doubles in the dynamic array
    double doubleSum = calculateSum(doubleArray, size);
    std::cout << "Sum of doubles: " << doubleSum << std::endl;

    // Don't forget to deallocate the memory
    delete[] intArray;
    delete[] doubleArray;

    return 0;
}
