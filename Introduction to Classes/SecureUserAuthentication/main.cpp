/*
 *      Author: MaksiKutrolli
 */

// Include the "User.h" header file.
#include "User.h"

// Define the main function, where the program execution begins.
int main(){

    // Create an instance of the User class named user1 with the provided username and password.
    User user1("userName123", "password123");

    // Attempt to log in using a different username and password.
    bool success = user1.login("userName1234", "password123");

    // Check if the login attempt was successful.
    if (success){
        // Display a message indicating successful login.
        std::cout << "User logged in successfully!" << std::endl;
    }
    else{
        // Display a message indicating a failed login attempt.
        std::cout << "Login failed. Please check your credentials and try again." << std::endl;
    }

    // Return 0 to indicate successful program execution.
    return 0;
}
