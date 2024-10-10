// Arithmetic Operator
// +, +=, ++, -, -=, --, *, =*, /, /=, %, precedence



// Type conversion

/*
    type conversion: Conversion of a value of one data type to another.
                     Implicit --> Automatic.
                     Explicit --> Precedes value with new data type, i.e. (int).
*/

#include <iostream>

int main() {

    int correct = 8;
    int questions = 10;
    double score_1 = correct / questions * 100; // Here the ratio gets truncated, e.g. 0.8 --> 0
    double score_2 = correct / double (questions) * 100; // Here questions is converted to double

    std::cout << "Incorrect data type for 'questions' --> Grade: " << score_1 << std::endl;
    std::cout << "Correct data type for 'questions' --> Grade: " << score_2 << std::endl;

    int x_int = 3.14;
    double x_double = 3.14;
    double x_explicit_conversion = (int) 3.14;
    char x = 100; // ASCII code for letter 'd'

    std::cout << x_int << std::endl;
    std::cout << x_double << std::endl;
    std::cout << x_explicit_conversion << std::endl;
    std::cout << x << std::endl;

    return 0;   
}
