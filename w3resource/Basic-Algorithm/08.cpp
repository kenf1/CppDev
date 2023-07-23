/*
    Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string.
    If the given string length is less than 2 return the original string.
*/

#include <iostream>

std::string copies(std::string input,int x);
std::string copies_v1(std::string input,int x);

int main(){
    std::cout << copies("king",4) << "\n";
    std::cout << copies_v1("hello",4) << "\n";
    return 0;
}

//ifelse
std::string copies(std::string input,int x){
    std::string result;
    
    if(input.length()<2){
        return input;
    }else{
        for(int i=0;i<x;i++){
            result += input.substr(0,2);
        }
        return result;
    }
}

//lambda function + ternary (causes error in clang but not g++)
std::string copies_v1(std::string input,int x){
    //lambda function
    auto repeatSubstring = [](const std::string& input,int x) -> std::string{
        std::string result;
        for(int i=0;i<x;i++){
            result += input.substr(0,2);
        }
        return result;
    };

    return input.length()<2 ? input:repeatSubstring(input,4);
}