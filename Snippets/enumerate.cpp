// enumerate (old ver)

#include <array>
#include <iostream>
#include <ranges>
#include <string_view>

int main(){
    std::array<std::string_view,5>data{"Item 1","Item 2","Item 3"};

    for(const auto str:data){
        std::cout << str << "\n";
    }
}