#include <iostream>

int main()
{
     // ternary operator ?: = replacement to an if/else statement
   // condition ? expression1 : expression2;

   //int grade = 75;

   //td::cout << "Enter grade: ";
   //std::cin >> grade;

   //if(grade >= 60)
   //{
      // std::cout << "You passed";
   //}
  // else
  // {
    //   std::cout << "You failed";
   //}

   int grade = 75;

   std::cout << "Enter grade: ";
   std::cin >> grade;

   //grade >=60 ? std::cout << "You passed" : std::cout << "You failed";

   std::cout << (grade >= 60 ? "you passed" : "you failed");
}
