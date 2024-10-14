/*
#include <iostream>

int main()
{
    std::string *pNames = NULL;
    int size;

    std::cout << "How many students would you like to have?: ";
    std::cin >> size;

    pNames = new std::string[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "What are their names?: ";
        std::cin >> pNames[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pNames[i] << " ";
    }
    
    

    return 0;
}


#include <iostream>

int factorial(int num);
int main()
{

    std::cout << factorial(10);

    return 0;
}
int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
    
}


#include <iostream>

class Animal{
    public:
        bool alive = true;

    void eat(){
        std::cout << "This animal is eating!";
    }
};

class Cat : public Animal{
    public:
    void meow(){
        std::cout << "Cat says meow";
    }
};

int main(){

    Cat cat;

    std::cout << cat.alive << '\n';
    cat.eat();

    return 0;
}
*/

#include <iostream>

int main(){

    std::string PIN = "1997";
    std::string guess;



    std::cout << "Enter your PIN: ";
    std::cin >> guess;

    do
    {
        std::cout << "Enter your PIN: ";
        std::cin >> guess;
    } while (guess != PIN);
    
    

    return 0;
}