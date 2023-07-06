//reverse a string

#include <iostream>
#include <string>

std::string strReversal(std::string input);

int main(){
    std::string inputString;

    //prompt user (ensure can handle spaces)
    std::cout << "Enter a string to reverse:\n";
    std::getline(std::cin,inputString);

    //using loop
    std::cout << strReversal(inputString) << "\n";

    //best answer
    std::string reversed(inputString.rbegin(),inputString.rend());
    std::cout << reversed << "\n";

    return 0;
}

std::string strReversal(std::string input){
    //temp var to store input
    std::string temp;

    //for loop of decreasing increment + append to temp
    for(int i=input.length()-1;i>=0;i--){
        temp += input[i];
    }

    return temp;
}