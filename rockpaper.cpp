#include <iostream>

char getUserchoice();
char getComputerchoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserchoice();
    std::cout << "You choose: ";
    showChoice(player);

    computer = getComputerchoice();
    std::cout << "Computer choose: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserchoice()
{
    char player;

    std::cout << "Rock-Paper-Scissors Game\n";

    do
    {
        std::cout << "Select from the following options: \n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice)
{

    switch (choice)
    {
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
        default:
            break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
        case 'r':   if (computer == 'r')
                    {
                        std::cout << "Its a tie\n";
                    }
                    else if (computer == 'p')
                    {
                        std::cout << "You loose\n";
                    }
                    else
                    {
                        std::cout << "You won\n";
                    }
                    break;

        case 'p':   if (computer == 'p')
                    {
                        std::cout << "Its a tie\n";
                    }
                    else if (computer == 'r')
                    {
                        std::cout << "You loose\n";
                    }
                    else
                    {
                        std::cout << "You win\n";
                    }
                    break;

        case 's':   if (computer == 's')
                    {
                        std::cout << "Its a tie\n";
                    }
                    else if (computer == 'p')
                    {
                        std::cout << "You won\n";
                    }
                    else{
                        std::cout << "You loose\n";
                    }
                    break;
                    
    }
}