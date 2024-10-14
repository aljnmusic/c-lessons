#include <iostream>

int main()
{
    int grades[] = {45, 65, 98, 67, 99};

    for(int bscs : grades)
    {
        std::cout << bscs << '\n';
    }

    return 0;
}
