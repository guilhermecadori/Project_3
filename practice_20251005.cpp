// Bro Code

// const: The const keyword is used to indicate to the compile that the value of a variables cannot be changed
//        This means that the variable is read-only after being created

# include <iostream>

int main() {

    // Calculating the circumference of a circle
    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << "Circumference : " << circumference << " cm." << std::endl;

    return 0;
}