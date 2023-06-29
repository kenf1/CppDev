#include <iostream>

//concatenate Part 1 to entered string
std::string printFunc(std::string contents){
    return "Part 1 "+contents;
}

//tell compiler function exists but defined later
void newFunc();

int main(){
    std::cout << printFunc("123") << "\n";
    
    newFunc();
    
    return 0;
}

//define function
void newFunc(){
    std::cout << "new function contents\n";
}