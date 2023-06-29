#include <iostream>

int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=10;j++){
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    //print rectangle (size of user choice)
    int rows,cols;
    char symbol;

    std::cout << "How many rows?\n";
    std::cin >> rows;

    std::cout << "How many cols?\n";
    std::cin >> cols;

    std::cout << "Symbol to use? ";
    std::cin >> symbol;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }

    return 0;
}