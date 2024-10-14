#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Coffee";
    std::string y = "Water";
    std::string temp;

    /* pass by value
    temp = x;
    x = y;
    y = temp;
    */

   swap(x, y);

    std::cout << "X: " << x  << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

//pass by ref use the & sign
void swap(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}




#include <iostream>

void swap(std::string &age, std::string &name);
int main()
{
    std::string age = "26";
    std::string name = "john";

    swap(age, name);

    std::cout << "Age: " << age << '\n';
    std::cout << "Name: " << name << '\n';

    return 0;
}

void swap(std::string &age, std::string &name)
{
    std::string temp;

    temp = age;
    age = name;
    name = temp;
}