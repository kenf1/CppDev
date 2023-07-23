/*
    rm file w/ user input
*/

#include <iostream>
#include <cstdio>

int main(){
    std::string filename;

    std::cout << "Enter path of file to remove: ";
    std::getline(std::cin,filename);

    //only rm file if exists
    if(std::remove(filename.c_str())!=0){
        std::perror("Error deleting file");
    }else{
        std::puts("File successfully deleted");
    }

    return 0;
}