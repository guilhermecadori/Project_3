// Ex 1
/*
    Ben has a very simple idea to make some profit: he buys something and sells it again. Of course, 
    this wouldn't give him any profit at all if he was simply to buy and sell it at the same price. 
    Instead, he's going to buy it for the lowest possible price and sell it at the highest.

    Write a function that returns both the minimum and maximum number of the given list/array.
    
    Examples (Input --> Output)
        [1,2,3,4,5] --> [1,5]
        [2334454,5] --> [5,2334454]
        [1]         --> [1,1]

    All arrays or lists will always have at least one element, so you don't need to check the length. 
    Also, your function will always get an array or a list, you don't have to check for null, undefined or similar.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

// Function
std::pair<int, int> min_max(std::vector<int> arr) {

    // Support variable
    int elementFirst;
    int elementLast;

    // Sort array
    std::sort(arr.begin(), arr.end());

    // Get min and max - first and last element of an array
    elementFirst = arr[0];
    elementLast = arr.back();

    // Return result
    return std::make_pair(elementFirst, elementLast);
}

// Test
int main() {

    std::vector<int> arrayTest = {50, 80, 2, 12};
    std::pair<int, int> result;

    result = min_max(arrayTest);

    std::cout << "First: " << result.first << "; Second: " << result.second;

    return 0;

}