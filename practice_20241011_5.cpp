// Using Switch

/* Switch --> Alternative to using many "if-else" statements;
              Used to compare one value againt matching cases.  
*/

#include <iostream>

int main() {

    char grade; // char data type, not std::string from <string>

    std::cout << "Enter a letter grade: ";
    std::cin >> grade;

    switch(grade) {
        case 'A': // Note that you cannot use " " (double quotation marks) when using char data type
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did well.";
            break;
        case 'C':
            std::cout << "You could've done better.";
            break;
        default:
            std::cout << "Please enter a letter grade between A and C.";
    }

    return 0;
}