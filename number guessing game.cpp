#include <iostream>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do
    {
        std::cout << "Enter a guess between 1-100: ";
        std::cin >> guess;
        tries++;

        if(guess < num)
        {
            std::cout << "Number too low!\n";
        }

        else if(guess > num)
        {
            std::cout << "Number too high!\n";
        }

        else
        {
            std::cout << "Correct! # of tries: " << tries;
        }
    } while (guess != num);


}
