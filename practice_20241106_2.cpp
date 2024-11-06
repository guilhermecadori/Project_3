// Ex 2
/*
    You will be given a list of strings. 
    You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) 
    and then return the first value.

    The returned value must be a string, and have "***" between each of its letters.

    You should not remove or add elements from/to the array.
*/

#include <iostream>
#include <vector>
#include <algorithm>

// Function
std::string sortStrings(std::vector<std::string> stringArray) {
    // Support variables
    std::vector<std::string> arrayASCII;
    int letterASCII;
    std::string wordASCII;
    std::string firstWordASCII;
    std::string outputWord;
    std::string asciiChar;

    // Retrieve ASCII values
    for (const std::string& word : stringArray) {
        wordASCII.clear();  // Clear the string for each word
        for (char c : word) {
            letterASCII = c;
            wordASCII.push_back(static_cast<char>(letterASCII));
        }

        // Add new word to array
        arrayASCII.push_back(wordASCII);
    }

    // Sort based on ASCII (ASCII is case-sensitive by itself)
    std::sort(arrayASCII.begin(), arrayASCII.end(), std::greater<>());

    // Adds requested * char between letters
    firstWordASCII = arrayASCII[0];  // Now firstWordASCII is a string
    for (char c : firstWordASCII) {
        asciiChar = c + std::string("***");  // Convert char and append ***
        outputWord += asciiChar;
    }

    // Remove last "***"
    const size_t suffixLength = 3;  // Length of the "***" suffix
    outputWord.resize(outputWord.size() - suffixLength);

    // Return output
    return outputWord;
}


// Test
int main() {

    std::vector<std::string> testInput = {"Xilofone", "Zarolho", "Abacate", "abacate"};

    std::cout << sortStrings(testInput);

    return 0;
}



