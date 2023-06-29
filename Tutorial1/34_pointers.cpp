#include <iostream>

//pointers (work w/ address)
int main(){
    std::string var1 = "Name";
    std::string *pVar1 = &var1;
    int favNums[] = {1,2,3};

    //include * for value, exclude for address
    std::cout << var1 << "\n Address: " << pVar1 << "\n Value: " << *pVar1 << "\n";

    //array already address
        //*array gives index 0
    std::cout << favNums << "\n";

    //null pointer
    int *pointer = nullptr;

    //replace null w/ x
    int x = 5;
    pointer = &x;

    //print out pointer value if != null
    if(pointer==nullptr){
        std::cout << "Address not assigned\n";
    }else{
        std::cout << *pointer << "\n";
    }

    return 0;
}