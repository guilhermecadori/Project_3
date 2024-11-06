// Ex 1
/*
    Description

    We need a function that can transform a string into a number. What ways of achieving this do you know?
    
    Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

    Examples
        "1234" --> 1234
        "605"  --> 605
        "1405" --> 1405
        "-7" --> -7
*/
#include <iostream>
#include <string>

// Function
int stringToInteger (std::string stringInput) {
    
    int numberOutput = std::stoi(stringInput);

    return numberOutput;
}


// Test
int main() {

    std::string stringInputTest = "12345";
    int result;

    result = stringToInteger(stringInputTest);

    std::cout << result;

    return 0;

}