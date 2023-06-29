#include <iostream>

//normal function
int max(int x,int y){
    return(x>y) ? x:y;
}

//function template (call it immediately above)
template <typename T>

T maxT(T x,T y){
    return(x>y) ? x:y;
}

//accept >1 datatype
template <typename T,typename U>

auto maxTU(T x,U y){
    return(x>y) ? x:y;
}

int main(){
    std::cout << max(1,2) << "\n";

    std::cout << maxT(1.1,2.2) << "\n";

    std::cout << maxTU(1,2.2) << "\n";

    return 0;
}