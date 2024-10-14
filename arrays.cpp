#include <iostream>


int main()
{
    /* arrawy - data structure that can hold multiple values
                values are accessed by an index number
                "kind of like a variable that holds multiple values" */

    std::string car[] = {"Corvette", "Mustang", "Muscle"};

    //std::string car[1];

    // car[0] = {"Jeep"};
    // car[1] = "Ferrari";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    return 0;
}
