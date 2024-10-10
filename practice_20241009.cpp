// Ex 1
/*
    Write a function that accepts an integer n and a string s as parameters, 
    and returns a string of s repeated exactly n times.
    
    Examples (input -> output)
        6, "I"     -> "IIIIII"
        5, "Hello" -> "HelloHelloHelloHelloHello"
*/

#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
    
    std::string str_acumm = ""; 

    for (size_t i=0; i < repeat; i++) {
        str_acumm += str;
    };

    return str_acumm; 

}

// Ex 2
/*
    You're writing code to control your town's traffic lights. 
    You need a function to handle each change from green, to yellow, 
    to red, and then to green again.

    Complete the function that takes a string as an argument representing 
    the current state of the light and returns a string representing the s
    tate the light should change to.

    For example, when the input is green, output should be yellow.
*/

std::string update_light(std::string current) {

    if (current == "green") {
        return "yellow";
    } else if (current == "yellow") {
        return "red";
    } else {
        return "green";
    }
}

// Ex 3
/*
    A hero is on his way to the castle to complete his mission. 
    However, he's been told that the castle is surrounded with a 
    couple of powerful dragons! each dragon takes 2 bullets to be 
    defeated, our hero has no idea how many bullets he should carry.. 
    Assuming he's gonna grab a specific given number of bullets and 
    move forward to fight another specific given number of dragons, 
    will he survive?

    Return true if yes, false otherwise :)
*/
bool hero(int bullets, int dragons) {

    if (bullets < dragons * 2) {
        return false; 
    } else {
        return true;
    }
}
