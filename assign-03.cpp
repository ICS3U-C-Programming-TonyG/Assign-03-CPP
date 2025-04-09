

#include <cctype>  // for isalpha, isupper, islower, toupper, tolower
#include <iostream>
#include <string>

int main() {
    std::string userInput;

    while (true) {
        std::cout << "Enter a letter (or type 'exit' to quit): ";
        std::cin >> userInput;

        // Exit condition. 
        if (userInput == "exit" || userInput == "EXIT" || userInput == "Exit") {
            std::cout << "Goodbye." << std::endl;
            break;
        }

        // Check for valid input (single letter) 
        if (userInput.length() == 1 && std::isalpha(userInput[0])) {
            char letter = userInput[0];

            // Check uppercase 
            if (std::isupper(letter)) {
                std::cout << "The letter you have inputted is uppercase." << std::endl;
                std::cout << "The lowercase version is: " << (char)std::tolower(letter) << std::endl;
            }
            // Check lowercase
            else if (std::islower(letter)) {
                std::cout << "The letter you have inputted is lowercase." << std::endl;
                std::cout << "The uppercase version is: " << (char)std::toupper(letter) << std::endl;
            }

            // Alphabet half check 
            if (std::tolower(letter) <= 'm') {
                std::cout << "This letter is in the first half of the alphabet." << std::endl;
            } else {
                std::cout << "This letter is in the second half of the alphabet." << std::endl;
            }
        } else {
            std::cout << "Invalid input, please enter a single alphabetical letter." << std::endl;
        }
    }

}
