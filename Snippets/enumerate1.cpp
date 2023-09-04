//C++23 enumerate

#include <array>
#include <iostream>
#include <ranges>
#include <string_view>

int main(){
    std::array<std::string_view,5>data{"Item 1","Item 2","Item 3"};

    for(const auto [index,str]:data | std::ranges::views::enumerate){
        std::cout << index << ' ' << str << "\n";
    }
}