#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "F = Fahreinheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is: " << temp << "degrees";
    }
    else if(unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "The temperature is: " << temp << "degrees";
    }
    else
    {
        std::cout << "Enter a valid unit";
    }
}
