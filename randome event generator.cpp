#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 +1;

    switch(randNum)
    {
        case 1: std::cout << "You won a cellphone!\n";
            break;
        case 2: std::cout << "You won a Laptop!\n";
            break;
        case 3: std::cout << "You won a House!\n";
            break;
        case 4: std::cout << "You won a my heart!\n";
            break;
    }
}
