/*
#include <iostream>

class phone{
    public:
        std::string name;
        std::string model;
        int year;
        int price;

        void calls(){
            std::cout << "This phone can make calls\n";
        }

        void text(){
            std::cout << "This phone can text\n";
        }
};

int main(){

    phone phone1;
    phone1.name = "Techno";
    phone1.model = "Pova";
    phone1.price = 6000;
    phone1.year = 2020;

    std::cout << phone1.name << '\n';
    std::cout << phone1.model << '\n';
    std::cout << phone1.price << '\n';
    std::cout << phone1.year << '\n';

    phone1.calls();
    phone1.text();

    return 0;
}
*/


#include <iostream>

/*
Object = a collection of attributes and methods
        They can have characteristics that can perform actions
        Can be use to mimmic real world items (ex. Phone, books)
        Created from a class which act as a blue print

        attributes - characteristics of an object
        methods - function that an object can perform

        to create an object we need to create a class

        object          attrib              methods
        phone           service provider    make calls
*/

class human{
    public:
    std::string name;
    std::string occupation;
    int age;

    void sleep()
    {
        std::cout << "This person is sleeping\n";
    }

    void eat()
    {
        std::cout << "This person is eating\n";
    }

    void drink()
    {
        std::cout << "This person is drinking\n";
    }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate()
        {
            std::cout << "You step on the gas!\n";
        }

        void brakes()
        {
            std::cout << "You step on the brakes!\n";
        }
};

int main()
{
    human human1; // object, human1 is a uniqe identifier
    human1.name = "John";
    human1.occupation = "Programmer";
    human1.age = 30;

    Car car1;
    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 1996;
    car1.color = "Red";

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.sleep();
    human1.eat();
    human1.drink();

    std::cout << '\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.brakes();
    car1.accelerate();

    return 0;
}