#include <iostream>

//use for loop if repeating code set num of times
int main(){
    //for i in 1:3, print, i+1
    for(int i=1;i<=3;i++){
        std::cout << "For loop active\n";
    }

    std::cout << "For loop INACTIVE\n";

    return 0;
}