#include <iostream>

void getInfo(const std::string name, const int age);

int main()
{
        // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references

    std::string name = "John";
    int age = 21;

    getInfo(name, age);

    return 0;
}

void getInfo(const std::string name, const int age)
{
    std::cout << name << '\n';
    std::cout << age << '\n';
}