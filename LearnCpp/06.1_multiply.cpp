#include <iostream>

int main(){
    //ask user enter #
    std::cout << "Enter a number: \n";

    int userInput{};
    std::cin >> userInput;

    //print userInput, 2x, 3x, 4x
    std::cout << "You entered: " << userInput 
        << "\n 2x the number you entered is: " << userInput * 2
        << "\n 3x the number you entered is: " << userInput * 3 << "\n";

    return 0;
}