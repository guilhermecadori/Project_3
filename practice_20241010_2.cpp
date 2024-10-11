// Arithmetic Operator
// +, +=, ++, -, -=, --, *, =*, /, /=, %, precedence

#include <iostream>

int main() {

    int sum_1    = 1;
    int sum_2    = 1;
    int addOne   = 1;

    int sub_1    = 5;
    int sub_2    = 5;
    int subOne   = 5;

    int mult_1   = 2;
    int mult_2   = 2;

    int div_1    = 4;
    int div_2    = 4;

    int mod_1       ;
    int mod_2       ;

    sum_1 = sum_1 + 1;
    sum_2 += 1;
    addOne = addOne++;

    sub_1 = sub_1 - 1;
    sub_2 -= 1;
    subOne = addOne--;

    mult_1 = mult_1 * 2;
    mult_2 *= 2;

    div_1 = div_1 / 2;
    div_2 /= 2;

    mod_1 = 10 % 2;
    mod_2 = 3 % 2;

    std::cout << sum_1 << std::endl;
    std::cout << sum_2 << std::endl;
    std::cout << addOne << std::endl;

    std::cout << sub_1 << std::endl;
    std::cout << sub_2 << std::endl;
    std::cout << subOne << std::endl;

    std::cout << mult_1 << std::endl;
    std::cout << mult_2 << std::endl;

    std::cout << div_1 << std::endl;
    std::cout << div_2 << std::endl;

    std::cout << mod_1 << std::endl;
    std::cout << mod_2 << std::endl;

    return 0;
}

/*
    Results:
        2
        2
        0
        4
        4
        1
        4
        4
        2
        2
        0
        1

        [Done] exited with code=0 in 0.542 seconds
*/