/*
    Write a program in C++ to find the sum of the first 10 natural numbers.
*/

#include <iostream>

int main(){
    int cutoff = 10,sum = 0;

    std::cout << "The first " << cutoff << "natural numbers are:\n";
    for(int i=1;i<=cutoff;i++){
        std::cout << i << " ";
        sum = sum + i;
    }
    std::cout << "\n The total count of first " << cutoff << " natural numbers is: " << sum << "\n";

    return 0;
}