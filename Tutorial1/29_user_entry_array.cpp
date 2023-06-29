#include <iostream>

//enter 5 items, store, print
int main(){
    std::string items[5];
    int size = sizeof(items)/sizeof(items[0]);
    std::string temp;

    for(int i=0;i<size;i++){
        std::cout << "Enter something or `q` to quit: #" << i+1 << ": ";
        std::getline(std::cin,temp);
        if(temp=="q"){
            break;
        }else{
            items[i] = temp;
        }
    }

    //print all entered items
    std::cout << "You entered the following:\n";
    for(std::string item:items){
        std::cout << item << "\n";
    }

    return 0;
}