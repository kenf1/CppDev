#include <iostream>

//pass array into function

//sum of all elements in double array
double sumAll(double prices[],int size);

//display position of search item in array
int searchArray(int array[],int size,int element);

int main(){
    double prices[] = {18.38,4.20,89.67,6.90};
    
    //get length of array
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = sumAll(prices,size);

    std::cout << total << "\n";

    //search array
    int nums[] = {1,2,3,4,5};
    int index,myNum;
    
    std::cout << "Enter number to search for:\n";
    std::cin >> myNum;

    index = searchArray(nums,size,myNum);

    //if not false (aka true), print index else print myNum not found
    if(index!=-1){
        std::cout << "Index located at: " << index << "\n";
    }else{
        std::cout << myNum << " not found in array\n";
    }

    return 0;
}

double sumAll(double prices[],int size){
    double total = 0;
    for(int i=0;i<size;i++){
        total += prices[i];
    }
    return total;
}

int searchArray(int array[],int size,int element){
    //linear search
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1; //false
}