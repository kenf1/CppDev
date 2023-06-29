#include <iostream>

//ternary = replacement for if else
int main(){
    int grade;

    std::cout << "Enter your grade:\n";
    std::cin >> grade;

    //condition ? if : else
    grade >= 70 ? std::cout << "Pass\n":std::cout << "Fail\n";

    return 0;
}