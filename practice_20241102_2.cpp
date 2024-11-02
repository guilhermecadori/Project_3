#include <iostream>

// Function to check if a number is a perfect square
bool is_square(int n) {
    if (n < 0) return false; // Negative numbers can't be perfect squares

    int m = 0; // Start from 0
    while (m * m <= n) {
        if (m * m == n) return true; // Perfect square found
        m++;
    }
    return false; // No perfect square root found
}


// Test
int main() {
    int test1 = 25;
    int test2 = 31;
    int test3 = -4;
    int test4 = 0;

    std::cout << "Result 1: " << is_square(test1) << '\n'; // Expected: true
    std::cout << "Result 2: " << is_square(test2) << '\n'; // Expected: false
    std::cout << "Result 3: " << is_square(test3) << '\n'; // Expected: false
    std::cout << "Result 4: " << is_square(test4); // Expected: true

    return 0;
}
