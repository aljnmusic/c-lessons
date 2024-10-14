#include <iostream>
#include <cmath>
#include <string>


int main()
{
    int day1 = 30;
    int month = 12;
    int year = 2024;
    int day2, month2, year2, days_old, months_old, years_old;
    int age;
    std::string fullName;

    std::cout << "--------------------------------------------------------------\n";
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "\nHi " << fullName << ". How are you?\n";

    std::cout << "\nPlease enter your date of birth below with the following: \n";

    std::cout << "\nEnter the day: ";
    std::cin >> day2;

    std::cout << "\nEnter month from 1-12: ";
    std::cin >> month2;

    std::cout << "\nEnter year: ";
    std::cin >> year2;

    days_old = day1 - day2;
    months_old = month - month2;
    years_old = year - year2;

    std::cout << "\nYou are " << days_old << " days, " << months_old << " months, " << years_old << " years here on Earth!\n";

    std::string fav_color = "blue";
    std::string guess;
    std::string num1 = "12";
    std::string guess_number;

    do
    {
        std::cout << "\nI'll guess your favorite color: ";
        std::cin >> guess;
    } while (guess != fav_color);

    std::cout << "I've guessed it!\n";

    do
    {
        std::cout << "\nNow I'll guess your favorite number.";

        std::cout << "\nIs this your number? ";
        std::cin >> guess_number;
    } while(guess_number != num1);

    std::cout << "Gotcha!\n";

    std::cout << "--------------------------------------------------------------\n";

    return 0;
}

