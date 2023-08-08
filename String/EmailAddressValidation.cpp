/*
 *      Author: MaksiKutrolli
 */

//Example: Validating email addresses using the std::string class and its functions

//In this example, we define a function isValidEmail that takes an email address as input and performs various checks to
//determine its validity. We use the std::string member functions find to locate specific characters (like "@" and "."),
//and the length function to get the length of the string. By combining these string functions, we can validate the email
//address format according to common rules.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
//Include the necessary library for using std::string.
#include <string>

bool isValidEmail(const std::string& email) {
    // Check for the presence of "@" symbol
    std::size_t atPos = email.find('@');
    if (atPos == std::string::npos) {
        return false;
    }

    // Check for at least one character before and after the "@" symbol
    if (atPos == 0 || atPos == email.length() - 1) {
        return false;
    }

    // Check for the presence of "." after "@" symbol
    std::size_t dotPos = email.find('.', atPos);
    if (dotPos == std::string::npos || dotPos == atPos + 1) {
        return false;
    }

    // Check for the presence of at least one character after the last "."
    if (dotPos == email.length() - 1) {
        return false;
    }

    return true;
}

int main() {
    std::string email;

    std::cout << "Enter an email address: ";
    std::cin >> email;

    if (isValidEmail(email)) {
        std::cout << "Valid email address." << std::endl;
    } else {
        std::cout << "Invalid email address." << std::endl;
    }

    return 0;
}
