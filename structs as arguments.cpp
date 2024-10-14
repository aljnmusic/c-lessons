#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);
int main()
{
    Car car1;
    Car car2;

    car1.model = "Jeep";
    car1.year = 1945;
    car1.color = "a lot";

    car2.model = "Ferrari";
    car2.year = 2024;
    car2.color = "red";

    paintCar(car1, "silver");
    paintCar(car2, "Gold");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    car.color = color;
}