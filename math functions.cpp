#include <iostream>
#include <cmath>

int main()
{
    int x = 3.99;
    int y = 7;
    int z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2, 4);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    z = floor(x);

    std::cout << z;
}
