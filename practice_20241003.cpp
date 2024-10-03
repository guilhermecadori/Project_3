#include <iostream>

int main() {

    // Integer variable
    int x = 5;
    int y = 15;

    // Double (double precisio, decimal number)
    double price = 10.99;
    double temperature = 20.8;

    // Char (stores a single character)
    char grade = 'A';
    char dollarSign = '$';

    // Boolean
    bool student = false; // e.g. Student failed
    bool powerOn = true; // e.g. Power is on

    // String (use double quotes " ")
    std::string myFriend = "Nêne"; // It is created differently using "std::string"

    // Output
    std::cout << "x is " << x << " and y is equals " << y  << "." << std::endl;
    std::cout << price << std::endl;
    std::cout << temperature << std::endl;
    std::cout << grade << std::endl;
    std::cout << dollarSign << std::endl;
    std::cout << student << std::endl;
    std::cout << powerOn << std::endl;



    return 0;

}