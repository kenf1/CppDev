/*
    arrays of objects
*/

#include <iostream>

class Item{
    public:
        std::string Name;
        int Rating;
        float Price;
        bool YouLikeThat;

    //empty constructor
    Item(){}

    //constructor
    Item(std::string name,int rating,float price,bool likethat){
        Name = name;
        Rating = rating;
        Price = price;
        YouLikeThat = likethat;
    }
};

int main(){
    int num_arrary[5] = {1,2,3,4,5};

    //add single (uses empty constructor)
    Item i1;
    i1.Name = "Mechanical Keyboard";
    i1.Rating = 10;
    i1.Price = 3.50; //tree fidy
    i1.YouLikeThat = 1; //You like that?! I like that!

    //add multiple (uses constructor)
    /*
        Note: gets error in code runner using clang but not w/ g++ 
    */
    Item must_have[3] = {
        {"gaming mouse",10,4.20,1},
        {"gaming chair",10,123.45,1},
        {"drink",5,1.01,0}
    };

    std::cout << "Must have item: " << must_have[0].Name << "\n";

    return 0;
}