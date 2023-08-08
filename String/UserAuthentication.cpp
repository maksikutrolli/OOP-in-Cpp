/*
 *      Author: MaksiKutrolli
 */

//Example: User authentication.

//In this example, we use the std::string class to store the username and password. The user is prompted to enter their
//credentials, and we compare the entered values with the stored credentials. If they match, a successful login message
//is displayed; otherwise, an error message is shown. This illustrates how strings can be used for real-world tasks like
//user authentication.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
//Include the necessary library for using std::string.
#include <string>

// Function to get input from the user
std::string getUserInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

// Function to authenticate the user
bool authenticateUser(const std::string& inputUsername, const std::string& inputPassword,
                      const std::string& storedUsername, const std::string& storedPassword) {
    return inputUsername == storedUsername && inputPassword == storedPassword;
}

// Function to display the login result
void displayLoginResult(bool isAuthenticated, const std::string& username) {
    if (isAuthenticated) {
        std::cout << "Login successful! Welcome, " << username << "!" << std::endl;
    } else {
        std::cout << "Login failed. Incorrect username or password." << std::endl;
    }
}

int main() {
    // Simulated database with stored credentials
    std::string storedUsername = "user123";
    std::string storedPassword = "password123";

    // Input username and password
    std::string inputUsername = getUserInput("Username: ");
    std::string inputPassword = getUserInput("Password: ");

    // Authenticate the user
    bool isAuthenticated = authenticateUser(inputUsername, inputPassword, storedUsername, storedPassword);

    // Display the login result
    displayLoginResult(isAuthenticated, storedUsername);

    return 0;
}
