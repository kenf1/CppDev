#include <iostream>

int main(){
    //attemp to print uninitialized var (direct initialization)
    int x{};
    std::cout << x << "\n";

    //print bytes memory an int value takes
    int y;
    std::cout << sizeof(y) << "\n";

    //concat strings
    std::cout << "string1 " "string2 " << y << " string3 \n";
}

/*no error raised,
returns 0 every time*/

//returns 16 w/ copy initialization