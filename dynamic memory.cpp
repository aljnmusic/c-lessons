#include <iostream>

int main()
{
    /*
    Dynamic Memory = memory that is allocated after the program is already compiled and running.
                    Use the 'new' operator to allocate memory in the heap rather than in the stack.
                    
                    Useful when we dont know how much memory we will need.
                    Makes program more flexible especially when accepting user input.

                    Use delete when no longer using the memory space.
    */

    /*
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum;

    delete pNum; 
    */

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grades: ";
        std::cin >> pGrades[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }
    
    delete[] pGrades;

    return 0;
}