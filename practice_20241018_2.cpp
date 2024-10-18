// Ex 2

/*
    Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

*/

#include <iostream>
#include <string>
// #include <vector>

std::string removeExclamationMarks (std::string string_input) {

    // Create clean output string var
    std::string cleanOutputString;

    // Iterate over string characters, pop "!" out
    // Add other chars back into the clean output var
    for (char element : string_input) {
        // Lesson learned: In C++, single characters are enclosed in single quotes ('), not double quotes (")
        if (element == '!') {
            // do nothing
        }
        else {
            // The .push_back() method is specifically for adding a single character to the end of a string
            // Could have used += here, which can be more versatile since it can add whole strings
            // Also += may be easier to be interpreted
            cleanOutputString.push_back(element); 
        }
    }

    // Return clean output
    return cleanOutputString;
}

// Test function
int main() {

    // Create input string
    // Create result var
    std::string test_input = "Hello y'all!!!!!!";
    std::string result;

    // Test function
    result = removeExclamationMarks(test_input);

    // Output result
    std::cout << "Function result: " << result;

    return 0;
}
