/*
 *      Author: MaksiKutrolli
 */

#include "DynamicArray.h"

#include <utility>

int main() {
    DynamicArray myArray(5); // Create an array of size 5

    // Fill the array with values
    myArray.initialize();

    //Display the array
    myArray.display();

    // Copy Constructor (Rule of Five)
     DynamicArray arr2 = myArray;

     // Copy Assignment Operator (Rule of Five)
     DynamicArray arr3(3);
     arr3 = myArray;

     // Move Constructor (Rule of Five)
     DynamicArray arr4 = std::move(myArray);

     // Move Assignment Operator (Rule of Five)
     DynamicArray arr5(4);
     arr5 = std::move(arr2);

    // When myArray goes out of scope, its destructor is automatically called,
    // which releases the dynamically allocated memory.
    // This prevents memory leaks.
    return 0;
}
