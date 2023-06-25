#include <iostream>

int main(){
    //literal
    std::cout << 5 << "\n";

    //var
    int var1{5};
    std::cout << var1 << "\n";

    //operations (multi line)
    std::cout << 1+2
        +3+4
        +5 << "\n";

    return 0;
}