// Ex 1
/*
    We want to generate a function that computes the series 
    starting from 0 and ending until the given number.

    Example:
        Input:6
        Output: 0+1+2+3+4+5+6 = 21

        Input: -15
        Output: -15<0

        Input: 0
        Output: 0=0
*/

#include <iostream>
#include <string>

// Function
std::string computeSeries(int nSize) {
    // Initial input check
    if (nSize == 0){
        return "0=0";
    } else if (nSize < 0) {
        return std::to_string(nSize) + "<0";
    }

    int seriesSum = 0;
    std::string outputString;

    for (int i = 0; i <= nSize; i++) {
        outputString += std::to_string(i) + '+';
        seriesSum += i;
    }

    outputString.resize(size(outputString) - 1);
    outputString += "=" + std::to_string(seriesSum);

    return outputString;
}

// Test
int main() {
    int nSizeTest = -15;
    std::string result;

    result = computeSeries(nSizeTest);

    std::cout << "Result: " << result;

    return 0;
}

