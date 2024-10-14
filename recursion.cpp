#include <iostream>

// void walk(int steps);

int factorial(int num);
int main()
{
    /*
    recursion - a programming technique where a function invokes itself from within
                breaks a single concept into a repeatable single step

    (iterative vs recursive)

    advantages - less code and more cleaner
                useful for sorting and searching algorithms

    disadvantages = uses more memory
                    slower
    */

    // walk(50);

    std::cout << factorial(10);


    return 0;
}

/*
void walk(int steps)
{
    // iterative approach
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take a step\n";
    }
    //

    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}
*/

/* 
// repetitive
int factorial(int num)
{
    int result = 1;
    
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }

    return result;
}
*/

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num -1);
    }
    else
    {
        return 1;
    }
    
}