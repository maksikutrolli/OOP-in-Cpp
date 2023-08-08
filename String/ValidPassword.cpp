/*
 *      Author: MaksiKutrolli
 */

//Example: Password Validation Using String Functions.

//In this example, we define a function isValidPassword that takes a string as input and checks if the password meets
//the specified criteria. The criteria include having a minimum length of 8 characters, containing at least one uppercase letter,
//one lowercase letter, and one digit. The std::isupper, std::islower, and std::isdigit functions from the <cctype> header
//are used to check character types. The main program prompts the user to enter a password and then validates it using the
//isValidPassword function. This illustrates how strings can be effectively utilized for input validation scenarios.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
//Include the necessary library for using std::string.
#include <string>

#include <cctype>

bool isValidPassword(const std::string& password) {
    if (password.length() < 8) {
        return false;  // Password is too short
    }

    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;

    for (char ch : password) {
        if (std::isupper(ch)) {
            hasUppercase = true;
        } else if (std::islower(ch)) {
            hasLowercase = true;
        } else if (std::isdigit(ch)) {
            hasDigit = true;
        }
    }

    return hasUppercase && hasLowercase && hasDigit;
}

int main() {
    std::string password;
    std::cout << "Enter a password: ";
    std::cin >> password;

    if (isValidPassword(password)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "Password is invalid." << std::endl;
    }

    return 0;
}
