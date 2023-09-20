/*
 *      Author: MaksiKutrolli
 */


// Include the necessary library for input/output operations
#include <iostream>

// Define a class named "Car"
class Car {
private:
    // Private data members to store car details
    std::string brand{"Volkswagen"};
    std::string model = "Polo";
    int year{2012};

public:
    // Default constructor
    Car() {
        // Constructor code
    }

    // Parameterized Constructor
    Car(std::string b, std::string m, int y) {
        // Constructor with parameters to initialize car details
        brand = b;
        model = m;
        year = y;
    }

    // Copy Constructor
    Car(const Car& other) {
        // Copy constructor to create a new car from an existing one
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    // Method to start the car's engine
    void startEngine() {
        std::cout << "Starting the engine of car {brand:" << brand << "|model:" << model << "}" << std::endl;
    }

    // Method to accelerate the car
    void accelerate() {
        std::cout << "Accelerating the car {brand:" << brand << "|model:" << model << "}" << std::endl;
    }
};

