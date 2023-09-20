/*
 *      Author: MaksiKutrolli
 */

// Include the header file for the Car class
#include "Car.h"

// Define the main function, where the program execution begins
int main() {
    // Create car1 using the default constructor
    Car car1;

    // Create car2 using the parameterized constructor
    Car car2("Tesla", "X", 2022);

    // Create car3 using the copy constructor with car2 as the source
    Car car3(car2);

    // Create pCar1 using dynamic memory allocation with the default constructor
    Car* pCar1 = new Car;

    // Create pCar2 using dynamic memory allocation with the parameterized constructor
    Car* pCar2 = new Car("Tesla", "X", 2022);

    // Create an array of 20 cars using the default constructor
    Car carArray[20];

    // Start the engines for each car instance
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2->startEngine();
    carArray[0].startEngine();

    // Deallocate the dynamically allocated memory for pCar1 and pCar2
    delete pCar1;
    delete pCar2;

    return 0;
}
