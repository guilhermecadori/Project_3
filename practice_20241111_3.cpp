// Ex 3
/*
Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)
    "4",  "5" --> "9"
    "34", "5" --> "39"
    "", "" --> "0"
    "2", "" --> "2"
    "-5", "3" --> "-2"
Notes:
    If either input is an empty string, consider it as zero.
    Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)
*/

#include <iostream>
#include <string>

// Function
std::string stringSumNumber(std::string number1, std::string number2) {

    std::string stringSum = "0";

    if (!number1.empty() & !number2.empty() ) {
        int intNumber1 = std::stoi(number1);
        int intNumber2 = std::stoi(number2);
        int sum = intNumber1 + intNumber2;
        stringSum = std::to_string(sum);
    }
        
    return stringSum;
}


// Test
int main() {

    std::string number1Test = "2";
    std::string number2Test = "6";
    
    std::cout << stringSumNumber(number1Test, number2Test);

    return 0;
}


