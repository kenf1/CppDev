#include <iostream>

//forward declaration (allow user define function later)
int add(int x, int y);

int main(){
    std::cout << add(1,2) << "\n";
    return 0;
}

int add(int x, int y){
    return x+y;
}