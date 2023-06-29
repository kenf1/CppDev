#include <iostream>
#include <cmath>

int main(){
    //create x,y,z + more vars all of type double
    double x=3,y=4,z;
    double z1;

    //find max
    z = std::max(x,y);

    //exponents
    z1 = pow(x,y);

    //floor = round down, ceil = round up
    std::cout << z << "\n"
        << z1 << "\n"
        << round(3.14) << "\n"
        << floor(3.14) << "\n"
        << ceil(3.14) << "\n";

    return 0;
}