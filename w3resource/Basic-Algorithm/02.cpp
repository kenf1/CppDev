/*
    Write a C++ program to find the absolute difference between n and 51.
    If n is greater than 51 return triple the absolute difference.
*/

#include <iostream>

int absoluteDiff(int n);

int main(){
    std::cout << "< 51: " << absoluteDiff(50) << "\n";
    std::cout << "> 51: " << absoluteDiff(52) << "\n";
    return 0;
}

int absoluteDiff(int n){
    const int x = 51;

    //absolute value using ifelse
    // if(n>x){
    //     result = 3*(n-x);
    // }else{
    //     result = x-n;
    // }

    int result = n>x ? 3*(n-x) : x-n;

    return result;
}