/*
    count # of times a nucleotide is entered
    throw error if entered string contains non-nucleotides
*/

#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>

void returnCount(std::string inputString,char inputChar);

//create key value pair
using counts = std::map<char,int>;
counts count(const std::string &dna);

int main(){
    std::string enteredString;

    std::cout << "Enter string to test: ";
    std::cin >> enteredString;

    // returnCount(enteredString,'A');
    // returnCount(enteredString,'T');
    // returnCount(enteredString,'C');
    // returnCount(enteredString,'G');

    //loop over all 4 nucleotides
    std::vector<char> charsToCount = {'A','T','C','G'};

    for(char c:charsToCount){
        returnCount(enteredString,c);
    }

    return 0;
}

//add count as map
counts count(const std::string &dna){
    counts total;
    total['A'] = total['T'] = total['C'] = total['G'] = 0;
    for(char c:dna){
        if(c!='A' && c!='T' && c!='C' && c!='G'){
            throw std::invalid_argument("Not DNA nucleotide");
        }
        total[c] += 1;
    }
    return total;
}

//print key value pair
void returnCount(std::string inputString,char inputChar){
    std::cout << inputChar << ": " << count(inputString)[inputChar] << "\n";
}