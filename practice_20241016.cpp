// Ex 1

/*
    You get an array of numbers, return the sum of all of the positives ones.

    Example [1,-4,7,12] => 1 + 7 + 12 = 20

    Note: if there is nothing to sum, the sum is default to 0.

*/

#include <iostream>
#include <vector>

int positive_sum(const std::vector<int> arr) {

    int sum_positive = 0;

    for (int i : arr) {
        if (i > 0) {
            sum_positive += i;
        }
    }

    return sum_positive;
}

// Testing function
int main() {

    const std::vector<int> arr1 = {2, -5, 8, 12};
    const std::vector<int> arr2 = {-5, 0};
    const std::vector<int> arr3 = {0};
    int result1;
    int result2;
    int result3;

    result1 = positive_sum(arr1);
    result2 = positive_sum(arr2);
    result3 = positive_sum(arr3);

    std::cout << "The result for #1 is: " << result1 << "\n";
    std::cout << "The result for #2 is: " << result2 << "\n";
    std::cout << "the result for 3# is: "<< result3;

    return 0;
}