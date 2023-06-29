#include <iostream>

int main(){
    std::string item[] = {"item1","item2","item3"};

    std::cout << item[2] << "\n";

    //length of array
    int arrayCount = end(item)-begin(item);
    std::cout << arrayCount << "\n";

    //arrayCount = 3, index 3 = 4th element
    for(int i=0;i<arrayCount;i++){
        std::cout << item[i] << "\n";
    }

    //alt length of array
    int altArrayCount = sizeof(item)/sizeof(std::string);
    std::cout << altArrayCount << "\n";

    return 0;
}