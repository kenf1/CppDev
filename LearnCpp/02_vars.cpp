#include <iostream>

int main(){
    //copy initialization
    int a = 69;

    //direct initialization (old standard)
    int b(420);

    //direct initialization (new standard) [[maybe_unused]] = possibility won't be called
    [[maybe_unused]] int var1{69420};
    // std::cout << var1;

    //print a & b w/ new line inbtwn (add another \n to rm %)
    std::cout << a << "\n" << b << "\n";

    //create multiple vars in single line
    int varA (69), varB (420);
    std::cout << varA << varB << "\n"; //concat

    return 0;
}