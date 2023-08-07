/*
    dynamic array of objects at runtime
        can be used to create csv/tsv
*/

#include <iostream>

class Item{
    public:
        std::string Name;
        int Rating;
        float Price;
        char Nice;
};

void newLine();
void printItems(Item* items,int size);

int main(){
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    newLine();

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

        newLine();
        items[i] = t;
    }

    printItems(items,size);

    //de-allocate memory
    delete []items;
    return 0;
}

//print new line
void newLine(){
    std::cout << "\n";
}

//print array contents
void printItems(Item* items,int size){
    //title
    std::cout << "All entered values:\n\n";

    //headers
    std::cout << "Index\t" << "Name\t" << "Rating\t" << "Price\t" << "Nice\n";

    //content
    for(int i=0;i<size;i++){
        std::cout << "Item " << i+1 << "\t" << items[i].Name << "\t" 
            << items[i].Rating << "\t" << items[i].Price << "\t" 
            << items[i].Nice << "\n";
    }
}