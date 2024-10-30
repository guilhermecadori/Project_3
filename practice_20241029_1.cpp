// Ex 1
/*
    Given a string, you have to return a string in which each character (case-sensitive) is repeated once.
    
    Examples (Input -> Output):
        - "String"      -> "SSttrriinngg"
        - "Hello World" -> "HHeelllloo  WWoorrlldd"
        - "1234!_ "     -> "11223344!!__  "
*/

#include <iostream>
#include <string>

// Function
std::string double_char(const std::string& str) {

    // Support variables
    std::string outputString;

    // Operation
    for (char letter : str) {
        outputString.push_back(letter);
        outputString.push_back(letter);
    }

    // Return result
    return outputString;
}

// Test
int main() {

    // Test cases
    std::string string1 = "String";
    std::string string2 = "Hello World";
    std::string result1;
    std::string result2;

    // Testing function
    result1 = double_char(string1);
    result2 = double_char(string2);

    // Return results
    std::cout << "Result 1: " << result1 << '\n';
    std::cout << "Result 2: " << result2;
}