/*
    Write a program in C++ to check whether a number is prime or not.
*/

#include <iostream>

int main(){
    int input,iter = 0;

    std::cout << "Enter a number to test: ";
    std::cin >> input;

    for(int i=1;i<=input;i++){
        if(input%i==0){
            iter++;
        }
    }
    
    // if(iter==2){
    //     std::cout << "Not a prime number\n";
    // }else{
    //     std::cout << "Is a prime number\n";
    // }
    
    //iter==2 is for 1 & number itself
    iter==2 ? std::cout << "Is a prime number.\n":std::cout << "Not a prime number.\n";
    
    return 0;
}