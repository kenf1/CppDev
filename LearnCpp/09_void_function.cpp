#include <iostream>

//return statement not req
void function1(){
    std::cout << "Hello world \n";
}

int main(){
    function1(); //can't save result of void function
    return 0;
}