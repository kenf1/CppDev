/*
    prompt user for text in txt file
*/

#include <iostream>
#include <fstream>

void promptUser();

int main(){
    promptUser();
    return 0;
}

void promptUser(){
    //prompt for file name
    std::string fileName;
    std::cout << "Enter txt file name, exclude .txt extension: ";
    std::getline(std::cin,fileName);
    std::ofstream outputFile(fileName+".txt");

    //open file & insert text
    if(outputFile.is_open()){
        //prompt for txt contents
        std::string contents;
        std::cout << "Enter text to include:\n";
        std::getline(std::cin,contents);

        outputFile << contents << "\n";

        outputFile.close();

        std::cout << "File successfully created.\n";
    }else{
        std::cout << "Process failed.\n";
    }
}