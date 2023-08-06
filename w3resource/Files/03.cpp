/*
    count num lines in txt file
*/

#include "fileio.h"
#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream input = openTxt("test.txt");

    if(input.is_open()){
        std::string line;
        int lineCount = 0;

        while(std::getline(input,line)){
            lineCount++;
        }

        input.close();
        std::cout << "There are " << lineCount << " lines of text in this file.\n";
    }else{
        std::cout << "Failed to open file\n";
    }

    return 0;
}