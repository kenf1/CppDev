//test if compiler supports C++{VERSION} standard

#include <iostream>
#include <version>

int main(){
    std::cout << "C++ version: " << __cplusplus << '\n';

    return 0;
}