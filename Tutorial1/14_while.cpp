#include <iostream>

int main(){
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name:\n";
        std::getline(std::cin,name);
    }

    //infinite loop
    // while(1==1){
    //     std::cout << "success?";
    // }

    std::cout << "Success\n";
    return 0;
}