/*
    print regex matches from inputText
*/

#include <iostream>
#include <string>
#include <regex>

int main(){
    //prompt user
    std::string inputText;
    std::cout << "Enter a string: ";
    std::getline(std::cin,inputText);

    //only keep digits (≥1)
    std::regex pattern("[0-9]+");
    std::smatch matches;

    //print matches if found, else no matches found
    if(std::regex_search(inputText,matches,pattern)){
        std::cout << "Matches found:" << "\n";

        //print out match for each match in matches
        for(const auto& match : matches){
            std::cout << match.str() << "\n";
        }
    }else{
        std::cout << "No matches found." << "\n";
    }

    return 0;
}