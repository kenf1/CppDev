#include <iostream>
#include <ctime>

//vars to store what user & computer chooses
char userChoice(),compChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);

//rock,paper,scissor game
int main(){
    char player,computer;

    player = userChoice();
    std::cout << "Player chose: ";
    showChoice(player);

    computer = compChoice();
    std::cout << "Computer chose: ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}

char userChoice(){
    char player;
    
    //can only accept r,p,s as input
    do{
        std::cout << "Rock paper scissors game\n Choices:\n  r = rock\n  p = paper\n  s = scissor\n"; //add extra space for indent
        std::cin >> player;
    }while(player!='r' && player!='p' && player!='s');

    return player;
}

char compChoice(){
    srand(time(0));
    int num = rand()%3+1;
    
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissor\n";
            break;
    }
}

void chooseWinner(char player,char computer){
    switch(player){
        case 'r':
            if(computer=='r'){
                std::cout << "Tie\n";
            }else if(computer=='p'){
                std::cout << "You lose\n";
            }else{
                std::cout << "You win\n";
            }
            break;

        case 'p':
            if(computer=='r'){
                std::cout << "You win\n";
            }else if(computer=='p'){
                std::cout << "Tie\n";
            }else{
                std::cout << "You lose\n";
            }
            break;
        
        case 's':
            if(computer=='r'){
                std::cout << "You lose\n";
            }else if(computer=='p'){
                std::cout << "You win\n";
            }else{
                std::cout << "Tie\n";
            }
            break;
    }
}