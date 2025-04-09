

#include <cctype>  // for isalpha, isupper, islower, toupper, tolower
#include <iostream>
#include <string>

int main() {
    std::string userInput;

    // While true learned from https://www.w3schools.com/cpp/cpp_while_loop.asp
    while (true) {
        std::cout << "Enter a letter (or type 'exit' to quit): ";
        std::cin >> userInput;

        // Exit condition. Break learned from https://www.w3schools.com/cpp/cpp_while_loop.asp
        if (userInput == "exit" || userInput == "EXIT" || userInput == "Exit") {
            std::cout << "Goodbye." << std::endl;
            break;
        }

        // Check for valid input (single letter) .length learned from https://www.w3schools.com/cpp/cpp_strings_length.asp isalpha learned from https://docs.vultr.com/cpp/standard-library/cctype/isalpha
        if (userInput.length() == 1 && std::isalpha(userInput[0])) {
            char letter = userInput[0];

            // Check uppercase. isupper learned from https://www.programiz.com/cpp-programming/library-function/cctype/isupper (tolower, toupper and islower all learned from progamiz)
            if (std::isupper(letter)) {
                std::cout << "The letter you have inputted is uppercase." << std::endl;
                std::cout << "The lowercase version is: " << (char)std::tolower(letter) << std::endl;
            }
            // Check lowercase islower and toupper learned from https://www.programiz.com/cpp-programming/library-function/cctype/islower
            else if (std::islower(letter)) {
                std::cout << "The letter you have inputted is lowercase." << std::endl;
                std::cout << "The uppercase version is: " << (char)std::toupper(letter) << std::endl;
            }

            // Alphabet half check tolower learned from https://www.programiz.com/cpp-programming/library-function/cctype/tolower
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
