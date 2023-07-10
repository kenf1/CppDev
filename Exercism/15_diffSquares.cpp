/*
    find difference of sum of squares
        (diff from original problem)
*/

#include <iostream>
#include <vector>

int promptNum(int input);
int sumSquares(int input);
int diffSquares(int num1,int num2);

//debug
// int squareUp(int input);

int main(){
    int nNum1,nNum2;

    nNum1 = promptNum(1);
    nNum2 = promptNum(2);

    std::cout << sumSquares(nNum1) << "\n";
    std::cout << sumSquares(nNum2) << "\n";

    std::cout << "Difference of sum of squares is: " << diffSquares(nNum1,nNum2) << "\n";

    return 0;
}

// int squareUp(int input){
//     return input*input;
// }

int promptNum(int input){
    int temp;
    
    //ensure input is a + int
    do{
        std::cout << "Enter a natural number " << input << ": ";
        std::cin >> temp;
    }while(temp<0);
    
    return temp;
}

int sumSquares(int input){
    //create dynamic array of unknown (at compilation) size
    int* arr = new int[input];

    /*
        create list of values 1:input
            Ex: index[0] should have value of 1
            square & add to running count
    */
    int sums = 0;
    for(int i=0;i<input;i++){
        arr[i] = i+1;
        sums += arr[i]*arr[i];
    }

    //loop thru arr to create running sums
    // int sums = 0;
    // int size = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<size;i++){
    //     sums += arr[i]*arr[i];
    // }

    return sums;
}

//num2 > num1
int diffSquares(int num1,int num2){
    return sumSquares(num2)-sumSquares(num1);
}