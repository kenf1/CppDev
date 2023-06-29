#include <iostream>

//name value pairs
enum Day {sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6};

int main(){
    Day today = friday;

    //can use name or value
    switch(today){
        case friday: std::cout << "It's friday, friday, friday...\n";
            break;
        case thursday: std::cout << "Tomorrow is friday, friday, friday...\n";
            break;
        case saturday: std::cout << "Yesterday was friday, friday, friday...\n";
            break;
        default: std::cout << "Friday?\n";
            break;
    }

    return 0;
}