#include <iostream>

int userInput(){
    std::cout << "Enter value: \n";
    int inputValue{};
    std::cin >> inputValue;
    return inputValue;
}

int main(){
    int toPrint{userInput()};
    std::cout << "You entered " << toPrint << "\n";
    // return 0;

    //can also use following to show successful
    return EXIT_SUCCESS;
}