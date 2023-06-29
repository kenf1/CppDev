#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces,char player);
void cpuMove(char *spaces,char cpu);
bool checkWinner(char *spaces,char player,char cpu);
bool checkTie(char *spaces);

//tic-tac-toe game
int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X',cpu = 'O';
    bool running = true;

    //show board
    drawBoard(spaces);

    //while game is running
    while(running){
        //player's move
        playerMove(spaces,player);
        drawBoard(spaces);

        if(checkWinner(spaces,player,cpu)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running = false;
            break;
        }

        //cpu's move
        cpuMove(spaces,cpu);
        drawBoard(spaces);

        if(checkWinner(spaces,player,cpu)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running = false;
            break;
        }
    }

    return 0;
}

//create 2 vertical
void vert2(){
    std::cout << "     |     |     " << "\n";
}

//create 3 underlines + 2 vertical
void uline3(){
    std::cout << "_____|_____|_____" << "\n";
}

//placeholder for entries
void fillSpace(char *spaces,int entry){
    std::cout << "  " << spaces[entry] << "  |  " << spaces[entry+1] << "  |  " << spaces[entry+2] << "  " << "\n";
}

void drawBoard(char *spaces){
    //orig code
    // std::cout << "     |     |     " << "\n";
    // std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << "\n";
    // std::cout << "_____|_____|_____" << "\n";
    // std::cout << "     |     |     " << "\n";
    // std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << "\n";
    // std::cout << "_____|_____|_____" << "\n";
    // std::cout << "     |     |     " << "\n";
    // std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << "\n";
    // std::cout << "     |     |     " << "\n";
    
    std::cout << "\n";

    //row 1
    vert2();
    fillSpace(spaces,0);
    uline3();

    //row 2
    vert2();
    fillSpace(spaces,3);
    uline3();

    //row 3
    vert2();
    fillSpace(spaces,6);
    vert2();

    std::cout << "\n";
}

void playerMove(char *spaces,char player){
    int number;

    do{
        std::cout << "Enter coordinate to place marker: {1-9}\n";
        std::cin >> number;
        number --;
        if(spaces[number]==' '){
            spaces[number] = player;
            break;
        }
    }while(!number>0||!number<8);
}

void cpuMove(char *spaces,char cpu){
    int number;
    srand(time(0));

    do{
        number = rand()%9;
    }while(spaces[number]!=' ');

    spaces[number] = cpu;
}

bool checkWinner(char *spaces,char player,char cpu){
    char tiles[] = {player,cpu};

    for (char tile:tiles){
        if(
            //rows
            spaces[0] == tile && spaces[0] == spaces[1] && spaces[1] == spaces[2] ||
            spaces[3] == tile && spaces[3] == spaces[4] && spaces[4] == spaces[5] ||
            spaces[6] == tile && spaces[6] == spaces[7] && spaces[7] == spaces[8] ||
            //col
            spaces[0] == tile && spaces[0] == spaces[3] && spaces[3] == spaces[6] ||
            spaces[1] == tile && spaces[1] == spaces[4] && spaces[4] == spaces[7] ||
            spaces[2] == tile && spaces[2] == spaces[5] && spaces[5] == spaces[8] ||
            //diagonal
            spaces[0] == tile && spaces[0] == spaces[4] && spaces[4] == spaces[8] ||
            spaces[6] == tile && spaces[6] == spaces[4] && spaces[4] == spaces[2]
        ){
            if(tile == player){
                std::cout << "WIN\n";
            }else{
                std::cout << "LOSE\n";
            }
            return true;
        }
    }
    return false;
}

bool checkTie(char *spaces){
    int counter = 0;
    
    for(int i=0;i<=8;i++){
        if(spaces[i] == ' '){
            counter++;
        }
    }

    if(counter == 0){
        std::cout << "TIE\n";
        return true;
    }else{
        return false;
    }
    return 0;
}