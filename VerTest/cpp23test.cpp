//test if compiler supports C++23 standard

#include <iostream>
#include <version>

int main(){
    std::cout << "C++ version: " << __cplusplus << '\n';
  
    #if __has_include(<ranges::views::enumerate>)
        std::cout << "ranges::views::enumerate is supported.\n";
    #else
        std::cout << "ranges::views::enumerate is not supported.\n";
    #endif

    return 0;
}