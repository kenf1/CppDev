#include <iostream>

int main(){
  #ifdef _WIN32
    std::cout << "Windows" << "\n";
  #elif __linux__
    std::cout << "Linux" << "\n";
  #elif __APPLE__
    std::cout << "MacOS" << "\n";
  #else
    std::cout << "Unknown operating system" << "\n";
  #endif
  
  return 0;
}