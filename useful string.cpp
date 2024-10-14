#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12)
    {
        std::cout << "Name cant be over 12 characters";
    }
    else if(name.empty())
    {
        std::cout << "You did not enter your name";
    }
    else
    {
        std::cout << "Welcome " << name;
    }
    return 0;
}
