#include <iostream>

int main() {

    std::cout << "Hello, World!" << std::endl; // Flushes the output buffer
    std::cout << "Hello again!" << std::endl;

    std::cout << "Hello, World!" << '\n'; // '\n' is better, performance wise
    std::cout << "Hello again!" << '\n'; 

    return 0;

}

