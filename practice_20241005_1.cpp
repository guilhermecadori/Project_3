// const: The const keyword specifies that a variable's values is constant
//        It indicates to the compiler to prevent anything from modifying it
//        This means that the variable is read-only after being created

# include <iostream>

int main() {

    // Calculating the circumference of a circle
    const double PI = 3.14159; // Add prefix 'const' and, by convention, use upper case only to name constant variable
    // PI = 510 // Uncommenting this line will result in an error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << "Circumference : " << circumference << " cm." << std::endl;

    return 0;
}
