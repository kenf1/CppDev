/*
    Write a program in C++ to find the perfect numbers between 1 and 500.
        perfect number = positive int equal to sum of its positive divisors, excluding itself
*/

#include <iostream>

int main() {
    int i,j,sum;
    std::cout << "The perfect numbers between 1 and 500 are: \n";
    
    for(i=1;i<=500;i++){
        sum = 0;
        for(j=1;j<i;j++){
            if(i%j==0){
                sum += j;
            }
        }
        if(sum==i){
            std::cout << i << "\n";
        }
    }
    return 0;
}