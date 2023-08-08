/*
 *      Author: MaksiKutrolli
 */

//Example: Contact Management System.

//In this example, we've built a basic Contact Management System in C++ that employs the Contact struct
//to store name and phone number information. The program enables users to add new contacts and search
//for existing ones through a user-friendly menu interface. The implementation incorporates essential
//string functions like find to detect substrings in contact names, and std::tolower to perform
//case-insensitive comparisons during contact searches. The searchContact function utilizes these functions
//to efficiently locate matching contacts.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
//Include the necessary library for using std::string.
#include <string>

#include <vector>

struct Contact {
    std::string name;
    std::string phoneNumber;
};

// Function to add a new contact
void addContact(std::vector<Contact>& contacts) {
    Contact newContact;

    std::cin.ignore(); // Clear newline from buffer

    std::cout << "Enter name: ";
    std::getline(std::cin, newContact.name);

    std::cout << "Enter phone number: ";
    std::cin >> newContact.phoneNumber;

    contacts.push_back(newContact);
    std::cout << "Contact added successfully!\n";
}


bool isSubstring(const std::string& str, const std::string& sub) {
    return str.find(sub) != std::string::npos;
}

bool isEqualIgnoreCase(const std::string& str1, const std::string& str2) {
    if (str2.size() > str1.size()) {
        return false;
    }

    for (size_t i = 0; i < str2.size(); ++i) {
        if (std::tolower(str2[i]) != std::tolower(str1[i])) {
            return false;
        }
    }

    return true;
}

void displayContact(const Contact* contact) {

    if(contact == nullptr){
    	std::cout<< "Contact not found.\n";
    }
    else{
    	std::cout << "-------------------\n";
		std::cout << "Name: " << contact->name << "\n";
		std::cout << "Phone: " << contact->phoneNumber << "\n";
		std::cout << "-------------------\n";
    }
}


// Function to search for a contact by name
const Contact* searchContact(const std::vector<Contact>& contacts, const std::string& searchQuery) {
    const Contact * contactPtr = nullptr;

    for (const Contact& contact : contacts) {
        if (isSubstring(contact.name, searchQuery) || isEqualIgnoreCase(contact.name, searchQuery)) {
        	contactPtr = &contact;
        	return contactPtr;
        }
    }
    return contactPtr;

}



int main() {
    std::vector<Contact> contacts = {
        {"John Wick", "123456"},
        {"Jane Smith", "789012"},
        {"Michael Johnson", "345678"}
    };

    while (true) {
        std::cout << "\nContact Management System\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Search Contact\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose an option: "<<std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            addContact(contacts);
        } else if (choice == 2) {
            std::cout << "Enter search query: "<<std::endl;
            std::string query;
            std::cin >> query;
           	displayContact(searchContact(contacts, query));
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
