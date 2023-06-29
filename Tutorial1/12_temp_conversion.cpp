#include <iostream>

//cli app to convert temperature from F to C & vice versa
int main(){
    char tempUnit;
    double temp,result;

    std::cout << "Temperature conversion CLI app:\n";
    
    std::cout << "Enter unit:\n";
    std::cin >> tempUnit;

    std::cout << "Enter a temperature:\n";
    std::cin >> temp;

    //if else + exceptions
    switch(tempUnit){
        case 'F':
            result = (temp-32)*5/9;
            break;
        case 'C':
            result = (temp+32)*9/5;
            break;
        default:
            std::cout << "Incorrect unit entered (C/F):\n";
            break;
    }
    
    std::cout << "Converted temperature is: " << result << "\n";

    return 0;
}