#include <iostream>
#include <format>

int main(){
    std::cout << std::format("{0}, {1}\n","value 1","value 2");
    return 0;
}