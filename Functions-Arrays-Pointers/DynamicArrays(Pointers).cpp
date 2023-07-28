/*
 *      Author: MaksiKutrolli
 */

//In this example, we explore the use of dynamic arrays and pointers to create and resize arrays during runtime,
//allowing greater flexibility in handling varying amounts of data. Functions are employed to encapsulate the array creation,
//display, and reallocation processes, promoting code modularity and readability. Unlike static arrays, dynamic arrays
//facilitate resizing, making them suitable for scenarios where the size of the array may change during program execution.
//
//The example demonstrates the benefits of using pointers and dynamic memory allocation to manage data efficiently,
//ensuring memory is deallocated when no longer needed to prevent memory leaks.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to create a dynamic array with the given size and populate it with user input
int* createDynamicArray(int size) {
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }

    return arr;
}

// Function to display the elements of a dynamic array
void displayDynamicArray(int* arr, int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to reallocate a bigger array and copy elements from the old array
int* reallocateDynamicArray(int* oldArr, int oldSize, int newSize) {
    int* newArr = new int[newSize];

    // Copy the elements from the old array to the new array
    for (int i = 0; i < oldSize; i++) {
        newArr[i] = oldArr[i];
    }

    return newArr;
}

// This is the main function where the program execution starts.
int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;

    int* arr = createDynamicArray(size);
    displayDynamicArray(arr, size);

    int newSize;
    std::cout << "Enter the new size of the array: ";
    std::cin >> newSize;

    int* newArr = reallocateDynamicArray(arr, size, newSize);
    delete[] arr; // Deallocate the old array
    arr = newArr; // Update the pointer to the new array

    // Populate the remaining elements of the new array
    for (int i = size; i < newSize; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }

    displayDynamicArray(arr, newSize);

    // Don't forget to deallocate the memory
    delete[] arr;

    return 0;
}
