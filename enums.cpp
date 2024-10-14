#include <iostream>
/*
enums - user defined data type that consist of paired named-integer constants.
        Great if you have a set of potential options.
*/

enum Day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

int main()
{
    Day today = Tuesday;

    switch (today)
    {
        case 0 : std::cout << "Its Sunday" << '\n';
        break;
        case 1 : std::cout << "Its Monday" << '\n';
        break;
        case 2 : std::cout << "Its Tuesday" << '\n';
        break;
        case 3 : std::cout << "Its Wednesday" << '\n';
        break;
        case 4 : std::cout << "Its Thursday" << '\n';
        break;
        case 5 : std::cout << "Its Friday" << '\n';
        break;
        case 6 : std::cout << "Its Saturday" << '\n';
        break;
    }

    return 0;
}