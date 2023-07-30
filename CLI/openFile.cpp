/*
    open file using default application based on file type
*/

#include <iostream>
#include <cstdlib>

std::string cmd(std::string relativePath);

int main(){
    /*
        create:
            home path
            create full path using home path
    */
    // std::string home = std::getenv("HOME"),
    //     full_path = home+"/Desktop/temp.docx",
    //     full_cmd = "open "+full_path;

    // //open file using default application
    // std::system(full_cmd.c_str());

    std::system(cmd("/Desktop/temp.docx").c_str());
    return 0;
}

std::string cmd(std::string relativePath){
    std::string home = std::getenv("HOME"),
        full_path = home+relativePath,
        full_cmd = "open "+full_path;
    
    return full_cmd;
}