#include <iostream>

int main()
{
    //if - do something if true, if not, dont

    int age;

    std::cout << "Enter age: ";
    std:: cin >> age;

    if(age >= 100)
    {
        std::cout << "You are too old";
    }

    else if(age >= 18)
    {
        std::cout << "Welcome to the site";
    }

    else if(age < 0)
    {
        std::cout << "You havent been born yet";
    }

    else if(age >= 100)
    {
        std::cout << "You are too old";
    }

    else
    {
        std::cout << "You are not old enough to enter";
    }
}
