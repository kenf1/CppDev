#include <iostream>
#include <thread>

void function1(char symbol);
void function2(char symbol);

int main(){
    //baseline
    // function1('+');
    // function2('-');

    // std::cout << "\n";

    //thread
    std::thread w1(function1,'+');
    std::thread w2(function2,'-');

    //wait for thread to finish before exiting
    w1.join();
    w2.join();

    std::cout << "\n";
    return 0;
}

/*
    need to use larger i to start seeing differences per run (dep on computer)
*/

void function1(char symbol){
    for(int i=0;i<=3000;i++){
        std::cout << symbol;
    }
}

void function2(char symbol){
    for(int i=0;i<=3000;i++){
        std::cout << symbol;
    }
}