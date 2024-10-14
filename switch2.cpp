#include <iostream>

int main()
{
    int month;
    std::cout << "Enter Month (1-12): ";
    std::cin >> month;

    switch(month)
    {
    case 1:
        std::cout << "It is january";
        break;
    case 2:
        std::cout << "It is Feb";
        break;
    case 3:
        std::cout << "It is March";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is May";
        break;
    default:
        std::cout << "Please enter numbers 1-12 only";
    }

}
