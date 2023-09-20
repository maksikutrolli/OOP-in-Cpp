/*
 *      Author: MaksiKutrolli
 */


// Include the necessary input/output stream library
#include <iostream>

// Define a class named Car
class Car {
private:
    // Data members
    std::string brand{"Volkswagen"};
    std::string model="Polo";
    int year {2012};

public:
    // Member function to start the car's engine
    void startEngine() {
    	// Code to start the car's engine
    	std::cout << "start engine" << std::endl;
    }

    // Member function to accelerate the car
    void accelerate() {
    	// Code to accelerate the car
    	std::cout << "accelerate engine" << std::endl;
    }
};


