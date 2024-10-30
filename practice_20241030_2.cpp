// Ex 2

/*
    Alex just got a new hula hoop, he loves it but feels discouraged because 
    his little brother is better than him.

    Write a program where Alex can input (n) how many times the hoop goes round 
    and it will return him an encouraging message:
        - If Alex gets 10 or more hoops, return the string "Great, now move on to tricks".
        - If he doesn't get 10 hoops, return the string "Keep at it until you get it".
*/

#include <iostream>
#include <string>

// Function
std::string goHula(int n) {

    // Support variable
    std::string outputMessage;

    // Function logic
    if (n >= 10) {
        outputMessage =  "Great, now move on to tricks";
    }
    else {
        outputMessage =  "Keep at it until you get it";
    }

    return outputMessage;
}

// Test
int main() {

    // Test cases
    int n1 = 15;
    int n2 = 5;
    std::string result1;
    std::string result2;

    result1 = goHula(n1);
    result2 = goHula(n2);

    std::cout << result1 << '\n';
    std::cout << result2;

    return 0;
}
