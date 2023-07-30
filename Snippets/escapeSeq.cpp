/*
    escape sequences:
        \n, \t, \b, \", \?, \r, \a, \\, \'
*/

#include <iostream>
using namespace std;

void printLn(std::string input);

int main(){
    //tab
    printLn("\t");

    //backspace
    printLn("\b");

    //double quote
    printLn("\"");

    //carriage return (move cursor to index[0] on same line)
    printLn("\r");

    //alert
    cout << "\n";
    printLn("\a");

    return 0;
}

void printLn(std::string input){
    std::string temp = "Hello World";
    cout << temp << input;
}