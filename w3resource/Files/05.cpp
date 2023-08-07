/*
    Write a C++ program to copy the contents of one text file to another.
*/

#include "fileio.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream input = openTxt();

    //new copy
    std::ofstream output("copy.txt");

    if(input.is_open() && output.is_open()){
        std::string line;

        //copy contents line by line
        while(std::getline(input,line)){
            output << line << "\n";
        }

        input.close();
        output.close();
        std::cout << "Success!\n";
    }else{
        std::cout << "Failed\n";
    }

    return 0;
}