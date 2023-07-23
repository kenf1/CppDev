/*
    open application from user input
*/

#include <cstdlib>
#include <iostream>
#include <string>

int main(){
    std::string appName;
    
    std::cout << "Enter name of application to open:\n";
    std::getline(std::cin,appName);
    
    //ensure 1st char uppercase
    if(std::islower(appName[0])){
        appName[0] = std::toupper(appName[0]);
    }

    std::string command = "open -a "+appName;
    system(command.c_str());

    return 0;
}