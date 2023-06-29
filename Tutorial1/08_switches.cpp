#include <iostream>

//use switches to simplify if else if
int main(){
    int month;
    std::cout << "Enter a month: \n";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January\n";
            break;
        case 2:
            std::cout << "It is February\n";
            break;
        default:
            std::cout << "Other cases\n";
    }

    return 0;
}