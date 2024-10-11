// User input

#include <iostream>
#include <string>

int main() {

    std::string name; // Use 'std::string' for strings longer than one character; otherwise use 'char' data type
    int age;
    std::string areaOfStudy; // Use 'std::string' for strings longer than one character; otherwise use 'char' data typeclear

    std::cout << "Please provide your name:" << std::endl;
    std::cin >> name;

    std::cout << "Please provide your age:" << std::endl;
    std::cin >> age;

    // getline() below will capture '\n' (new line character) from the input above if not treated correctly
    // With getline() we can use spaces between words
    // Using '>> std::ws' will ignore '\n' created above
    std::cout << "Please provide your area of study:" << std::endl;
    std::getline(std::cin >> std::ws, areaOfStudy); 

    std::cout << "Hello, " << name << ". You're " << age << " years old." << std::endl;
    std::cout << "You're studying " << areaOfStudy << "." << std::endl;

    return 0;

}