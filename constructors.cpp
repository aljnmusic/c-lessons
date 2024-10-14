#include <iostream>

/*
Constructors = special method that is automatically called when an object is instantiated
                useful for assigning values to attributes as arguments
*/

class Student{
    public:
        std::string name;
        int age;
        int gpa;

        /*
        Student(std::string name, int age, int gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
        */

       Student(std::string x, int y, int z){ // no need to put "this->" if diff variable name with attribs
        name = x;
        age = y;
        gpa = z;
       }
};

int main(){

    Student student1("John", 27, 1);
    Student student2("Aljenne", 30, 2);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    return 0;  
}