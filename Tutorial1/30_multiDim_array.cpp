#include <iostream>

//multi-dim arrays
int main(){
    //rows cols
    std::string sample[][3] = {
        {"item 1","item 2","item 3"},
        {"row 1","row 2","row 3"},
        {"fin1","fin2","fin3"}
    };
    
    //print single item
    std::cout << sample[0][0] << "\n";

    int rows = sizeof(sample)/sizeof(sample[0]);
    int cols = sizeof(sample[0])/sizeof(sample[0][0]);

    //loop over 2D array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout << sample[i][j] << " ";
        }
    }
    std::cout << "\n";

    return 0;
}