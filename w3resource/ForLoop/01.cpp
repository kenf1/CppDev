/*
    Write a program in C++ to find the first 10 natural numbers.
*/

#include <iostream>

int main(){
    int cutoff = 10;

    std::cout << "The first " << cutoff << "natural numbers are:\n";
    for(int i=1;i<=cutoff;i++){
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}