/*
    count & show number differences between 2 entered strings of equal length
*/

#include <iostream>
#include <algorithm>

void getLength(std::string string1,std::string string2);
std::string matchLoc(std::string string1,std::string string2);
void printString(std::string string);

int main(){
    std::string string1,string2,arrows;

    std::cout << "Enter string #1: ";
    std::getline(std::cin,string1);

    std::cout << "Enter string #2: ";
    std::getline(std::cin,string2);

    std::cout << "\n";
    getLength(string1,string2);

    return 0;
}

//only run if lengths are equal
void getLength(std::string string1,std::string string2){
    if(string1.length()==string2.length()){
        //print entered strings
        printString(string1);
        printString(string2);

        //save output
        std::string output = matchLoc(string1,string2);

        //count # non-matches
        char ch = '^';
        int count = std::count(output.begin(),output.end(),ch);

        printString(output);
        std::cout << "The entered strings have " << count << " differences.\n";
    }else{
        std::cout << "String lengths are not equal\n";
    }
}

//create line showing where char are different
std::string matchLoc(std::string string1,std::string string2){
    std::string output;

    for(int i=0;i<string1.length();i++){
        if(string1[i]==string2[i]){
            output.append(" ");
        }else{
            output.append("^");
        }
    }

    return output;
}

//print input
void printString(std::string string){
    std::cout << string << "\n";
}