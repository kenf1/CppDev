#include <iostream>
#include <cmath>

int* aValues(int num_elements);

int main(){
    int num_elements = 7;
    int* arr = aValues(num_elements);

    //print array elements (or can use num_elements)
    // int arrLen = sizeof(arr)/sizeof(arr[0]);
    // std::cout << arrLen << "\n";

    for (int i=0;i<=num_elements;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

//create array of length num_elements (2^i)
int* aValues(int num_elements){
    int* arr = new int[num_elements];

    for(int i=0;i<=num_elements;i++){
        arr[i] = pow(2,i);
    }

    return arr;
}