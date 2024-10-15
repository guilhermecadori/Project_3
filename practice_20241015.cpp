// Ex 1

/*
    Complete the square sum function so that it squares each number passed 
    into it and then sums the results together.

    For example:
        - for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9
*/

#include <iostream>
#include <vector>
#include <cmath>

int square_sum(const std::vector<int>& numbers) {

    int sum_sq = 0;

    for (int val : numbers) {
        val = val * val;
        sum_sq += val;
    }

    return sum_sq;
}

// Testing 
int main() {

    int result;
    std::vector<int> vec = {1, 2, 3};

    result = square_sum(vec);

    std::cout << "Sum of squares is: " << result << std::endl;

    return 0;
}
