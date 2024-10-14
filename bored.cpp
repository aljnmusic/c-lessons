#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int days = 30;
    int month = 12;
    int year = 2024;
    int days1, month1, year1, num_days, num_month, num_year;
    std::string name;

    std::cout << "---------------------------------------------\n";

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "\nHi " << name << ".\n";

    std::cout << "\nLet me guess your age.\n";
    std::cout << "Enter the following details.\n";

    std::cout << "\nEnter days: ";
    std::cin >> days1;

    std::cout << "Enter month: ";
    std::cin >> month1;

    std::cout << "Enter year: ";
    std::cin >> year1;

    num_days = days - days1;
    num_month = month - month1;
    num_year = year - year1;




}
