#include <iostream>

int main(){
    //constant (immutable)
    const double PI{3.141592654};

    //shows error both in IDE & @ compilation
        //won't compile
    PI = 420.69;

    return 0;
}