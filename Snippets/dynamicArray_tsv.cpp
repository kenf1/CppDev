/*
    dynamic array of objects at runtime
        can be used to create csv/tsv
*/

#include "print.h"
#include "save_tsv.h"
#include <iostream>
#include <sstream>
#include <string>

class Item{
    public:
        std::string Name;
        int Rating;
        float Price;
        char Nice;
};

void newLine();
std::string rowContent(Item* items,int size,int i);

int main(){
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    newln();

    //pointer to new array of size
    Item* items = new Item[size];

    //enter data
    for(int i=0;i<size;i++){
        std::cout << "Item " << i+1 << "\n";
        
        Item t;
        std::cout << "Name: ";
        std::cin >> t.Name;

        std::cout << "Rating: ";
        std::cin >> t.Rating;

        std::cout << "Price: ";
        std::cin >> t.Price;

        std::cout << "Nice: ";
        std::cin >> t.Nice;

        newln();
        items[i] = t;
    }

    //tsv header
    std::cout << headers();

    //tsv row content
    for(int i=0;i<size;i++){
        std::cout << rowContent(items,size,i);
    }

    //de-allocate memory
    delete []items;
    return 0;
}

//store array as tsv row
std::string rowContent(Item* items,int size,int i){
    std::ostringstream oss;

    oss << "Item " << i+1 << "\t" << items[i].Name << "\t" 
        << items[i].Rating << "\t" << items[i].Price << "\t" 
        << items[i].Nice << "\n";
        
    std::string result = oss.str();
    return result;
}