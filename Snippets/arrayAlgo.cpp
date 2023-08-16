/*
    algorithms for array of objects
*/

#include "print.h"
#include <iostream>
#include <algorithm>

class Item{
    public:
        std::string Name;
        int Rating;
        char Quality;
        float Price;

        Item(std::string name,int rating,char quality,float price){
            Name = name;
            Rating = rating;
            Quality = quality;
            Price = price;
        }
};

bool byRating_asc(Item i1,Item i2);
bool byRating_desc(Item i1,Item i2);
bool byName_asc(const Item& i1,const Item& i2);
bool maxPrice(const Item& i1,const Item& i2);

int main(){
    //create array
    Item items[5]{
        {"Item1",10,'e',3.14},
        {"Item2",6,'n',9.06},
        {"Item3",9,'p',1.23},
        {"Item4",1,'p',1.21},
        {"Item5",3,'e',6.90}
    };

    /*
        array search
            loop through array until Item3
            then change Quality to 'e'
    */
    for(int i=0;i<=4;i++){
        if(items[i].Name == "Item3"){
            std::cout << "Item3 found at index " << i << "\n\n";
            std::cout << "Original quality grade: " << items[i].Quality << "\n";
            items[i].Quality = 'e';
            std::cout << "New quality grade: " << items[i].Quality << "\n";
            break; //end loop once object found
        }
    }

    newln();

    //sort items by rating
    // std::sort(items,items+5,byRating_asc);
    std::sort(items,items+5,byRating_desc);

    for(int i=0;i<=4;i++){
        std::cout << items[i].Name << ": " << items[i].Rating << "\n";
    }

    newln();

    //sort items by name
    std::sort(items,items+5,byName_asc);

    for(int i=0;i<=4;i++){
        std::cout << items[i].Name << "\n";
    }

    newln();

    //find max of Price
    Item* highestPrice = std::max_element(items,items+5,maxPrice);
    std::cout << "Highest price is: " << highestPrice->Price << "\n";

    return 0;
}

//sort by Rating (ascending)
bool byRating_asc(Item i1,Item i2){
    return i1.Rating < i2.Rating;
}

//sort by Rating (descending)
bool byRating_desc(Item i1,Item i2){
    return i1.Rating > i2.Rating;
}

//sort by Name in alphabetical order
bool byName_asc(const Item& i1,const Item& i2){
    return i1.Name < i2.Name;
}

//find max price of items in array
bool maxPrice(const Item& i1,const Item& i2){
    return i1.Price < i2.Price;
}