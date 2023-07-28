/*
 *      Author: MaksiKutrolli
 */

//In this example, we utilize static arrays to store data with a fixed size determined at compile-time.
//Although static arrays are straightforward and easy to use, their fixed size limitation can pose challenges when
//dealing with varying amounts of data. 

//Static arrays are stored in the stack memory of the program. When a static array is declared, memory is allocated for it
//during the program's compilation phase, and this memory remains reserved throughout the program's execution (the memory 
//allocated for static arrays is automatically deallocated when the scope in which the array was declared ends, such as when 
//the function containing the array returns). The size of the static array is known at compile-time, which means it cannot 
//be resized or dynamically changed during runtime.
//

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to populate a static array with user input
void populateStaticArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }
}

// Function to display the elements of a static array
void displayStaticArray(int arr[], int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// This is the main function where the program execution starts.
int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;

    int arr[size]; // Static array with fixed size

    populateStaticArray(arr, size);
    displayStaticArray(arr, size);

    int newSize;
    std::cout << "Enter the new size of the array: ";
    std::cin >> newSize;

    // Resizing not possible for static arrays

    return 0;
}
