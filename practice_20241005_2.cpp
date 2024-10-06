// BroCode

// const: The const keyword specifies that a variable's value is constant
//        It tells the compiler to prevent anything from modifying it (it is ready only)

#include <iostream>

int main() {

    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::out << "Circumferecne: " << circumference << " cm." std::endl;

    return 0;
}
