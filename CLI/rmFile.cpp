/*
    rm file
*/

#include <iostream>
#include <cstdio>

int main(){
    const char* filename = "./runApp";

    if(std::remove(filename)!=0){
        std::perror("Error deleting file");
    }else{
        std::puts("File successfully deleted");
    }

    return 0;
}