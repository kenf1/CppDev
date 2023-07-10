/*
    convert a number between 1 and 31 (in binary) to a sequence of actions in the secret handshake
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> createActions(int input);
void addAction(int input,int bin,const std::string& action,std::vector<std::string>& storage);

int main(){
    int inputNum;

    do{
        std::cout << "Enter a number between 1 & 31: ";
        std::cin >> inputNum;
    }while(inputNum<1 || inputNum>31);

    std::vector<std::string> actions = createActions(inputNum);
    
    //print out actions vector
    for(const auto& element : actions){
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}

//create vector of actions
std::vector<std::string> createActions(int input){
    std::vector<std::string> temp;

    //if x, push_back
    addAction(input,0b00001,"wink",temp);
    addAction(input,0b00010,"double blink",temp);
    addAction(input,0b00100,"close eyes",temp);
    addAction(input,0b01000,"jump",temp);

    //reverse
    if(input & 0b10000)
        std::reverse(temp.begin(),temp.end());
    return temp;
}

/*
    nested function:
        takes int, binary, action to append, vector to store actions
*/
void addAction(int input,int bin,const std::string& action,std::vector<std::string>& storage){
    if(input & bin){
        storage.push_back(action);
    }
}