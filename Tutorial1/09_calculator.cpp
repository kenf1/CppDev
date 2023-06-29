#include <iostream>

typedef std::string text_t;

int main(){
    char op;
    double num1,num2,result;
    text_t lineBreak{"*********************************\n"};

    std::cout << lineBreak;
    std::cout << "Simple calculator CLI application\n";

    std::cout << "Enter operation (+ - * /): \n";
    std::cin >> op;

    std::cout << "Enter num1: \n";
    std::cin >> num1;

    std::cout << "Enter num2: \n";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            std::cout << "Enter an accepted operation (+ - * /): \n";
            break;
    }

    std::cout << "Your result is: " << result << "\n";
    std::cout << lineBreak;

    return 0;
}