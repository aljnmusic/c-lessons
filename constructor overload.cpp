#include <iostream>

//overload constructors = multiple constructors with same name but diff paramters
//                        allows for varying arguments when initiating an object

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
        std::string topping3;

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping2, std::string topping1){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    Pizza(std::string topping1, std::string topping3, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
    }

};

int main()
{
    Pizza pizza1("Peperonni");
    Pizza pizza2("Mushroom", "Fruit"); //mushroom will be printed
    Pizza pizza3("Fruit", "Cereal", "Juice");

    std::cout << pizza2.topping2;
    std::cout << pizza3.topping3;

    return 0;
}
