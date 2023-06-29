#include <iostream>

class Pizza{
    public:
        std::string topping1;

    //overloading constructors = can have constructors of same name long as # of args different
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    //no toppings
    Pizza(){
        
    }
};

int main(){
    Pizza pizza1("top1");
    Pizza pizza2;

    std::cout << pizza1.topping1 << "\n";
    // std::cout << pizza2 << "\n";

    return 0;
}