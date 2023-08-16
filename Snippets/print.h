#include <iostream>
#include <string>

template<typename T1,typename T2>
std::string formatPrint(T1 arg1,T2 arg2){
    std::string result = arg1+" "+arg2+"\n";
    return result;
}

void newln(){
    std::cout << "\n";
}