/*
 *      Author: MaksiKutrolli
 */


#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159265359;
    int age = 25;
    std::string name = "Alice";

    // Using std::setw to set field width and std::setfill to set fill character
    std::cout << std::setw(10) << std::setfill('-') << "Name:" << std::setw(15) << std::left << name << std::right << "Age:" << std::setw(5) << age << std::endl;

    // Using std::setprecision to set precision for floating-point number
    std::cout << "Pi with precision 2: " << std::setprecision(2) << pi << std::endl;

    // Reset precision to default
    std::cout << std::setprecision(6);

    return 0;
}
