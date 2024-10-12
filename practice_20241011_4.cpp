#include <iostream>

int main() {

    // If-Else statments
    int age;

    std::cout << "Enter your age:";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You're too old";
    }
    else if (age >= 18) {
        std::cout << "Welcome to the site!";
    }
    /*
    else if (age >= 100) {
        // Note that order of statements matter; Try entering an age >= 100 to check the result.
        // Returns the message for condition age >= 18
        std::cout << "You're too old to enter this site.";
            //Enter your age:100
            //Welcome to the site!
    } */
    else if (age < 0) {
        std::cout << "You haven't been born yet.";
    }
    else {
        std::cout << "You aren't old enough.";
    }

    return 0;
}