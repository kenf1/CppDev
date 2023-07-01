#include <iostream>

int main(){
    std::string 
        tempUsername,tempPassword,
        username = "user",
        password = "pass";

    std::cout << "Welcome to login CLI app. Entries are case-sensitive.\n\n";

    /*
        continuous loop until both username & password are correct
        prints result @ end of each loop
    */
    do{
        std::cout << "Enter username: ";
        std::cin >> tempUsername;

        std::cout << "Enter password: ";
        std::cin >> tempPassword;

        //print confirmation message
        if(tempUsername==username && tempPassword==password){
            std::cout << "User authenticated.\n";
        }else{
            std::cout << "Incorrect credentials.\n";
        }
    }while(tempUsername!=username && tempPassword!=password);

    return 0;
}