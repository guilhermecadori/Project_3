// Ex 1
/*
    Build Tower

    Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. 
    A tower block is represented with "*" character.

    For example, a tower with 3 floors looks like this:
        [
        "  *  ",
        " *** ", 
        "*****"
        ]

    And a tower with 6 floors looks like this:
        [
        "     *     ",  1 -->  1 *, 10 " " nSpace: (6 - 1)
        "    ***    ",  2 -->  3 *,  8 " " nSpace - 1
        "   *****   ",  3 -->  5 *,  6 " "
        "  *******  ",  4 -->  7 *,  4 " "
        " ********* ",  5 -->  9 *,  2 " "
        "***********"   6 --> 11 *,  0 " "
        ]
*/

#include <iostream>
#include <vector>
#include <string>

// Function
std::vector<std::string> createTower(int nLevels) {

    // Support variables
    std::vector<std::string> tower;
    std::string levelStructure;
    int nAsterisk = 1;
    int nSpaces = nLevels - 1;
    int level = 1;
    char ast = '*';
    char spac =  ' ';
    std::string astLoop(nAsterisk, ast);
    std::string spacLoop(nSpaces, spac);
    
    // Creating tower levels
    while (level <= nLevels) {
        levelStructure = (spacLoop) + (astLoop) + (spacLoop);
        tower.push_back(levelStructure);
        nAsterisk += 2;
        nSpaces -= 1;
        astLoop = (nAsterisk, ast);
        spacLoop = (nSpaces, spac);
        level++;
    }    

    // Return tower
    return tower;
}

// Test
int main() {

    int nLevelsTest = 6;
    std::vector<std::string> result;
    
    result = createTower(nLevelsTest);

    for (std::string levelTest : result) {
        std::cout << levelTest << '\n';
    }

    return 0;
}
