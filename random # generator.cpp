        #include <iostream>

        // psuedo-random = not truly random but close

        int main()
        {
            srand(time(NULL));

            int num1 = (rand() % 100) + 1;
            int num2 = (rand() % 100) + 1;
            int num3 = (rand() % 100) + 1;

            std::cout << "The random number from 1 - 100 is: " << num1;
            std::cout << "\nThe random number from 1 - 100 is: " << num2;
            std::cout << "\nThe random number from 1 - 100 is: " << num3;
        }
