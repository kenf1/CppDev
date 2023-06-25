#include <iostream>

#define INPUT_VAR "Hello"
#define NAME

int main(){
    std::cout << INPUT_VAR << "\n";
    
    //don't compile code btwn if & endif
    #if 0
        std::cout << "Enter something";
    #endif

    //if NAME defined
    #ifdef NAME
        std::cout << "Hello _ \n";
    #endif

    //if UNAME not defined
    #ifndef UNAME
        std::cout << "Name unknown \n";
    #endif
    
    return 0;
}