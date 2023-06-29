#include <iostream>

//data types
int main(){

    //integer
    int intVar{1};
    std::cout << intVar << "\n";

    //double
    double price{3.50};
    std::cout << price << "\n";

    //char (need single quotes for char, can only store single character)
    char letter{'B'};
    std::cout << letter << "\n";

    //boolean
    bool codeWizard{false};
    std::cout << codeWizard << " aka False \n";

    //string
    std::string strVar{"I will be a code wizard!"};
    std::cout << strVar << "\n";

    return 0;
}