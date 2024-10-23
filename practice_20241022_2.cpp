// Ex 2

/*
Complete the function that takes two integers (a, b, where a < b) 
and return an array of all integers between the input parameters, including them.

    For example:
        a = 1
        b = 4
        --> [1, 2, 3, 4]
*/
#include <iostream>
#include <vector>

// Function
std::vector<int> between(int start, int end) {

    // Vector that will be populated
    std::vector<int> output_vector = {};
    int i = start;

    for (i; i <= end; i++) {
        output_vector.push_back(i);
    }
    return output_vector;
}

// Test
int main() {

    // Test inputs
    int start = 2;
    int end = 10;
    std::vector<int> result;
    
    // Storing function output
    result = between(start, end);

    // Return results
    for (int value : result) {
        std::cout << value << " ";
    }

    return 0;
}