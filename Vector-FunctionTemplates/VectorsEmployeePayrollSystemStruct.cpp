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

// Define the Employee struct
struct Employee {
    std::string name;
    double hoursWorked;
    double hourlyRate;
    double grossPay;
};

// Function to input employee information
void inputEmployeeData(std::vector<Employee>& employees, int numEmployees) {
    std::cout << "Enter the information for " << numEmployees << " employees:" << std::endl;
    for (int i = 0; i < numEmployees; i++) {
        Employee emp;
        std::cout << "Employee " << i + 1 << " Name: ";
        std::cin >> emp.name;
        std::cout << "Employee " << emp.name << " Hours: ";
        std::cin >> emp.hoursWorked;
        std::cout << "Employee " << emp.name << " Hourly Rate: $";
        std::cin >> emp.hourlyRate;

        // Calculate the gross pay for the employee
        emp.grossPay = emp.hoursWorked * emp.hourlyRate;

        // Add the employee to the vector
        employees.push_back(emp);
    }
}

// Function to display payroll summary
void displayPayrollSummary(const std::vector<Employee>& employees) {
    std::cout << "Payroll Summary:" << std::endl;
    for (const Employee& emp : employees) {
        std::cout << "Employee: " << emp.name << " | Gross Pay: $" << emp.grossPay << std::endl;
    }
}

// This is the main function where the program execution starts.
int main() {
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

    // Declare the vector of employees
    std::vector<Employee> employees;

    //Preallocation reduces the need for reallocation, improving efficiency
    employees.reserve(numEmployees);


    // Input employee information from the user
    inputEmployeeData(employees, numEmployees);

    // Display the payroll summary with employee names and their corresponding gross pay
    displayPayrollSummary(employees);

    return 0;
}
