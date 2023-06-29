#include <iostream>

int main(){
    const int SIZE = 6;
    std::string items[SIZE];

    //fill 1st 1/2 w/ item & 2nd 1/2 w/ placeholder
    fill(items,items+SIZE/2,"item");
    fill(items+SIZE/2,items+SIZE,"placeholder");

    for(std::string item:items){
        std::cout << item << "\n";
    }

    return 0;
}