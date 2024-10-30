// Ex 1
/*
    Consider an array/list of sheep where some sheep may be missing from their place. 
    We need a function that counts the number of sheep present in the array (true means present).

    For example,

    { true,  true,  true,  false,
    true,  true,  true,  true,
    true,  false, true,  false,
    true,  false, false, true,
    true,  true,  true,  true,
    false, false, true,  true }

    The correct answer would be 17.

    Hint: Don't forget to check for bad values like null/undefined
*/

#include <iostream>
#include <vector>

// Function
int countSheep(std::vector<bool> arr) {

    int sheepCounter;

    for (bool sheep : arr) {
        if (sheep == true) {
            sheepCounter ++;
        }
    }

    return sheepCounter;
}

// Test
int main() {

    // Test instance
    std::vector<bool> sheepTest = 
            {   true,  true,  true,  false,
                true,  true,  true,  true,
                true,  false, true,  false,
                true,  false, false, true,
                true,  true,  true,  true,
                false, false, true,  true   };
    
    // Support variable
    int result;

    // Test function
    result = countSheep(sheepTest);

    std::cout << "Result is: " << result;

    return 0;
}