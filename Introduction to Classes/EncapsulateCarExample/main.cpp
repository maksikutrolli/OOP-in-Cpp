
/*
 *      Author: MaksiKutrolli
 */


// Include the user-defined "Car.h" header file.
#include "Car.h"

// Define the main function, where the program execution begins
int main(){
    // Create an instance of the Car class named car1.
    Car car1;

    // Call the startEngine member function of car1, which starts the car's engine.
    car1.startEngine();

    // Call the accelerate member function of car1, which accelerates the car.
    car1.accelerate();

    // Return 0 to indicate successful program execution.
    return 0;
}
