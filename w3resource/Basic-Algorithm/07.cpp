/*
    Write a C++ program to exchange the first and last characters in a given string and return the result string.
*/

#include <iostream>

std::string locSwap(std::string input);

int main(){
    std::string sample = "abcd";

    std::cout << sample+" "+locSwap(sample)+"\n";
    return 0;
}

//uses string concat
std::string locSwap(std::string input){
    return input.length()>1 ?
        input.substr(input.length()-1)+ //last char
        input.substr(1,input.length()-2)+ //everything in between
        input.substr(0,1) //first char
        :input; //return input if length < 1
}