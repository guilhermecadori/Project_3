// Ex 1

/*
    Who remembers back to their time in the schoolyard, when girls would take a flower 
    and tear its petals, saying each of the following phrases each time a petal was torn:

        "I love you"
        "a little"
        "a lot"
        "passionately"
        "madly"
        "not at all"

    If there are more than 6 petals, you start over with "I love you" for 7 petals, 
    "a little" for 8 petals and so on.

    When the last petal was torn there were cries of excitement, dreams, surging thoughts 
    and emotions.

    Your goal in this kata is to determine which phrase the girls would say at the last petal 
    for a flower of a given number of petals. The number of petals is always greater than 0.

*/

#include <iostream>
#include <string>
#include <vector>

/*
    - 6 options
    - if greater than 6, start over
        1 % 6 = 0 --> 1
        2 % 6 = 0 --> 2
        3 % 6 = 0 --> 3
        4 % 6 = 0 --> 4
        5 % 6 = 0 --> 5
        6 % 6 = 0 --> 0 
        7 % 6 = 1 --> 1
        8 % 6 = 1 --> 2
        9 % 6 = 1 --> 3
        10 % 6 = 1 --> 4
        11 % 6 = 1 --> 5
        12 % 6 = 2 --> 0 
        ...
*/

std::string how_much_i_love_you(int nb_petals) {

    int petal_check = nb_petals % 6;

    switch(petal_check) {
        case 1:
            return "I love you";
            break;
        case 2:
            return "a little";
            break;
        case 3:
            return "a lot";
            break;
        case 4:
            return "passionately";
            break;
        case 5:
            return "madly";
            break;
        case 0:
            return  "not at all";
            break;
    }
    
    /*
        The warning you are seeing is caused by the fact that the switch statement 
        does not guarantee a return for every possible execution path. 
        The compiler expects that the function will always return a value, but it 
        cannot confirm this because there is no explicit return after the switch block. 
        In theory, all the possible cases of nb_petals % 6 are handled, but the compiler 
        isn't able to determine this for sure.

        To remove the warning, you need to add a default return statement outside of the 
        switch block to ensure that every possible execution path returns a value.

        You can add a return statement at the end of the function that handles any unexpected cases,
        even though in practice this shouldn't happen.
        
    */

    return "Invalid input"; // This should silence the warning.
}


// Testing function
int main() {

    std::vector<int> petals = {1, 2, 3, 4, 5, 6, 0, 7, 8};
    std::string result; 

    for (int i : petals) {
        result = how_much_i_love_you(i);
        std::cout << result << std::endl;
    }
    return 0;
}
