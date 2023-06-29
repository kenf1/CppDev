#include <iostream>

//inheritance

//main class
class Ex1{
    public:
        bool alive = true;
        void eat(){
            std::cout << "Can perform\n";
        }
};

//inherit from main class
class D1: public Ex1{
    public:
        void chat(){
            std::cout << "public static void main string args\n";
        }
};

//override eat() from parent class (but only for C1)
class C1: public Ex1{
    public:
        void eat(){
            std::cout << "Hello World\n";
        }
};

int main(){
    D1 d1;
    std::cout << d1.alive << "\n";
    d1.eat();
    d1.chat();

    C1 c1;
    c1.eat();

    return 0;
}