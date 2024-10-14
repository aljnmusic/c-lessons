#include <iostream>

/* local

void printNum(int myNum);

int main()
{
    //local variables - declared inside a function or block
    //global variables - declared outside of all function

    int myNum = 1;

    printNum(myNum);

    return 0;
}

void printNum(int myNum)
{
    std::cout << myNum;
}

*/

// use :: to call the global variable

int myNum = 3;

void printNum(int myNum);

int main()
{
    int myNum = 1;

    printNum(myNum);

    return 0;
}

void printNum(int myNum)
{
    std::cout << myNum << '\n';
    std::cout << ::myNum;
}
