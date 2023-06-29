#include <iostream>

int main(){
    int temp;

    std::cout << "Enter a temperature (in Celcius):\n";
    std::cin >> temp;

    //&& = and
    if(temp>0 && temp<30){
        std::cout << "Temperature is good\n";
    }else{
        std::cout << "Temperature NOT good\n";
    }

    //|| = or
    if(temp<0 || temp>100){
        std::cout << "Outside freezing/boiling range\n";
    }else{
        std::cout << "Not good, not bad\n";
    }

    //! = not
    if(temp!=1){
        std::cout << "You did not enter my favorite number\n";
    }

    return 0;
}