// Ex. 1

#include <iostream>

/*
    In this game, the hero moves from left to right. The player rolls the dice 
    and moves the number of spaces indicated by the dice two times.

    Create a function for the terminal game that takes the current position of the 
    hero and the roll (1-6) and return the new position.
    
    Example:
        move(3, 6) should equal 15

*/

// Creating the function
int move(int position, int roll) {

    int newPosition = position + 2 * roll;
    
    return newPosition;
}

