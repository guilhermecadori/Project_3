// Ex 1
/*
    Sentence Smash

    Write a function that takes an array of words and smashes them together 
    into a sentence and returns the sentence. You can ignore any need to sanitize 
    words or add punctuation, but you should add spaces between each word. Be careful, 
    there shouldn't be a space at the beginning or the end of the sentence!
    
    Example
        words = ['hello', 'world', 'this', 'is', 'great']
        smash(words) # returns "hello world this is great"

    Assumptions
        You can assume that you are only given words.
        You cannot assume the size of the array.
        You can assume that you do get an array.
*/

#include <iostream>
#include <string>
#include <vector>

// Function
std::string smash(std::vector<std::string> wordArray) {
   
   // Empty string fo accumulating words
    std::string outputString;

    if (!wordArray.empty()) {

        // Looping over words in the input string vector
        // Adding them to the empty string
        for (std::string word : wordArray) {
            outputString += (word + ' ');
        }

        // Removing space ' ' after the last word
        outputString.pop_back();
    }

    // Return result
    return outputString;
}

using namespace std;

// Test
int main() {

    vector<string> testInput = {"hello", "world", "this", "is", "great"};
    string testOutput;

    testOutput = smash(testInput);

    cout << "Output: " << testOutput;

    return 0;
}

