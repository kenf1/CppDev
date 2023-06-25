#include <iostream>

//Write a function called doubleNumber() that takes one integer parameter. The function should return double the value of the parameter.

int doubleNumber(int x){
    return x*2;
}

//print result
int main(){
    std::cout << doubleNumber(1) << "\n";
    return 0;
}