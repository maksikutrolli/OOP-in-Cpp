/*
 *      Author: MaksiKutrolli
 */

//Example: Word guessing game using strings and vectors.

//In this example, the program randomly selects a secret word from a predefined list of words. The player attempts to
//guess the word by entering individual letters. The program checks the guessed letters and updates the displayed
//word accordingly. The game continues until the player either guesses the word correctly or runs out of attempts.
//This example combines the usage of strings, vectors, and string functions to create a simple word guessing game.

//We use a string to store the guessed letters

// Include necessary header files for input and output
#include <iostream>
// Include necessary header files for using string objects
#include <string>
// Include necessary header files for using vector containers
#include <vector>
// Include necessary header files for generating random numbers based on time
#include <ctime>
// Include necessary header files for using standard algorithms like std::find
#include <algorithm>

// Function to randomly select a word from the given list
std::string selectRandomWord(const std::vector<std::string>& words) {
	// Seed the random number generator with current time, so that the generated random numbers will be different
	// each time the program runs. This is important to create a more unpredictable sequence of random numbers.
	srand(time(0));

    return words[rand() % words.size()];
}

// Function to display the current state of the guessed word
void displayGuessedWord(const std::string& guessedWord) {
    std::cout << "Guess the word: " << guessedWord << std::endl;
}

// Function to display guessed letters
void displayGuessedLetters(const std::string& guessedLetters) {
    std::cout << "Guessed letters: ";
    for (size_t i = 0; i< guessedLetters.size();++i ) {
        std::cout << guessedLetters[i] << " ";
    }
    std::cout << std::endl;
}

// Function to check if a letter has been guessed
bool isLetterGuessed(char letter, const std::string& guessedLetters) {
    return guessedLetters.find(letter) != std::string::npos;
}

// Function to update the guessed word based on the guessed letter
void updateGuessedWord(char guess, const std::string& secretWord, std::string& guessedWord) {
    for (size_t i = 0; i < secretWord.length(); ++i) {
        if (secretWord[i] == guess) {
            guessedWord[i] = guess;
        }
    }
}

int main() {
    const std::vector<std::string> words = {"programming", "computer", "algorithm", "keyboard", "compiler"};
    std::string secretWord = selectRandomWord(words);
    std::string guessedWord(secretWord.length(), '*');

    int remainingAttempts = 6;
    std::string guessedLetters;

    while (remainingAttempts > 0 && guessedWord != secretWord) {
        displayGuessedWord(guessedWord);
        std::cout << "Remaining attempts: " << remainingAttempts << std::endl;
        displayGuessedLetters(guessedLetters);

        char guess;
        std::cout << "Enter a letter: ";
        std::cin >> guess;

        if (isLetterGuessed(guess, guessedLetters)) {
            std::cout << "You already guessed this letter." << std::endl;
            continue;
        }

        guessedLetters += guess;

        if (secretWord.find(guess) != std::string::npos) {
            updateGuessedWord(guess, secretWord, guessedWord);
            std::cout << "Correct guess!" << std::endl;
        } else {
            std::cout << "Incorrect guess." << std::endl;
            remainingAttempts--;
        }
    }

    if (guessedWord == secretWord) {
        std::cout << "Congratulations! You guessed the word: " << secretWord << std::endl;
    } else {
        std::cout << "Game over. The word was: " << secretWord << std::endl;
    }

    return 0;
}
