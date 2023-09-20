/*
 *      Author: MaksiKutrolli
 */


// Include the standard input/output stream library.
#include <iostream>

// Define a User class with private data members for username and password.
class User {
private:
    std::string username;
    std::string password;

public:
    // Constructor for creating a User object with an initial username and password.
    User(const std::string& uname, const std::string& pwd){
        // Initialize the private data members with the provided values.
        username = uname;
        password = pwd;
    }

    // Define a member function for attempting a login with provided credentials.
    // It takes inputUser and inputPwd as parameters and returns a boolean indicating success.
    bool login(const std::string& inputUser, const std::string& inputPwd) const {
        // Check if the input username and password match the stored values.
        return (inputUser == username) && (inputPwd == password);
    }

    // Define a member function for updating the user's password.
    // It takes newPwd as a parameter and updates the stored password.
    void updatePassword(const std::string& newPwd) {
        // Update the password with the provided new password.
        password = newPwd;
    }
};
