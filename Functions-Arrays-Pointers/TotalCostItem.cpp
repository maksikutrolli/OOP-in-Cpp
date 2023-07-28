/*
 *      Author: MaksiKutrolli
 */

//In this example we calculate the total cost of an item, including the tax and any applicable discount.
//This example showcases the benefits of employing functions to encapsulate specific calculations, resulting in
//a more readable and organized main program. Functions enable the breakdown of complex tasks into smaller,
//more manageable pieces, thereby enhancing the overall structure and efficiency of the program. By leveraging functions,
//updates or modifications related to total cost calculations can be easily implemented in the future. Additionally,
//the incorporation of default values for tax and discount percentages ensures greater user-friendliness and flexibility,
//accommodating scenarios where these values are not explicitly provided by the user.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to calculate the discount amount
double calculateDiscount(double price, double discountPercent = 0) {
    return price * (discountPercent / 100);
}

// Function to calculate the tax amount
double calculateTax(double price, double taxRate = 15) {
    return price * (taxRate / 100);
}

// Function to calculate the total cost
double calculateTotalCost(double price, double discountPercent = 0, double taxRate = 15) {
    double discount = calculateDiscount(price, discountPercent);
    double tax = calculateTax(price - discount, taxRate);
    return price - discount + tax;
}

// This is the main function where the program execution starts.
int main() {
    double price;

    // Prompt user to input product price
    std::cout << "Enter the product price: ";
    std::cin >> price;

    // Calculate the total cost using the functions with default arguments
    double totalCost = calculateTotalCost(price);

    // Display the result
    std::cout << "Total cost: " << totalCost << std::endl;

    return 0;
}
