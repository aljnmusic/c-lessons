#include <iostream>
#include <string>
#include <math.h>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    std::string pin = "1997";
    std::string guess;
    int pinLength = 4;
    std::string option;

    std::cout << "*************************\n";
    std::cout << "Welcome to Loco Banking!\n";
    std::cout << "*************************\n";

    do{
        std::cout << "Enter your 4 digit PIN: ";
        std::cin >> guess;

    } while (guess != pin);

    do{
    std::cout << "*************************\n";
    std::cout << "\n1. View Balance\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Exit\n";

    std::cout << "\nSelect your options: ";
    std::cin >> choice;

        switch(choice)
        {
            case 1: showBalance(balance);
                double balance;
                break;
            case 2: balance += deposit();
                showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4: std::cout << "Thank you!";
                break;
            default: std::cout << "Invalid choice";
        }


    }while(choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is $" << balance << " " << '\n';
}

double deposit()
{
    double amount = 0;

    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if(amount > 0)
    {
        return amount;
    }
    else{
        std::cout << "That is an invalid amount";
    }

}

double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if(amount > balance)
    {
        std::cout << "Invalid amount!\n";
    }
    else
    {
        return amount;
    }

    return 0;
}
