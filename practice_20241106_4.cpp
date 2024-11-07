// Ex 4
/*
    Your task is to write a function which returns the sum of a sequence of integers. --> Ok
    The sequence is defined by 3 non-negative values: begin, end, step. --> Ok
    If begin value is greater than the end, your function should return 0. --> Ok
    If end is not the result of an integer number of steps, then don't add it to the sum. 
    See the 4th example below.

    Examples
        2,2,2 --> 2
        2,6,2 --> 12 (2 + 4 + 6)
        1,5,1 --> 15 (1 + 2 + 3 + 4 + 5)
        1,5,3  --> 5 (1 + 4)
*/

#include <iostream>
#include <vector>

// Function
int sequenceSum(int begin, int end, int step) {

    int sum = 0;
    int finalSum = 0;
    std::vector<int> sumVector;

    if (begin == end) {
        return begin;
    }
    else if (begin < end) {
        sum = begin;
        sumVector.push_back(sum);
        // std::cout << sum << '\n'; // Added this part for checking purposes
        while (sum < end) {
            sum += step;
            // std::cout << sum << '\n'; // Added this part for checking purposes
            sumVector.push_back(sum);
        }
    }
    else {
        return 0;
    }

    if (sumVector.back() > end) {
        sumVector.pop_back();
    }
 
    for (int value : sumVector) {
        finalSum += value;
    }    

    return finalSum;
}


// Test
int main() {

    int begin = 2, end = 2, step = 2;

    std::cout << sequenceSum(begin, end, step);

    return 0;
}