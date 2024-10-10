// Ex 1

    /*
        typedef: Reserved keyword used to create an additional name (alias) 
                 for another data type. 
                 New identifier for an existing type.
                 Helps with readability and reduces typos.   
    */



#include <iostream>
#include <vector>

// Complicated example to ilustrate how 'typedef' may be usefull
//typedef std::vector<std::pair<std::string, int >> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

// Author also suggested using the "using" keyword instead of "typerdef" since it works better with templates
// Templates will be studies later on
using text_t = std::string;
using number_t = int;


int main() {

    // pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t yourAge = 31;


    std::cout << "Your name is: " << firstName << std::endl;
    std::cout << "Your age is: " << yourAge << std::endl;

    return 0;
}

/* Results for both methods - "typedef" and "using":

    Your name is: Bro
    Your age is: 31

    [Done] exited with code=0 in 0.647 seconds


    Your name is: Bro
    Your age is: 31

    [Done] exited with code=0 in 0.508 seconds
    
*/