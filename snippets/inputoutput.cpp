#include <iostream>

int main() {
    /*
    ----------------------------------------
        cout and cin come from the iostream
        library and are used to print to the
        console and get user input
    ----------------------------------------
    */

    // cout
    int x = 5;
    std::cout << "Hello World!" << std::endl;
    std::cout << "x = " << x << std::endl;

    // cin
    int a;
    std::cout << "Enter a number: "; // prompt user
    std::cin >> a; // get user input and store in a
}
