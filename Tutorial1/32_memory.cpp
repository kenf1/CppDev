#include <iostream>

//pass by reference (preferred over pass by value)
void swap(std::string &x,std::string &y);

int main(){
    std::string var = "something";

    std::cout << &var << "\n";

    //swap vars
    std::string x = "value1";
    std::string y = "swap1";
    std::string temp;

    //pre-swap
    std::cout << x << " " << y << "\n";

    // temp = x;
    // x = y;
    // y = temp;

    // //post-swap
    // std::cout << x << " " << y << "\n";

    swap(x,y);
    std::cout << x << " " << y << "\n";

    return 0;
}

//use & to swap values by reference
void swap(std::string &x,std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}