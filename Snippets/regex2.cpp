/*
    only accept digits for inputText
*/

#include <iostream>
#include <string>
#include <regex>

int main(){
    std::string inputText;
    std::regex regexPattern("[0-9]+"); //only allow digits

    //do while loop until inputText only contains digits
    do{
        std::cout << "Enter a number: ";
        std::getline(std::cin,inputText);
    }while(!std::regex_match(inputText,regexPattern));

    std::cout << "Result: " << inputText << "\n";

    return 0;
}