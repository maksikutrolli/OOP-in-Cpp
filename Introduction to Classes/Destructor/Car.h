/*
 *      Author: MaksiKutrolli
 */


// Include the necessary library for input and output
#include <iostream>

// Define a class named "Car"
class Car {
private:
    std::string brand{"Volkswagen"}; // Default brand
    std::string model = "Polo";      // Default model
    int year{2012};                 // Default year

public:

    // Destructor: Called when the object is destroyed
    ~Car(){
    	std::cout << "Object is destroyed" << std::endl;
    }

    // Default constructor
    Car(){
    }

    // Parameterized Constructor: Set brand, model, and year when the object is created
    Car(std::string b, std::string m, int y){
    	brand = b;
    	model = m;
    	year = y;
    }

    // Copy Constructor: Create a copy of another Car object
    Car(const Car & other){
    	brand = other.brand;
    	model = other.model;
    	year = other.year + 1; // Increment the year by 1
    }

    // Member function to start the car's engine
    void startEngine() {
        // Code to start the car's engine
    	std::cout << "start engine" << "{brand:" << brand << "|model:" << model << "}" << std::endl;
    }

    // Member function to accelerate the car
    void accelerate() {
        // Code to accelerate the car
    	std::cout << "accelerate engine" << "{brand:" << brand << "|model:" << model << "}" << std::endl;
    }
};

