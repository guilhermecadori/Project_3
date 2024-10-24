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

    std::string s1Unique;
    std::string s2Unique;
    std::string longest_string;

    // Prepare s1 string
    for (char element : s1) {
        // Adding unique elments
        if (!s1Unique.find(element)) {
            s1Unique.push_back(element);
        }
    }

    // Prepare s2 string
    for (char element : s2) {
        // Adding unique elments
        if (!s2Unique.find(element)) {
            s2Unique.push_back(element);
        }
    }

    // Compare string size
    // Returns first passsed string if s1 and s2 are of the same length after being cleaned
    if (s1Unique.size() >= s2Unique.size()) {
        longest_string = s1Unique;
    }
    else {
        longest_string = s2Unique;
    }

    // Sort string
    std::sort(longest_string.begin(), longest_string.end());

    // Return string
    return longest_string;
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