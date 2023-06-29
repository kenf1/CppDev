#include <iostream>
#include <ctime>

//number guessing game that keeps track of tries
int main(){
    int actual,guess,tries{0};

    srand(time(NULL));
    actual = rand()%10+1;
    
    do{
        std::cout << "Guess a number between 1 and 10: ";
        std::cin >> guess;
        tries++;
        
        if(guess>actual){
            std::cout << "Over\n";
        }else if(guess<actual){
            std::cout << "Under\n";
        }else{
            std::cout << "Correct " << "Num tries = " << tries << "\n";
            // std::cout << actual << "\n";
        }
    }while(guess!=actual);

    return 0;
}