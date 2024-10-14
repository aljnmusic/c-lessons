#include <iostream>

//typedef std::string text_t;
//typedef int number_t;

using number_t = int;
using text_t = std::string;

int main ()
{
    text_t name = "bro";
    number_t age = 21;

    std::cout << name << '\n';
    std::cout << age;

}
