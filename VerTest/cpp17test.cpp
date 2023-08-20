//test if compiler supports C++17 standard

#include <iostream>
#include <version>

int main(){
    std::cout << "C++ version: " << __cplusplus << '\n';

    #ifdef __cpp_constexpr
        std::cout << "constexpr is supported\n";
    #else
        std::cout << "constexpr is not supported\n";
    #endif

    return 0;
}