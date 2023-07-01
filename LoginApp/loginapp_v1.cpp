#include <iostream>

//user has to re-run app after each failed attempt
int main(){
    std::string 
        tempUsername,tempPassword,
        username = "user",
        password = "pass";

    std::cout << "Enter username:\n";
    std::cin >> tempUsername;

    std::cout << "Enter password:\n";
    std::cin >> tempPassword;

    if(tempUsername==username && tempPassword==password){
        std::cout << "User authenticated.\n";
    }else{
        std::cout << "Incorrect credentials.\n";
    }

    return 0;
}