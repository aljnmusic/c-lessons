#include <iostream>

int getDigits(const int numbers);
int sumOddNumbers(const std::string cardNumbers);
int sumEvenNumbers(const std::string cardNumbers);

int main()
{
    std::string cardNumbers;
    int result = 0;

    std::cout << "Enter your card #: ";
    std::cin >> cardNumbers;

    result = sumEvenNumbers(cardNumbers) + sumOddNumbers(cardNumbers);

    if (result % 10 == 0)
    {
        std::cout << cardNumbers << " is valid";
    }
    else
    {
        std::cout << cardNumbers << " is not valid";
    }
    

    return 0;
}


int getDigits(const int numbers)
{
    return numbers % 10 + (numbers / 10 % 10);
}
int sumOddNumbers(const std::string cardNumbers)
{
    int sum = 0;

    for (int i = cardNumbers.size() - 1; i >= 0; i-=2)
    {
        sum += cardNumbers[i] - '0';
    }

    return sum;
}
int sumEvenNumbers(const std::string cardNumbers)
{
    int sum = 0;

    for (int i = cardNumbers.size() - 2; i >= 0; i-=2)
    {
        sum += getDigits((cardNumbers[i] - '0') * 2);
    }

    return sum;
    
}