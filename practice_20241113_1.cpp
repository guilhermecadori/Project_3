// Ex 1
/*
    In this kata you are required to, given a string, replace every letter with its position in the alphabet.

    If anything in the text isn't a letter, ignore it and don't return it.

    "a" = 1, "b" = 2, etc.
    Example

    Input = "The sunset sets at twelve o' clock."
    Output = "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"
              20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 25 5 12 22 5 15 3 12 15 3 11 
*/

#include <iostream>
#include <string>
#include <cctype>

// Function
std::string charAlphabetPosition(const std::string& inputString) {

    // Support variable
    std::string alphabet = "abcdefghijklmnopqrstuvxywz";
    std::string inputStringLower;
    std::string outputString;
    std::string positionString;
    
    for (char letter : inputString) {
        inputStringLower += std::tolower(letter);
    }

    for (char letter : inputStringLower) {
        if (alphabet.find(letter) != std::string::npos) {
            positionString = std::to_string(alphabet.find(letter) + 1);
            outputString += positionString + ' ';
        }
    }
    
    outputString.pop_back();

    return outputString;
}

/*

// Version for better memory use 

std::string alphabet_position(const std::string &text) {
    std::string outputString;

    for (char letter : text) {
        if (std::isalpha(letter)) {
            int position = std::tolower(letter) - 'a' + 1; // Calculate alphabet position directly
            outputString += std::to_string(position) + ' ';
        }
    }

    if (!outputString.empty()) {
        outputString.pop_back(); // Remove the last space
    }

    return outputString;
}
*/

// Test
int main() {

    std::string inputTest = "The sunset sets at twelve o' clock.";
    std::string result;

    result = charAlphabetPosition(inputTest);

    std::cout << result;

    return 0;
}


