/*
    confirm environment variable
*/

#include <iostream>
#include <cstdlib>

void get_myvar(const char* env_name){
    char* value = std::getenv(env_name);
    std::cout << "Value is: " << value << "\n";
}