#include <iostream>

void printInfo(std::string var1,double var2);

//constant parameters
int main(){
    const std::string var1 = "something";
    const double var2 = 3.50;

    //won't compile (unless commented out)
    // var2 = 4.99;

    printInfo(var1,var2);

    return 0;
}

void printInfo(std::string var1,double var2){
    std::cout << var1 << " " << var2 << "\n";
}