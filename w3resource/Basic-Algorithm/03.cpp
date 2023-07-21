/*
    Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.
*/

#include <iostream>

std::string if30(int value1,int value2);

int main(){
    std::cout << "Expect true: " << if30(15,15) << "\n";
    std::cout << "Expect false: " << if30(15,16) << "\n";

    return 0;
}

std::string if30(int value1,int value2){
    const int check = 30;
    const std::string t = "True", f = "False";
    
    // std::string result;

    // if(value1==check || value2==check || value1+value2==check){
    //     result = t;
    // }else{
    //     result = f;
    // }

    std::string result = value1==check || value2==check || value1+value2==check ? t:f;

    return result;
}