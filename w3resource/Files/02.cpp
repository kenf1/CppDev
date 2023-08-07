/*
    Write a C++ program to open an existing text file and display its contents on the console.
*/

#include "fileio.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    // std::ifstream input("test.txt");
    std::ifstream input = openTxt();

    //print each line while file is open
    if(input.is_open()){
        std::string content;

        while(std::getline(input,content)){
            std::cout << content << "\n";
        }

        input.close();
        std::cout << "Complete\n";
    }else{
        std::cout << "Unable to open file\n";
    }

    return 0;
}