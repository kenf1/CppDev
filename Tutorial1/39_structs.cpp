#include <iostream>

//can contain many data types
struct Item{
    std::string name;
    double score;
    bool used;
};

void printItems(Item item);
void renameItem(Item item,std::string newName);

int main(){
    Item item1,item2;
    
    item1.name = "item 1";
    item1.score = 3.50;
    item1.used = false;

    //print directly
    std::cout << item1.name << " " << item1.score << " " << item1.used << "\n";

    item2.name = "item 2";
    item2.score = 4.20;
    item2.used = true;

    //pass thru function
    printItems(item2);

    //rename item & print
    renameItem(item2,"Best item");

    return 0;
}

void printItems(Item item){
    std::cout << item.name << " " << item.score << " " << item.used << "\n";
}

void renameItem(Item item,std::string newName){
    item.name = newName;
    std::cout << item.name << " " << item.score << " " << item.used << "\n";
}