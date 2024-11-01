// Ex
/*
    altERnaTIng cAsE <=> ALTerNAtiNG CaSe

    Define String.prototype.toAlternatingCase (or a similar function/method s
    uch as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; 
    see the initial solution for details) such that each lowercase letter becomes uppercase 
    and each uppercase letter becomes lowercase.
    
    Ex:
        "hello world".toAlternatingCase() === "HELLO WORLD"
        "HELLO WORLD".toAlternatingCase() === "hello world"
        "hello WORLD".toAlternatingCase() === "HELLO world"
        "HeLLo WoRLD".toAlternatingCase() === "hEllO wOrld"
        "12345".toAlternatingCase()       === "12345"                   // Non-alphabetical characters are unaffected
        "1a2b3c4d5e".toAlternatingCase()  === "1A2B3C4D5E"
        "String.prototype.toAlternatingCase".toAlternatingCase() === "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
*/

// Function
#include <iostream>
#include <string>
#include <cctype>

std::string to_alternating_case(const std::string& str) {

    std::string outputString;

    for (char letter : str) {
        if (std::isupper(letter)) {
            letter = std::tolower(letter);
            outputString.push_back(letter);
        }
        else {
            letter = std::toupper(letter);
            outputString.push_back(letter);
        }
    }
    return outputString;
}


// Test
int main() {

    std::string stringTest = "hELLo WorlD";
    std::string result;

    result = to_alternating_case(stringTest);

    std::cout << result;

    return 0;
}