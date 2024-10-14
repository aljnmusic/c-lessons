#include <iostream>

int main()
{
    int month;
    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    if(month == 1)
    {
        std::cout << "It is January";
    }
    else if(month == 2)
    {
        std::cout << "It is Feb";
    }
    else if(month == 3)
    {
        std::cout << "It is March";
    }
    else if(month == 4)
    {
        std::cout << "It is April";
    }
    else if(month == 5)
    {
        std::cout << "It is May";
    }
    else if(month == 6)
    {
        std::cout << "It is June";
    }
    else if(month == 7)
    {
        std::cout << "It is July";
    }
    else if(month == 8)
    {
        std::cout << "It is August";
    }
    else if(month == 9)
    {
        std::cout << "It is September";
    }
    else if(month == 10)
    {
        std::cout << "It is October";
    }
    else if(month == 11)
    {
        std::cout << "It is November";
    }
    else if(month == 12)
    {
        std::cout << "It is December";
    }
    else
    {
        std::cout << "Month not in range";
    }

    return 0;
}
