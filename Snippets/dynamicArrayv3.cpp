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
#include <regex>

class Item{
    public:
        std::string Name;
        int Rating;
        float Price;
        char Nice;
};

int arraySize();
Item* arrayContent(int size);
std::string rowContent(Item* items,int size,int i,std::string type);
std::string fileExt(const std::string& filename);
void toFile(Item* items,int size,std::string fileName);

int main(){
    //prompt user for array size
    int size = arraySize();
    newln();

    //prompt user for array contents
    Item* items = arrayContent(size);

    //save to file
    toFile(items,size,"output.csv");

    //de-allocate memory
    delete []items;
    return 0;
}

//prompt user for array size
int arraySize(){
    int size;
    
    std::cout << "Enter size of array: ";
    std::cin >> size;
    
    return size;
}

//prompt user for array contents
Item* arrayContent(int size){
    //pointer to new array of size
    Item* items = new Item[size];
    
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
  return items;
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

//obtain extension of file
std::string fileExt(const std::string& fileName){
    //take everything after last "." in string
    std::regex re(".*\\.([^\\.]*)$");
    std::smatch match;
    
    if(std::regex_search(fileName,match,re)){
        return match[1].str();
    }else{
        /*
            default return
                fixes: warning: non-void function does not return a value in all control paths [-Wreturn-type]
        */
        return "";
    }
}

//write to file
void toFile(Item* items,int size,std::string fileName){
    std::ofstream outputFile(fileName);
    std::string ext = fileExt(fileName);

    if(outputFile.is_open()){
        //headers
        outputFile << headers("csv");
        
        //rows
        for(int i=0;i<size;i++){
            outputFile << rowContent(items,size,i,ext);
        }

        outputFile.close();

        std::cout << "File successfully created.\n";
    }else{
        std::cout << "Process failed.\n";
    }
}