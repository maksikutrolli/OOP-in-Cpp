/*
 *      Author: MaksiKutrolli
 */


#include <iostream>

int main() {
    // Standard input (cin) and standard output (cout)
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;

    // Standard error (cerr)
    // This is typically used for error messages and is unbuffered, so messages appear immediately.
    std::cerr << "This is an error message." << std::endl;

    // Standard log (clog)
    // Similar to cerr, but buffered, which means messages may not appear immediately.
    std::clog << "This is a log message." << std::endl;

    return 0;
}
