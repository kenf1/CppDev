#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit(),withdraw(double balance);

//program will break if anything other than int is entered
int main(){
    double balance = 3.50;
    int choice = 0;

    do{
        std::cout << "Enter your choice:\n 1. Show balance\n 2. Deposit\n 3. Withdraw\n 4. Exit\n";
        std::cin >> choice;

        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance+=deposit();
                showBalance(balance);
                break;
            case 3: balance-=withdraw(balance);
                showBalance(balance);
                break;
            case 4: std::cout << "Exit confirmed\n";
                break;
            default: std::cout << "Invalid choice\n";
        }
    }while(choice!=4);

    return 0;
} 

//show 2 decimal places
void showBalance(double balance){
    std::cout << "Balance is: " << std::fixed << std::setprecision(2) << balance << "\n";
}

//can't input (-) values
double deposit(){
    double amount = 0;

    std::cout << "Enter amount to deposit: " << "\n";
    std::cin >> amount;

    if(amount>0){
        return amount;
    }else{
        std::cout << "Invalid amount\n";
        return 0;
    }
}

//won't be able withdraw > balance
double withdraw(double balance){
    double amount = 0;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if(amount<=balance){
        return amount;
    }else{
        std::cout << "Terminated. You are attempting to overdraft.\n";
        return 0;
    }
}