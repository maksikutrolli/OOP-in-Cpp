/*
 *      Author: MaksiKutrolli
 */

// Include the user-defined Car class header
#include "Car.h"

// Define the main function, where the program execution begins
int main(){
    // Create a Car object using the default constructor
    Car car1;

    // Create a Car object using the parameterized constructor with specified values
    Car car2("Tesla", "X", 2022);

    // Create a Car object using the copy constructor with the values from car2
    Car car3(car2);

    // Call the startEngine method for car1
    car1.startEngine();

    // Call the startEngine method for car2
    car2.startEngine();

    // Call the startEngine method for car3
    car3.startEngine();

    // The destructor will be automatically called when car1, car2, and car3 go out of scope

    return 0;
}
