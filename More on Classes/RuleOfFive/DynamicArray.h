/*
 *      Author: MaksiKutrolli
 */
#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

class DynamicArray {
private:
    int* arr; // Pointer to dynamic integer array
    int size; // Size of the array

public:
    // Constructor to initialize the dynamic array
    DynamicArray(int n);

    // Destructor to release dynamic memory
    ~DynamicArray();

    // Function to display the array elements
    void display();

    void initialize() ;

    // Copy constructor
    DynamicArray(const DynamicArray& other);

    // Copy assignment operator
    DynamicArray& operator=(const DynamicArray& other);

    // Move Constructor
    DynamicArray(DynamicArray&& other);

    // Move Assignment Operator
    DynamicArray& operator=(DynamicArray&& other);

};

#endif /* DYNAMICARRAY_H_ */
