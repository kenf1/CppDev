/*
    convert a number between 1 and 31 (in binary) to a sequence of actions in the secret handshake
*/

#include <iostream>
#include <bitset>

std::string int2bin(int input);
std::string strReversal(std::string input);

int main(){
    std::cout << strReversal(int2bin(26)) << "\n";
    return 0;
}

//convert integer to binary
std::string int2bin(int input){
    std::string bin = std::bitset<5>(input).to_string();
    return bin;
}

//invert string function (from 03_reverse_string.cpp)
std::string strReversal(std::string input){
    //temp var to store input
    std::string temp;

    //for loop of decreasing increment + append to temp
    for(int i=input.length()-1;i>=0;i--){
        temp += input[i];
    }

    return temp;
}

//
// std::string actions(std::string input){
//     std::string temp;

//     for(int i=0;i<input.length();i++){
        
//     }

//     return temp;
// }