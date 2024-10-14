#include <iostream>

double getTotal(double price[], int size);

int main()
{
    double price[] = {65.6, 5.09, 27, 98.9};
    int size = sizeof(price)/sizeof(price[0]);
    double total = getTotal(price, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double price[], int size)
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += price[i];
    }

    return total;
}
