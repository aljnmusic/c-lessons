#include <iostream>

int main()
{
    /*
    //do while loop = do some block of code first, THEN repeat again if condition is true

    int number;

    //std::cout << "Enter a number: ";
    //std::cin >> number;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is: " << number;

    */

    std::string password = "pogiako";
    std::string username;
    std::string guess;

    std::cout << "Enter username: ";
    std::cin >> username;

    do
    {
        std::cout << "Enter password: ";
        std::cin >> guess;
    } while( guess != password);

    std::cout << "\nWelcome to the land of the Pogi!\n";
}
