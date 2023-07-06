/*
    figure out if a sentence is a pangram (contains every letter of English alphabet)
*/

#include <iostream>
#include <string_view>
#include <bitset>
#include <cctype>

bool is_pangram(std::string_view phrase);

int main(){
    std::string phrase;
    std::cout << "Enter line of text to test:\n";
    std::getline(std::cin,phrase);
    std::cout << std::boolalpha << is_pangram(phrase) << "\n";
}

//test for pangram (combine w/ std::boolalpha to print true/false instead of 1/0)
bool is_pangram(std::string_view phrase){
    std::bitset<26> letters;
    
    for(const auto c:phrase)
        if(std::isalpha(c)){
            letters.set(std::tolower(c)-'a');
        }

    return letters.all();
}