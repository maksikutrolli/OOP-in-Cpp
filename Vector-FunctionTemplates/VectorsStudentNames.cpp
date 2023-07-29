/*
 *      Author: MaksiKutrolli
 */

//Example: Student Names Tracker using Vectors

//In this example, we utilize a vector named "students" to dynamically store the names of students.
//The program starts by prompting the user to input the number of students they wish to enter.
//Then, the inputStudentNames function is employed to gather and add each student's name to the vector using
//the push_back function. The displayStudentNames function is responsible for presenting the list of student
//names using a range-based for loop. By utilizing functions for input and output, the program becomes more
//organized, easier to maintain, and allows for efficient dynamic memory allocation for the vector.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
#include <vector>
#include <string>

// Function to input student names into the vector
void inputStudentNames(std::vector<std::string>& students, int numStudents) {
    std::cout << "Enter the names of " << numStudents << " students:" << std::endl;
    for (int i = 0; i < numStudents; i++) {
        std::string name;
        std::cin >> name;
        students.push_back(name);
    }
}

// Function to display student names from the vector
void displayStudentNames(const std::vector<std::string>& students) {
    std::cout << "List of students:" << std::endl;
    for (const auto& student : students) {
        std::cout << student << std::endl;
    }
}

// This is the main function where the program execution starts.
int main() {
    // Prompt the user to input the number of students
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Declare Students vector
    std::vector<std::string> students;

    // //Preallocation reduces the need for reallocation, improving efficiency
    students.reserve(numStudents);

    // Input student names and store them in the vector
    inputStudentNames(students, numStudents);

    // Display the list of student names
    displayStudentNames(students);

    return 0;
}
