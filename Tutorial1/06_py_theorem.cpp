#include <iostream>
#include <cmath>

//create program to calculate hypotenuse of right triangle
int main(){
    double a,b,c;

    std::cout << "Enter length of side a: \n";
    std::cin >> a;

    std::cout << "Enter length of side b: \n";
    std::cin >> b;

    // //calculate (first pass)
    // a = pow(a,2);
    // b = pow(b,2);
    // c = sqrt(a+b);

    // std::cout << "Length of side c is: " << c << "\n";

    //shortened
    std::cout << "Length of side c is: " << sqrt(pow(a,2)+pow(b,2)) << "\n";

    return 0;
}