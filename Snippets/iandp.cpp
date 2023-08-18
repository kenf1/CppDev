/*
    inheritance & polymorphism
        inheritance = inherit from another class
        polymorphism = change inherited methods
*/

#include <iostream>

class Sample{
    public:
        void out(){
            std::cout << "Output text\n";
        }

        void out1(){
            std::cout << "Original text\n";
        }
};

class Inherit:public Sample{
    public:
        void out(){
            std::cout << "Inherited output text\n";
        }
};

int main(){
    Sample Ex1;
    Inherit Ex2;

    //inherit + polymorphism
    Ex1.out();
    Ex2.out();

    //inherit only
    Ex1.out1();
    Ex2.out1();

    return 0;
}