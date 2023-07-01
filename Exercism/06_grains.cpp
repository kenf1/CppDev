#include <iostream>
#include <cmath>

/*
    Calculate the number of grains of wheat on a chessboard given that the number on each square doubles.
        2^n (n=square #)
    Write code that shows:
        how many grains were on a given square, and
        the total number of grains on the chessboard
*/

//using int64 to show actual number
int64_t grainOnSquare(int square);
int64_t totalNumGrains();

int main(){
    int squareNum;

    std::cout << "The total number of grains on a 64 square chessboard is: " << totalNumGrains() << "\n";

    //limit user input to [1,64]
    do{
        std::cout << "Enter square number (1-64): ";
        std::cin >> squareNum;
    }while(squareNum<1 || squareNum>64);

    std::cout << "The number of grains on square " << squareNum << " is " << grainOnSquare(squareNum) << "\n";

    return 0;
}

//determine how many grains are on a given square
int64_t grainOnSquare(int square){
    int64_t temp;
    return temp = pow(2,square);
}

//count total number grains on board
int64_t totalNumGrains(){
    int64_t runningCount;
    for(int i=1;i<=64;i++){
        int temp = grainOnSquare(i);
        runningCount += temp;
    }
    return runningCount;
}