/*
    Write a C++ program to check if a given string starts with 'C#' or not.
*/

#include <iostream>

bool checkString(std::string input);
void print(std::string input);

int main(){
    std::string test[] = {"C#sharp","C##","Csharp","C++"};
    int length = sizeof(test)/sizeof(test[0]);

    for(int i=0;i<length;i++){
        print(test[i]);
    }

    return 0;
}

bool checkString(std::string input){
    return input.substr(0,2) == "C#" ? 1:0;
}

void print(std::string input){
    std::cout << checkString(input) << "\n";
}