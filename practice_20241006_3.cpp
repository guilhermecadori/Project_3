/*
    Namespaces

    An important method for code organization are namespaces. Two functions might have a 
    naming collision, which can be resolved by putting them in different namespaces. 
    Namespaces can be nested, which might help to structure big code bases. Access to the 
    namespaces is done via the scope-resolution operator ::.

    The example below shows the use of two different foo functions. They are used together 
    by prefixing their respective namespaces.

    Ex:
        namespace my_ns {
            int foo() {
                return 44;
            }
            namespace my_inner_ns {
                int baz() {
                    return 90;
                }
            }
        }
        namespace my_other_ns {
            int foo() {
                return -2;
            }
        }

        int myresult{my_ns::foo() + my_other_ns::foo() * my_ns::my_inner_ns::baz()};

*/

// Ex 3
/*
Instructions

You work for a prestigious law firm that is specialized in handling unique testament requests.

In this exercise, you are going to open a mysterious vault. You are the executor of the estate 
and will assemble the long-kept secret codes of three families to get an account number and the 
matching code.
To prevent any family from opening the vault alone, it can only be opened by combining their 
knowledge with a secret modifier that you know from the last will.
You have three tasks, all related to helping the families to open the vault.

*/
// Secret knowledge of the Zhang family:
namespace zhang {
    int bank_number_part(int secret_modifier) {
        int zhang_part{8'541};
        return (zhang_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 512;}
    }
    namespace blue {
        int code_fragment() {return 677;}
    }
}

// Secret knowledge of the Khan family:
namespace khan {
    int bank_number_part(int secret_modifier) {
        int khan_part{4'142};
        return (khan_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 148;}
    }
    namespace blue {
        int code_fragment() {return 875;}
    }
}

// Secret knowledge of the Garcia family:
namespace garcia {
    int bank_number_part(int secret_modifier) {
        int garcia_part{4'023};
        return (garcia_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 118;}
    }
    namespace blue {
        int code_fragment() {return 923;}
    }
}

// My code
// Define a namespace called estate_executor. 
// The code from the next tasks should be defined in the body of the estate_executor namespace.

namespace estate_executor {
    
    // Function for assembling account number
    int assemble_account_number(int secret_modifier) {

        int account_number = (zhang::bank_number_part(secret_modifier)) + 
                             (khan::bank_number_part(secret_modifier))  + 
                             (garcia::bank_number_part(secret_modifier));

        return account_number;
    }

    // Function for retrieving code
    int assemble_code() {

        int red_sum = (zhang::red::code_fragment()) + 
                      (khan::red::code_fragment())  + 
                      (garcia::red::code_fragment());
        
        int blue_sum = (zhang::blue::code_fragment()) + 
                       (khan::blue::code_fragment())  + 
                       (garcia::blue::code_fragment());

        int code = red_sum * blue_sum;

        return code;
    }
}

