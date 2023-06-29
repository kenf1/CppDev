#include <iostream>

//similar to python but need to add public
class Example{
    public:
        std::string name;
        std::string exDescribe;
        int rating;

        void showcase(){
            std::cout << "I'm the best\n";
        }
};

int main(){
    Example ex1;
    
    //assign
    ex1.name = "Chad";
    ex1.exDescribe = "bro";
    ex1.rating = 10;

    std::cout << ex1.name << " " << ex1.exDescribe << " " << ex1.rating << "/10\n";
    ex1.showcase();

    return 0;
}