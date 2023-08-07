/*
    Write a C++ program to count the number of words in a text file.
*/

#include "fileio.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(){
    std::ifstream input = openTxt();

    if(input.is_open()){
        std::string line;
        int wordCount = 0;

        while(std::getline(input,line)){
            std::stringstream ss(line);
            std::string word;

            //count number of words
            while(ss >> word){
                wordCount++;
            }
        }

        input.close();
        std::cout << "There are " << wordCount << " words in input file\n";
    }else{
        std::cout << "Unable to open file\n";
    }

    return 0;
}