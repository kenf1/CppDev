#include <iostream>

//foreach = loop to traverse over iterable data set (less flexible but less code)
int main(){
    std::string items[] = {"item1","item2","item3","item4"};

    for(std::string item:items){
        std::cout << item << "\n";
    }

    int favNum[] = {69,420,785,93,239};

    for(int num:favNum){
        std::cout << num << "\n";
    }

    return 0;
}