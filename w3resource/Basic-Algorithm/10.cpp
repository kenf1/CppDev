/*
    Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.
*/

#include <iostream>

std::string multipleCheck(int input);

int main(){
    int values[] = {3,7,21,22};
    int length = sizeof(values)/sizeof(values[0]);

    for(int i=0;i<length;i++){
        std::cout << "Input: " << values[i] << " Output: " << multipleCheck(values[i]) << "\n";
    }
    return 0;
}

std::string multipleCheck(int input){
    return input%3==0 || input%7==0 ? "True":"False";
}