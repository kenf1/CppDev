/*
    dynamic array of objects at runtime
        can be used to create csv/tsv
*/

#include "print.h"
#include "save_tsv.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

class Item{
    public:
        std::string Name;
        int Rating;
        float Price;
        char Nice;
};

std::string rowContent(Item* items,int size,int i,std::string type);

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
    std::cout << headers("csv");

    //tsv row content
    for(int i=0;i<size;i++){
        std::cout << rowContent(items,size,i,"tsv");
    }

    //write to file
    std::ofstream outputFile("out.tsv");

    if(outputFile.is_open()){
        //headers
        outputFile << headers("csv");
        
        //rows
        for(int i=0;i<size;i++){
            outputFile << rowContent(items,size,i,"tsv");
        }

        outputFile.close();

        std::cout << "File successfully created.\n";
    }else{
        std::cout << "Process failed.\n";
    }

    //de-allocate memory
    delete []items;
    return 0;
}

/*
    store array as tsv or csv row
        default will be csv
*/
std::string rowContent(Item* items,int size,int i,std::string type){
    std::string sep;

    if(type=="tsv"){
        sep = "\t";
    }else{
        sep = ",";
    }

    //store std::cout as std::string
    std::ostringstream oss;

    oss << "Item " << i+1 << sep << items[i].Name << sep 
        << items[i].Rating << sep << items[i].Price << sep 
        << items[i].Nice << "\n";
        
    std::string result = oss.str();
    return result;
}