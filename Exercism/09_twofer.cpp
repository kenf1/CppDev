/*
    determine what you will say as you give away the extra cookie:
        say name if known, else use you
*/

#include <iostream>

void twofer(const std::string friendName);

int main(){
    std::string friendName;
    std::cout << "Enter friend name: ";
    std::getline(std::cin,friendName);

    twofer(friendName);

    return 0;
}

void twofer(const std::string friendName){
    if(friendName==""){
        std::cout << "One for you, one for me\n";
    }else{
        std::cout << "One for " << friendName << ", one for me\n";
    }
}