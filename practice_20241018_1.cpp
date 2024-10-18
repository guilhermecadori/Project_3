// Ex 1

/*
    Given an array of integers.

    Return an array, where the first element is the count of positives numbers 
    and the second element is sum of negative numbers. 0 is neither positive nor negative.

    If the input is an empty array or is null, return an empty array.
    
    Example
        For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

*/

#include <iostream>
#include <vector>

std::vector<int> countPositiveSumNegatives(std::vector<int> input) {

    std::vector <int> result_vector = {};
    int countPositive = 0;
    int sumNegative = 0;

    if (input.empty()) {
        // Do nothing and skip to the end
    }
    else { 
        for (int i : input) {
            if (i > 0) {
                countPositive ++;
            }
            else {
                sumNegative += i;
            }
        }
        result_vector.push_back(countPositive);
        result_vector.push_back(sumNegative);
    }
    return result_vector;
}


// Testing function
int main() {

    // Create var to store and output result
    // Create a test vector
    std::vector<int> result = {};
    std::vector<int> test_input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};

    // Run the function and store result
    result = countPositiveSumNegatives(test_input);

    // Create output statement
    for (const auto& elem : result) {
        std::cout << elem << " ";
    }
    
    return 0;
}

