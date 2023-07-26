/*
    Write a program in C++ to display n terms of natural numbers and their sum.
*/

#include <iostream>

int main(){
    int cutoff,sum = 0;

    std::cout << "Enter n natural numbers: ";
    std::cin >> cutoff;

    std::cout << "The first " << cutoff << "natural numbers are:\n";
    for(int i=1;i<=cutoff;i++){
        std::cout << i << " ";
        sum = sum + i;
    }
    std::cout << "\n The total count of first " << cutoff << " natural numbers is: " << sum << "\n";

    return 0;
}