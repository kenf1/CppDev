/*
    Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.
*/

#include <iostream>

std::string insideRange(int value,int toCompare);

int main(){
    std::cout << "105: " << insideRange(105,100) << "\n";
    std::cout << "115: " << insideRange(115,100) << "\n";
    return 0;
}

std::string insideRange(int value,int toCompare){
    std::string result = value<=toCompare+10 && value>=toCompare-10 ? "True":"False";
    return result;
}