// Ex 1
/*
    Convert number to reversed array of digits

    Given a random non-negative number, you have to return the digits of this number 
    within an array in reverse order.
    
    Example(Input => Output):
        - 35231 => [1,3,2,5,3]
        - 0 => [0]
*/

#include <iostream>
#include <vector>

// Function
std::vector<int> digitize(unsigned long long n) {

    // Variable definition
    std::vector<int> num_arr_reverse = {};
    int temp_num;

    if (n == 0) {
        return {0};
    }
    // Capture the digits of number n and store them in a array
    while (n > 0) {
        temp_num = n % 10;
        num_arr_reverse.push_back(temp_num);
        n /= 10;
    }

    // Return result
    return num_arr_reverse;
}


// Test
int main() {

    // Test numbers
    unsigned long long num1 = 45762893920LL;
    int num2 = 987;
    std::vector<int> result1 = {};
    std::vector<int> result2 = {};

    // Run function
    result1 = digitize(num1);
    result2 = digitize(num2);

    // Output results
    for (int value : result1) {
        std::cout << value << " ";
    }

    std::cout << "" << std::endl;

    for (int value : result2) {
        std::cout << value << " ";
    }

    // Exit test
    return 0;
}