// Ex 1
/*
    A square of squares

    You like building blocks. You especially like building blocks that are squares. 
    And what you even like more, is to arrange them into a square of square building blocks!

    However, sometimes, you can't arrange them into a square. Instead, you end up with 
    an ordinary rectangle! Those blasted things! If you just had a way to know, whether you're 
    currently working in vain… Wait! That's it! You just have to check if your number of 
    building blocks is a perfect square.
    
    Task
    Given an integral number, determine if it's a square number:
        In mathematics, a square number or perfect square is an integer that is the square of an 
        integer; in other words, it is the product of some integer with itself.
    
    The tests will always use some integral number, so don't worry about that in dynamic typed languages.
        Examples
            -1  =>  false
            0  =>  true
            3  =>  false
            4  =>  true
            25  =>  true
            26  =>  false
*/

#include <iostream>
#include <vector>

// Function
bool is_square(int n) {

    /*
        Brute force algorithm for finding to root of a number n and finding out
        whether it is a square or not, based on the three conditions below.
    */

    // Condition 1: Integer part of a division by m has to be greater than 0
    // Condition 2: Divisor m has to be the largest found
    // Condition 3: Remainder has be equal 0
    int m = 2; // Must start with m = 2
    double division;
    std::vector<double> squareRootSearch;
    int squareRoot = 0;

    if (n >= 0) {
        while (int(n / m) > 0) {
            if (n % m == 0) {
                division = n / m;
                squareRootSearch.push_back(division);
            }
            m ++;
        }
        
        int listSize = squareRootSearch.size();

        // Retrieve the square root
        for (int i = 0; i < listSize; i++) {
            if (squareRootSearch[i] > squareRoot) {
                squareRoot = squareRootSearch[i];
            }
        }

        // Check whether n is a perfect square
        if (squareRoot * squareRoot == n) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}


// Test
int main () {

    int test1 = 25;
    int test2 = 31;
    int result1;
    int result2;

    result1 = is_square(test1);
    result2 = is_square(test2);

    std::cout << "Result 1: " << result1 << '\n';
    std::cout << "Result 2: " << result2;

    return 0;
}

