#include <iostream>

/*
    triangle: Determine if a triangle is equilateral, isosceles, or scalene.
*/

int main(){
    double side1,side2,side3;

    std::cout << "Enter the lengths of each side of a triangle (3):\n";
    std::cin >> side1 >> side2 >> side3;

    if(side1==side2 && side2==side3){
        std::cout << "Equilateral triangle\n";
    }else if(side1!=side2 && side2!=side3 && side1!=side3){
        std::cout << "Scalene triangle\n";
    }else{
        std::cout << "Isosceles triangle\n";
    }
    return 0;
}