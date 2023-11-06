/*
 *      Author: MaksiKutrolli
 */

#include "DynamicArray.h"

#include <iostream>

// Constructor implementation
DynamicArray::DynamicArray(int n) {
    size = n;
    arr = new int[size];
}

// Destructor implementation
DynamicArray::~DynamicArray() {
    delete[] arr; // Deallocate the memory pointed to by arr
}

// Function to display the array elements
void DynamicArray::display() {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


// Function to initialize the array elements
void DynamicArray::initialize() {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}

// Copy constructor implementation
DynamicArray::DynamicArray(const DynamicArray& other) {
    size = other.size;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

// Copy assignment operator implementation
DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
    if (this != &other) {
        // Deallocate the current dynamic memory
        delete[] arr;

        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

// Move Constructor
DynamicArray::DynamicArray(DynamicArray&& other){
	size = other.size;
	arr = other.arr;

    other.size = 0;
    other.arr = nullptr;
}

// Move Assignment Operator
DynamicArray& DynamicArray::operator=(DynamicArray&& other) {
    if (this == &other) {
        return *this;  // Self-assignment, no action needed
    }

    delete[] arr;

    size = other.size;
    arr = other.arr;
    other.size = 0;
    other.arr = nullptr;

    return *this;
}



