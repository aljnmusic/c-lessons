#include <iostream>

/*
struct - a structure that group related variables under one name
        struct can contain many diff data types (string, int, bool)
        variables in a struct are known as "members"
        members can be access with "class member access operator"

*/
// members
// you can set a default value
struct student{
    std::string name;
    double gpa;
    bool enrolled;
};


int main()
{
    // class member access operato
    student student1;
    student1.name = "John";
    student1.gpa = 2.1;
    student1.enrolled = true;

    student student2;
    student2.name = "Peter";
    student2.gpa = 3.5;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}