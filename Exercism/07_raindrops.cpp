/*
    The rules of raindrops are that if a given number:
        has 5 as a factor, add 'Plang' to the result.
        has 3 as a factor, add 'Pling' to the result.
        has 7 as a factor, add 'Plong' to the result.
        does not have any of 3, 5, or 7 as a factor, the result should be the digits of the number.
*/

#include <iostream>

std::string addText(int raindrops);
std::string appendText(int raindrops,std::string output,int factor,std::string toAppend);

//set constants
const std::string keyPair[] = {"Plang ","Pling ","Plong "};
const int valuePair[] = {5,3,7};

int main(){
    int numRaindrops;

    std::cout << "Enter number of raindrops: ";
    std::cin >> numRaindrops;
    std::cout << addText(numRaindrops) << "\n";

    return 0;
}

std::string addText(int raindrops){
    std::string output;

    //single Ex
    // std::cout << appendText(raindrops,output,5,"Plang ");

    //
    for(int i=0;i<=3;i++){
        output = appendText(raindrops,output,valuePair[i],keyPair[i]);
    }

    //not a factor of 5,3,7
    if(output.empty()){
        output = std::to_string(raindrops);
    }

    return output;
}

//avoid repeating same if code chunk 3x
std::string appendText(int raindrops,std::string output,int factor,std::string toAppend){
    if(raindrops%factor==0){
        output.append(toAppend);
    }
    return output;
}