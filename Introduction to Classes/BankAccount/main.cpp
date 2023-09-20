/*
 *      Author: MaksiKutrolli
 */

// Include the user-defined "BankAccount.h" header file.
#include "BankAccount.h"

// Define the main function, where the program execution begins
int main() {
    // Create an instance of the BankAccount class named "bankAccount1"
    BankAccount bankAccount1;

    // Deposit funds (30.5) into the "bankAccount1" using the "deposit" method
    bankAccount1.deposit(30.5);

    // Return 0 to indicate successful program execution
    return 0;
}
