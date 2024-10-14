#include <iostream>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 8)
            //break;
            continue;
        std::cout << i << '\n';
    }
}

break = break out of the loop
continue = skip iteration
