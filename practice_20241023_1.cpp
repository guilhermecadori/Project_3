/*
    Take 2 strings s1 and s2 including only letters from a to z. 
    Return a new sorted string (alphabetical ascending), the longest possible, 
    containing distinct letters - each taken only once - coming from s1 or s2.
    
    Examples:
        a = "xyaabbbccccdefww"
        b = "xxxxyyyyabklmopq"
        longest(a, b) -> "abcdefklmopqwxy"

        a = "abcdefghijklmnopqrstuvwxyz"
        longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"

*/
#include <iostream>
#include <string>
#include <algorithm>

// Function
std::string longest(const std::string s1, const std::string s2) {

    std::string stringConcatenated = s1 + s2;
    std::string stringUnique;

    // Prepare s1 string
    for (char element : stringConcatenated) {
        // Adding unique elments
        if (stringUnique.find(element) == std::string::npos) {
            stringUnique.push_back(element);
        }
    }

    // Sort string
    std::sort(stringUnique.begin(), stringUnique.end());

    // Return string
    return stringUnique;
}


// Test
int main() {

    std::string result;
    std::string s1Test = "xyaabbbccccdefww";
    std::string s2Test = "xxxxyyyyabklmopq";

    result = longest(s1Test, s2Test);

    std::cout << "Function result: " << result;

    return 0;
}