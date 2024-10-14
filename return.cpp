#include <iostream>

double square(double lenght);
double cube(double length);

int main()
{
    // return - will return a value back to the spot
                //where you called the encompasing function
    double length = 6;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3";

    return 0;

}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}
