#include <iostream>

//answer for End of Ch 1 quiz, question 3

/*program that:
    asks user enter 2 num
    print sum & difference*/
int main(){
    //create 2 uninitialized var
    int num1{},num2{};
    
    std::cout << "Enter 1st number: \n";
    std::cin >> num1;

    std::cout << "Enter 2nd number: \n";
    std::cin >> num2;

    //print sum & difference
    std::cout << num1 << " + " << num2 << " = " << num1+num2 << "\n";
    std::cout << num1 << " - " << num2 << " = " << num1-num2 << "\n";

    return 0;
}