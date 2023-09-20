/*
 *      Author: MaksiKutrolli
 */

// Definition of the BankAccount class
class BankAccount {
private:
    double balance = 0.0; // Private member variable to store the account balance

public:
    // Public methods for controlled access

    // Method to deposit funds into the account
    void deposit(double amount) {
        balance += amount; // Increase the balance by the deposited amount
    }

    // Method to withdraw funds from the account
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount; // Decrease the balance if sufficient funds are available
        }
    }
};


