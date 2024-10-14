#include <iostream>
#include <string>

std::string concatanateString(std::string firstName, std::string lastName);

int main()
{
    std::string firstName = "John Aljenne";
    std::string lastName = "Galos";
    std::string fullName = concatanateString(firstName, lastName);

    std::cout << "Hello " << fullName;
}


std::string concatanateString(std::string firstName, std::string lastName)
{
    return firstName + " " + lastName;
}
