/*
    Write a C++ program to remove the character at a given position in the string.
    The given position will be in the range 0..string length -1 inclusive.
*/

#include <iostream>

std::string locRM(std::string inputString,int loc);
void unitTest(std::string arg1,std::string arg2,int loc);

int main(){
    unitTest("Ex1: ","Python",0);
    unitTest("Ex2: ","Python",1);
    unitTest("Ex3: ","Python",5);
    return 0;
}

std::string locRM(std::string inputString,int loc){
    return inputString.erase(loc,1);
}

void unitTest(std::string arg1,std::string arg2,int loc){
    std::cout << arg1+locRM(arg2,loc)+"\n";
}