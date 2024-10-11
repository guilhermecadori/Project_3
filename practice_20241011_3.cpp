#include <iostream>
#include <cmath>

// Create a program to calculat the hypotenuse of a right angled traingle
int main() {

    // C = SQRT(A^2 + B^2)

    double A;
    double B;
    double C;

    // It's also possible to define multiple vars of the same type at once
    // double a, b, hypotenuse;

    std::cout << "Please provide A: " << std::endl;
    std::cin >> A;

    std::cout << "Please provide B: " << std::endl;
    std::cin >> B;

    C = sqrt(pow(A, 2) + pow(B, 2));

    std::cout << "The hypotenuse is: " << C << std::endl;  

    return 0;
}