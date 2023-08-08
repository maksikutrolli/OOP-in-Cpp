/*
 *      Author: MaksiKutrolli
 */

//Example: Text manipulation tasks related to searching and replacing

//In this example, we define a replaceAll function that takes a string, a search string, and a replace string.
//The function replaces all occurrences of the search string with the replace string. The main function then uses
//this function to modify a sentence based on user input for the search and replacement words. This example demonstrates
//how the std::string class can be used for efficient text manipulation tasks.

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>
//Include the necessary library for using std::string.
#include <string>

// Function to replace all occurrences of a substring in a string
void replaceAll(std::string& str, const std::string& search, const std::string& replace) {
    size_t pos = 0;
    while ((pos = str.find(search, pos)) != std::string::npos) {
        str.replace(pos, search.length(), replace);
        pos += replace.length();
    }
}

int main() {
    // Input a sentence
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    // Input the word to search and replace
    std::string searchWord, replaceWord;
    std::cout << "Enter the word to search: ";
    std::cin >> searchWord;
    std::cout << "Enter the word to replace with: ";
    std::cin >> replaceWord;

    // Replace all occurrences of the search word with the replace word
    replaceAll(sentence, searchWord, replaceWord);

    // Display the modified sentence
    std::cout << "Modified Sentence: " << sentence << std::endl;

    return 0;
}
