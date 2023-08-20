//test if compiler supports C++20 standard

#include <iostream>
#include <version>

int main(){
    std::cout << "C++ version: " << __cplusplus << '\n';
  
    #if __has_include(<span>)
        std::cout << "std::span is supported.\n";
    #else
        std::cout << "std::span is not supported.\n";
    #endif

    return 0;
}