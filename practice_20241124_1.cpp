// Ex 1
/*
    Very simple, given a number (integer / decimal / both depending on the language), 
    find its opposite (additive inverse).

        Examples:
        1: -1
        14: -14
        -34: 34
*/

#include <iostream>
#include <vector>

// Function
int opposite(int number) {
    if (number == 0) {
        return 0;
    }

    int nOpposite = -1 * number;

    return nOpposite;
}

// Test
int main() {

    std::vector<int> nTest = {-5, 10, 0};
    int result;

    for (int element : nTest) {
        result = opposite(element);
        std::cout << "Opposite is: " << result << '\n';
    }

    return 0;
}

