// Ex 1
/*
    Complete the function which converts hex number (given as a string) 
    to a decimal number.
*/

#include <iostream>
#include<string>
#include<vector>

// Function
int hexToDecimal(std::string hexString) {
    
    int decimalNumber;

    // Convert strings storing hexadecimal to decimal
    decimalNumber = std::stoi(hexString, nullptr, 16);
    
    return decimalNumber;
}

// Test
int main() {

    int result;

    std::vector<std::string> numberList = {"1A3F", "2E3H"};

    for (std::string number : numberList) {
        result = hexToDecimal(number);

        std::cout << "Result is: " << result << '\n';
    }

    return 0;
}