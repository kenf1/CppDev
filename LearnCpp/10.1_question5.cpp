#include <iostream>

/*Write a complete program that reads an integer from the user, 
    doubles it using the doubleNumber() function you wrote in the previous quiz question, 
    and then prints the doubled value out to the console.*/

int doubleNumber(int x){
    return x*2;
}

//print result
int main(){
    int userInput{};
    std::cout << "Enter a number: \n";
    std::cin >> userInput;

    std::cout << "2x of the number you entered is: " << doubleNumber(userInput) << "\n";
    return 0;
}