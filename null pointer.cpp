#include <iostream>

int main()
{
    /*
    Null Pointer = a special value that means something has no value
                    When a pointer is holding a null value, 
                    that pointer is not pointing at anything(null pointer)

    nullptr - keyword that represent a null pointer

    null pointers are helpful when determining if an address was successfully
    assigned to a pointer

    when using pointer, be careful that your code isnt dereferencing null or
    pointing to free memory 
    this will cause undefined behavior
    */

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    //std::cout << *pointer;

    if (pointer == nullptr)
    {
        std::cout << "was not assigned";
    }
    else
    {
        std::cout << "was assigned" << '\n';
        std::cout << *pointer;
    }
    

    return 0;
}