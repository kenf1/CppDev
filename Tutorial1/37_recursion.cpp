#include <iostream>

void walk(int steps);
void walkNew(int steps);

int main(){
    walk(5);
    walkNew(5);
    return 0;
}

//loop approach
void walk(int steps){
    for(int i=0;i<steps;i++){
        std::cout << "Steps + 1\n";
    }
}

//recursive approach (more memory & processing time)
void walkNew(int steps){
    if(steps>0){
        std::cout << "Steps + 2\n";
        walkNew(steps-1);
    }
}

//stack overflow = infinite loop