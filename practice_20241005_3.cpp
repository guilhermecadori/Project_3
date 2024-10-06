#include <iostream>

// Ps. :: is known as "scope resolution operator"

    /*
        Namespaces:
        A namespace provides a solution for preventing name conflicts in large projects.
        Each entity needs a unique name. A namespace allows for identically names entities
        as long as their namespaces are different.
   

        Running the following without defining name spaces would result in a redeclaration error
            int x = 20;
            int x = 38; 
    
            practice_20241005_3.cpp:17:9: error: redeclaration of 'int x'
         17 |     int x = 38;
            |         ^
            practice_20241005_3.cpp:16:9: note: 'int x' previously declared here
         16 |     int x = 20;
            |         ^
    
        Use namespaces to avoid it, since in larger projects it becomes difficult
        to track all variable names being used

    */

namespace firstNameSpace {
    int ddd = 47;
}

namespace secondNameSpace {
    int ddd = 41; 
}

// No need to define variables again within main()
int main() {

    std::cout << "In firstNameSpace, 'ddd' is equal to " << firstNameSpace::ddd << std::endl;
    std::cout << "In secondNameSpace, 'ddd' is equal to " << secondNameSpace::ddd << std::endl;

    return 0;
}