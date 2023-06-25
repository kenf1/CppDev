#include <iostream>

int main(){
    //ask user enter #
    std::cout << "Enter a number: \n";

    int userInput{};
    std::cin >> userInput;

    //prints 2x of #
    // int toShow{};
    // toShow = userInput * 2;
    // std::cout << "2x the number you entered is: " << toShow << "\n";

    //better ver
    std::cout << "2x the number you entered is: " << userInput * 2 << "\n";

    return 0;
}