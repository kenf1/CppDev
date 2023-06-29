#include <iostream>
#include <ctime>

//gen pseudo-random num
int main(){
    srand(time(NULL));

    //random num btwn 1-6
    int num = (rand()%6)+1;
    std::cout << num << "\n";

    //random event generator
    int randNum = rand()%5+1;

    switch(randNum){
        case 1:
            std::cout << "item 1\n";
            break;
        case 2:
            std::cout << "item 2\n";
            break;
        case 3:
            std::cout << "item 3\n";
            break;
        case 4:
            std::cout << "item 4\n";
            break;
        case 5:
            std::cout << "Jackpot\n";
            break;
        default:
            std::cout << "...\n";
            break;
    }

    return 0;
}