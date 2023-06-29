#include <iostream>

int main(){
    int age;

    std::cout << "Enter your age to be granted access: \n";
    std::cin >> age;

    if(age>=18){
        std::cout << "Verified, you are granted access \n";
    }else{
        std::cout << "Access denied. Good day \n";
    }

    return 0;
}