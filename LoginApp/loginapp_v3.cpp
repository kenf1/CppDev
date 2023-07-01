#include <iostream>

int main(){
    std::string 
        tempUsername,tempPassword,
        username = "user",
        password = "pass";

    int i = 0;

    std::cout << "Welcome to login CLI app. Entries are case-sensitive.\n\n";

    /*
        3 attempts to enter correct username & password
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
            i++;
            std::cout << "Incorrect credentials.\n";
        }
    }while(tempUsername!=username && tempPassword!=password && i<3);

    //show message when 3 attempts used up
    if(i>=3){
        std::cout << "3 attempts were given. No more attempts remaining. Try again later.\n";
    }

    return 0;
}