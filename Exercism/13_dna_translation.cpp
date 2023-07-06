//translate DNA -> RNA (complement strand)

#include <iostream>
#include <stdexcept>

std::string toRNA(std::string dna);

int main(){
    std::string dna;

    std::cout << "Enter a DNA strand:\n";
    std::cin >> dna;

    std::cout << "\nRNA strand:\n" << toRNA(dna) << "\n";

    return 0;
}

std::string toRNA(std::string dna){
    std::string temp;
    
    //loop through each char & append RNA nucleotide
    for(int i=0;i< dna.length();i++) {
        switch(dna[i]){
            case 'A':
                temp.append("U");
                break;
            case 'T':
                temp.append("A");
                break;
            case 'C':
                temp.append("G");
                break;
            case 'G':
                temp.append("C");
                break;
            default:
                throw std::invalid_argument("Not a valid DNA nucleotide");
        }
    }
    return temp;
}