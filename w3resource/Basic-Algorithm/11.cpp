/*
    Write a C++ program to create a string taking the first 3 characters of a given string.
        Then, return the string with the 3 characters added to both the front and back.
        If the given string length is less than 3, use whatever characters are there.
*/

#include <iostream>

std::string first3char(std::string input);
std::string addChars(std::string input);
std::string endGoal(std::string input);

int main(){
    std::string test = "python";

    std::cout << first3char(test) << "\n";
    std::cout << addChars(test) << "\n";
    std::cout << endGoal(test) << "\n";

    //<3 chars
    std::cout << endGoal("ai") << "\n";

    return 0;
}

//return 1st 3 char of input
std::string first3char(std::string input){
    return input.substr(0,3);
}

//add 1st 3 char to beginning + end of input
std::string addChars(std::string input){
    std::string temp = first3char(input);
    return temp+input+temp;
}

//ternary using other 2 functions
std::string endGoal(std::string input){
    return input.length()<3 ?
        addChars(input+input+input):
        addChars(input);
}