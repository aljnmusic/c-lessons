#include <iostream>

    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)
int main()
{
    /*
    std::string foods[50];

    fill(foods, foods + 50, "pizza");

    for(std::string foods : foods)
    {
        std::cout << foods << '\n';
    }
    */

   const int size = 99;

   std::string foods[size];

   fill(foods, foods + (size/3), "Hotdog");
   fill(foods + (size/3), foods + (size/3)*2, "Pizza");
   fill(foods + (size/3)*2, foods + size, "Fish");

   for (std::string foods : foods)
   {
    std::cout << foods << '\n';
   }
   

    return 0;
}
