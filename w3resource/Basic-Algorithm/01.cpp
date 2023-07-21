/*
    Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum.
*/

#include <iostream>

int add2(int value1,int value2);

int main(){
    std::cout << "1 + 2: " << add2(1,2) << "\n";
    std::cout << "2 + 2: " << add2(2,2) << "\n";

    return 0;
}

int add2(int value1,int value2){
    int result;

    if(value1==value2){
        result = 3*(value1+value2);
    }else{
        result = value1+value2;
    }

    return result;
}