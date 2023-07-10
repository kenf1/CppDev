/*
    [capture clause](parameters){lambda function definition}
*/

#include <iostream>
#include <vector>
#include <algorithm>

void printVec(int x);

int main(){
    std::vector <int> v{1,2,3,4,5};

    //function
    std::for_each(v.begin(),v.end(),printVec);
    std::cout << "\n";

    //lambda
    std::for_each(v.begin(),v.end(),[](int x){std::cout << "L" << x << " ";});
    std::cout << "\n";

    return 0;
}

//print each element in vector
void printVec(int x){
    std::cout << x << " ";
}