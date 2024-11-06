// Ex 3
/*
    You will be given an array and a limit value. 
    You must check that all values in the array are below or equal to the limit value. 
    If they are, return true. Else, return false.

    You can assume all values in the array are numbers.
*/

#include <iostream>
#include <vector>

// Function
bool arrayCheck(std::vector<int> inputArray, int limit) {

    int valueCheckArray;

    for (int value : inputArray) {
        if (value <= limit) {
            valueCheckArray += 1;
        }
    }

    if (valueCheckArray == inputArray.size()) {
        return true;
    }
    else {
        return false;
    }
}

// Test
int main() {

    std::vector<int> testArray = {1, 2, 3, 4, 8};
    int testLimit = 5;

    std::cout << arrayCheck(testArray, testLimit);

    return 0;
}
