#include <iostream>

/*
    determine whether entered year is leap year
    rules:
        on every year that is evenly divisible by 4
            except every year that is evenly divisible by 100
            unless the year is also evenly divisible by 400
*/

int main(){
    int year;

    std::cout << "Enter a year to test:\n";
    std::cin >> year;
    
    if(year%4==0){
        //divisible by 100 & 400
        if(year%100==0 && year%400==0){
            std::cout << "Leap year\n";
        //divisible by 4 & 100 but not 400
        }else if(year%100==0){
            std::cout << "Not a leap year\n";
        //only divisible by 4
        }else{
            std::cout << "Leap year\n";
        }
    //not divisible by 4
    }else{
        std::cout << "Not a leap year\n";
    }
    
    return 0;
}