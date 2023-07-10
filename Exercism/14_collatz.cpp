/*
    3x+1 problem
    Given a number n, return the number of steps required to reach 1
*/

#include <iostream>

long testEvenOdd(int intInput);

int main(){
    int userNum,newNum;

    std::cout << "Enter an integer: ";
    std::cin >> userNum;
    
    std::cout << "It took: " << testEvenOdd(userNum) << " steps to reach 1.\n";
    return 0;
}

long testEvenOdd(int intInput){
    long steps = 0;

    //throw error if 0 or negative int
    if(intInput<=0){
        throw std::domain_error("This is not an accepted value.");
    }

    //loop intInput until == 1, count # steps taken
    // while(intInput>1){
    //     if(intInput%2==0){
    //         intInput = intInput/2;
    //     }else{
    //         intInput = (3*intInput)+1;
    //     }
    //     steps++;
    // }

    //simplified & faster ver using ternary
    while(intInput>1){
        intInput = (intInput%2) ? (3*intInput)+1 : intInput/2;
        steps++;
    }

    return steps;
}