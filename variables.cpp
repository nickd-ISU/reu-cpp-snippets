#include <iostream>

int main() {
    /*
    ----------------------------------------
        Variables are used to store data
        in a program during runtime.
    ----------------------------------------
    */

    // declare int variable
    int a;
    // initialize int variable
    a = 5;

    // declare AND initialize int variable
    int b = 10;

    // Other variable types
    float c = 3.14;
    double d = 3.14159265359;
    char e = 'a';
    bool f = true;

    // String variable type (not a primitive type)
    std::string g = "Hello World!";
    
    /*
    ----------------------------------------
        cout and cin are used to print 
        and get input from the user
    ----------------------------------------
    */

    // cout
    std::cout << g << std::endl;

    // cin
    int h;
    std::cout << "Enter a number: "; // prompt user
    std::cin >> h; // get user input and store in h
    std::cout << "You entered: " << h << std::endl; // print h
}
