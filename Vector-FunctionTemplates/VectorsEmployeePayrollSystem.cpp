/*
 *      Author: MaksiKutrolli
 */

//Example: Employee Payroll Management System

//In this example, we will create a program to manage employee payroll using vectors. The program will prompt the user
//to input employee details such as name, hours worked, and hourly rate. It will then calculate the gross
//pay for each employee and store the data in a vector. The program will also display a summary of the total
//payroll, including the total number of employees, total hours worked, and total payroll amount.

//The use of vectors allows for a flexible and optimized solution, as we can dynamically store and manage employee
//data without the need to predefine the size of the employee database. Vectors automatically handle memory allocation
//and resizing, making it easy to add or remove employees as needed. Additionally, we can efficiently iterate through
//the vector to calculate and display the payroll summary.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
#include <vector>

// Function to input employee names
void inputEmployeeNames(std::vector<std::string>& employeeNames, int numEmployees) {
    std::cout << "Enter the names of " << numEmployees << " employees:" << std::endl;
    for (int i = 0; i < numEmployees; i++) {
        std::string name;
        std::cout << "Employee " << i + 1 << " Name: ";
        std::cin >> name;
        employeeNames.push_back(name);
    }
}

// Function to input employee hours worked
void inputEmployeeHours(std::vector<double>& employeeHoursWorked, const std::vector<std::string>& employeeNames) {
    std::cout << "Enter the hours worked for each employee:" << std::endl;
    for (size_t i = 0; i < employeeNames.size(); i++) {
        double hours;
        std::cout << "Employee " << employeeNames[i] << " Hours: ";
        std::cin >> hours;
        employeeHoursWorked.push_back(hours);
    }
}

// Function to input employee hourly rates
void inputEmployeeRates(std::vector<double>& employeeHourlyRates, const std::vector<std::string>& employeeNames) {
    std::cout << "Enter the hourly rates for each employee:" << std::endl;
    for (size_t i = 0; i < employeeNames.size(); i++) {
        double rate;
        std::cout << "Employee " << employeeNames[i] << " Hourly Rate: $";
        std::cin >> rate;
        employeeHourlyRates.push_back(rate);
    }
}

// Function to calculate employee gross pay
std::vector<double> calculateGrossPay(const std::vector<double>& employeeHoursWorked, const std::vector<double>& employeeHourlyRates) {
    std::vector<double> employeeGrossPay;
    for (size_t i = 0; i < employeeHoursWorked.size(); i++) {
        double grossPay = employeeHoursWorked[i] * employeeHourlyRates[i];
        employeeGrossPay.push_back(grossPay);
    }
    return employeeGrossPay;
}

// Function to display payroll summary
void displayPayrollSummary(const std::vector<std::string>& employeeNames, const std::vector<double>& employeeGrossPay) {
    std::cout << "Payroll Summary:" << std::endl;
    for (size_t i = 0; i < employeeNames.size(); i++) {
        std::cout << "Employee: " << employeeNames[i] << " | Gross Pay: $" << employeeGrossPay[i] << std::endl;
    }
}


// This is the main function where the program execution starts.
int main() {
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

    // Declare and reserve memory for vectors
    std::vector<std::string> employeeNames;
    std::vector<double> employeeHoursWorked;
    std::vector<double> employeeHourlyRates;

    //Preallocation reduces the need for reallocation, improving efficiency
	employeeNames.reserve(numEmployees);
	employeeHoursWorked.reserve(numEmployees);
	employeeHourlyRates.reserve(numEmployees);


    // Input employee names from the user
    inputEmployeeNames(employeeNames, numEmployees);

    // Input hours worked by each employee based on their names
    inputEmployeeHours(employeeHoursWorked, employeeNames);

    // Input hourly rates for each employee based on their names
    inputEmployeeRates(employeeHourlyRates, employeeNames);

    // Calculate gross pay for each employee using hours worked and hourly rates
    std::vector<double> employeeGrossPay = calculateGrossPay(employeeHoursWorked, employeeHourlyRates);

    // Display the payroll summary with employee names and their corresponding gross pay
    displayPayrollSummary(employeeNames, employeeGrossPay);

    return 0;
}
