#include <iostream>

int main(){
    int *pNum = nullptr;

    //replace NULL w/ 21
    pNum = new int;
    *pNum = 21;

    std::cout << "Address: " << pNum << "\n";
    std::cout << "Value: " << *pNum << "\n";

    //free up memory
    delete pNum;

    //store array in dynamic memory
    char *pGrades = nullptr;
    int size;

    std::cout << "How many to enter?\n";
    std::cin >> size;
    pGrades = new char[size];

    //enter grades
    for(int i=0;i<size;i++){
        std::cout << "Enter grade: #" << i+1 << ": ";
        std::cin >> pGrades[i];
    };

    //show grades
    for(int i=0;i<size;i++){
        std::cout << pGrades[i] << " ";
    }
    std::cout << "\n";

    delete[] pGrades;

    return 0;
}