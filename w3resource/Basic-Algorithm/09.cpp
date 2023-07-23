/*
    Write a C++ program to create a string with the last character 
        added at the front and back of a given string of length 1 or more
*/

#include <iostream>

std::string addChar(std::string input);

int main(){
    std::cout << addChar("something") << "\n";
    return 0;
}

std::string addChar(std::string input){
    std::string temp = input.substr(input.length()-1); //obtain last char of string
    // temp = temp+input+temp;
    return temp = temp+input+temp;
}