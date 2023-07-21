#include "print.h"
#include <iostream>
#include <string>

int main(){
    std::string i1 = "item1",
        i2 = "item2";
    std::cout << formatPrint(i1,i2);
    return 0;
}