/*
    open file using default application (from cli argument, index 1)
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

void gateKeep(std::string user_input);

int main(int argc,char *argv[]){
    gateKeep(argv[1]);
    return 0;
}

//create full path to file
std::string cmd(std::string relativePath){
    std::string home = std::getenv("HOME"),
        full_path = home+relativePath;
    
    return full_path;
}

//check if file exists before attempting to open
void gateKeep(std::string user_input){
    //add os specific file separator
    if(user_input.at(0)!='/' || user_input.at(0)!='\\'){
        #ifdef _WIN32
            userInput = "\\"+userInput;
        #elif defined(__linux__) || defined(__APPLE__)
            user_input = "/"+user_input;
        #endif
    }

    std::string full_path = cmd(user_input); //full path
    std::ifstream file(full_path); //convert to file type

    //if file exists: open, else: error
    if(file){
        std::string full_cmd = "open "+full_path;
        std::system(full_cmd.c_str());
    }else{
        std::perror("ERROR");
    }
}