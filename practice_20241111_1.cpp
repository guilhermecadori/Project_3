// Ex 1
/*
    Create a function with two arguments that will return an array of the first n multiples of x.

    Assume both the given number and the number of times to count will be positive numbers greater than 0.

    Return the results as an array or list ( depending on language ).
    
    Examples
        x = 1, n = 10 --> [1,2,3,4,5,6,7,8,9,10]
        x = 2, n = 5  --> [2,4,6,8,10]
*/

#include <iostream>
#include <vector>

// Function
std::vector<int> firstMutiples(int number, int n_times) {

    // Define variables
    std::vector<int> outputArray {};
    int multiple;

    // Create multiples and adding them to the output array
    for (int n = 1; n <= n_times; n++) {
        multiple = number * n;
        outputArray.push_back(multiple);
    }

    // Return results
    return outputArray;

}

// Test
int main() {

    std::vector<int> testOutput;
    int number = 2;
    int n_test = 5;

    testOutput = firstMutiples(number, n_test);

    for (int value : testOutput) {
        std::cout << value << " ";
    }

    return 0;
}

