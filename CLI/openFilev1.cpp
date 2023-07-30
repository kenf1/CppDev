/*
    open file using default application based on file type
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

std::string userInput();
std::string cmd(std::string relativePath);
void gateKeep();

int main(){
    gateKeep();
    return 0;
}

//prompt user for file name + extension
std::string userInput(){
    std::string userInput;

    std::cout << "Enter relative path of file to open: ";
    std::getline(std::cin,userInput);

    /*
        add "\" or "/" to front of string if missing
            dep on detected OS
    */
    if(userInput.at(0)!='/' || userInput.at(0)!='\\'){
        #ifdef _WIN32
            userInput = "\\"+userInput;
        #elif defined(__linux__) || defined(__APPLE__)
            userInput = "/"+userInput;
        #endif
    }

    return userInput;
}

//create full path to file
std::string cmd(std::string relativePath){
    std::string home = std::getenv("HOME"),
        full_path = home+relativePath;
    
    return full_path;
}

//check if file exists before attempting to open
void gateKeep(){
    std::string full_path = cmd(userInput());
    std::ifstream file(full_path);

    if(file){
        std::string full_cmd = "open "+full_path;
        std::system(full_cmd.c_str());
    }else{
        std::perror("ERROR");
    }
}