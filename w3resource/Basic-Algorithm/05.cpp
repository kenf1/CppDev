/*
    Write a C++ program to create a string where 'if' is added to the front of a given string.
    If the string already begins with 'if', return the string unchanged.
*/

#include <iostream>

std::string addIf(std::string inputString);
void formatPrint(std::string arg1,std::string arg2);

int main(){
    formatPrint("Add if: ","something");
    formatPrint("Begins with if: ","if else");
    return 0;
}

std::string addIf(std::string inputString){
    std::string output = inputString.length()>2 && inputString.substr(0,2)=="if" ? "\n Return: "+inputString:"if "+inputString;
    return output;
}

void formatPrint(std::string arg1,std::string arg2){
    std::cout << arg1 << addIf(arg2) << "\n";
}