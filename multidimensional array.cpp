#include <iostream>

// 2d array made up of seperate arrays
int  main()
{
    std::string cars [][3] = {{"Mustang", "Toyota Camry", "Honda CR-V"},
                            {"Toyota RAV4", "Ford F-Series", "Hyundai Tucson"}, 
                            {"Chevrolet Silverado", "Tesla Model 3.", "Toyota Corolla."}};
/*
    std::cout << cars[0][0] << '\n';
    std::cout << cars[0][1] << '\n';
    std::cout << cars[0][2] << '\n';
    std::cout << cars[1][0] << '\n';
    std::cout << cars[1][1] << '\n';
    std::cout << cars[1][2] << '\n';
    std::cout << cars[2][0] << '\n';
    std::cout << cars[2][1] << '\n';
    std::cout << cars[2][2] << '\n';
*/

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << '\n';
        }
        
        std::cout << '\n';
    }
    



    return 0;
}