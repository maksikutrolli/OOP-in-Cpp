/*
 *      Author: MaksiKutrolli
 */

//Example: Formatting and correcting the capitalization of names using the std::string class and its functions.

//In this example, we define a function formatName that takes a name as input and formats it with the first character
//in uppercase and the remaining characters in lowercase. We use the std::toupper and std::tolower functions from the
//<cctype> header to perform the character conversions.
//
//This example showcases how string functions and standard library functions can be combined to perform common
//operations on strings, such as formatting and capitalization correction.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
//Include the necessary library for using std::string.
#include <string>

// For std::toupper and std::tolower functions
#include <cctype>

std::string formatName(const std::string& name) {
    std::string formattedName = name;

    // Convert the first character to uppercase
    formattedName[0] = std::toupper(formattedName[0]);

    // Convert remaining characters to lowercase
    for (size_t i = 1; i < formattedName.length(); i++) {
        formattedName[i] = std::tolower(formattedName[i]);
    }

    return formattedName;
}

int main() {
    std::string firstName, lastName;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Format and correct the capitalization of names
    std::string formattedFirstName = formatName(firstName);
    std::string formattedLastName = formatName(lastName);

    std::cout << "Formatted Name: " << formattedFirstName << " " << formattedLastName << std::endl;

    return 0;
}
