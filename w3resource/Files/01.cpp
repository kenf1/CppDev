/*
    Write a C++ program to create a new text file and write some text into it.
*/

#include <iostream>
#include <fstream>

int main(){
    //create txt file
    std::ofstream outputFile("test.txt");

    //open file & insert text
    if(outputFile.is_open()){
        outputFile << "Line 1\n";
        outputFile << "Line 2\nLine 3\n END"; //combine multiple lines together

        //close file
        outputFile.close();

        std::cout << "File successfully created.\n";
    }else{
        std::cout << "Process failed.\n";
    }

    return 0;
}