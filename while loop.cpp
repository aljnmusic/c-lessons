#include <iostream>

int main()
{

    std::string name;

    while(name.empty())
    {
        std::cout << "Enter name: ";
        std::getline(std::cin,name);
    }

    std::cout << "Hello " << name;

    /*
    while(1==1)
    {
        std::cout << "Help!";
    }


    /*
    int main()
{

    int x = 0;

    while(x <= 10)
    {
        std::cout << "\nHelp me " << x;
        x = x + 2;
    } */

}
