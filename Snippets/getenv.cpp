#include <iostream>
#include <cstdlib>

//get & print PATH vars
int main(){
    if(const char* env_p = std::getenv("PATH"))
        std::cout << "PATH: " << env_p << "\n";
    return 0;
}