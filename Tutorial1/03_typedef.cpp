#include <iostream>
#include <vector>

//convention is add _t to varname end
typedef std::string text_t;
typedef int int_t;

//new convention
using num_t = int;

int main(){
    //type string
    text_t firstName{"First Name"};
    std::cout << firstName << "\n";
    
    //type int
    int_t someInt{420};
    std::cout << someInt << "\n";

    //new convention
    num_t newNum{123};
    std::cout << "Using new convention: " << newNum << "\n";

    return 0;
}