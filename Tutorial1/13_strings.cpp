#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter name:\n";

    //include spaces
    std::getline(std::cin,name);

    //string length method
    if(name.length()==1){
        std::cout << "Name is too short\n";
    }

    //empty
    if(name.empty()){
        std::cout << "No name entered\n";
    }else{
        std::cout << "Hello " << name << "\n";
    }

    //clear
    // name.clear()

    //append
    std::cout << "Append name: " << name.append(" Jr.") << "\n";

    //display letters by position
    std::cout << name.at(0) << "\n";

    //insert
    std::cout << name.insert(0,"!") << "\n";

    //find
    std::cout << name.find(' ') << "\n";

    //rm char by position
    // std::cout << name.erase(0,1) << "\n";

    return 0;
}