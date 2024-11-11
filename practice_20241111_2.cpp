// Ex 2
/*
    Given a string str, reverse it and omit all non-alphabetic characters.
    
    Example
        For str = "krishan", the output should be "nahsirk".
        For str = "ultr53o?n", the output should be "nortlu".
    
    Input/Output
        [input] string str

    A string consists of lowercase latin letters, digits and symbols.
        [output] a string
*/

#include <iostream>
#include <string>
#include <algorithm>

// Functiom
std::string reverseLettersOnly(const std::string &inputString) {

    // Create variables
    std::string supportString;
    std::string reversedString;
    std::string alphabet = "abcdefghijklmnoprstuvxywz";

    // Remove any non-letter character
    for (char letter : inputString) {
        if (alphabet.find(letter) != std::string::npos) {
            supportString += letter;
        }
    }

    // Reverse string
    for (int i = supportString.size(); i >= 0; i--) {
        reversedString += supportString[i];
    }

    // Return results
    return reversedString; 
}


// Test
int main() {

std::string testString = "hello *** world!    111";
std::string result;

result = reverseLettersOnly(testString);

std::cout << result;

return 0;

}


