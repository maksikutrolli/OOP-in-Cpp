//Example: Generic Vector using Function Templates

//In this example, we will create a function template to calculate the sum of elements in a vector of any data type.
//This demonstrates the power and flexibility of function templates, allowing us to create a single function that
//can handle various data types without the need for multiple function overloads.


//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Include the necessary library for using std::vector.
#include <vector>

// Function template to calculate the sum of elements in a vector
template <typename T>
T calculateSum(const std::vector<T>& vec) {
    T sum = T();
    for (const T& element : vec) { // const auto& deduces to const T&
        sum += element;
    }
    return sum;
}

// Function template to print out the elements in a vector
template <typename T>
void print(const std::vector<T>& vec) {
    std::cout << "{ ";
    for (const T& element : vec) { // const auto& deduces to const T&
        std::cout << element << " ";
    }
    std::cout << "}" << std::endl;
}

 This is the main function where the program execution starts.
int main() {

    // Create vectors of integers and doubles
    std::vector<int> intVector = {1, 2, 3, 4, 5};
    std::vector<double> doubleVector = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Print out the intVector
    std::cout << "integers vector:";
    print(intVector);
    // Calculate sum of integers in the vector
    int intSum = calculateSum(intVector);
    std::cout << "Sum of integers: " << intSum << std::endl;

    // Print out the doubleVector
    std::cout << "doubles vector:";
    print(doubleVector);
    // Calculate sum of doubles in the vector
    double doubleSum = calculateSum(doubleVector);
    std::cout << "Sum of doubles: " << doubleSum << std::endl;

    return 0;
}
