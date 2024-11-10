// Ex 1

/*
    Finish the solution so that it sorts the passed in array of numbers. 
    If the function passes in an empty array or null/nil value then it should return an empty array.

    Example:
        sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}
        sortNumbers({}) // should return {}

*/
#include <iostream>
#include <vector>
#include <algorithm>

// Function
std::vector<int> sortArray(std::vector<int> inputArray) {
    
    // Sorts inplace
    std::sort(inputArray.begin(), inputArray.end());

    // // Checking results - can be removed
    // for (int value : inputArray) {
    //     std::cout << value << " ";
    // }

    // Return results
    return inputArray;
}

// Test
int main() {

    std::vector<int> testInputArray {2, 1, 0, 50, 25};

    sortArray(testInputArray);

    return 0;
}

