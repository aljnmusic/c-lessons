#include <iostream>
#include <string>

void myMotto(std::string name) //function
{
    std::cout << "Dawa pangit basta normal " << name;
}

int main()
{
    //function = block of reusable code

    std::string name = "bro";

    myMotto(name);

    return 0;
}
