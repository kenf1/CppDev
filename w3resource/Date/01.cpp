/*
    Write a C++ program to get the current date and time.
*/

#include <iostream>
#include <ctime>

int main(){
    time_t current = time(0);
    char* currentDT = ctime(&current);

    std::cout << "Current date + time is: " << currentDT << "\n";
    return 0;
}