#include <iostream>

int main()
{
    std::string questions[] = {"1. What is my name?: ",
                                "2. What do they call me?: ",
                                "3. What is my height?: ",
                                "4. What is my fave color?: "};

    std::string options[][4] = {{"A. John John", "B. Johnel Jun", "C. St. John", "D. John The Baptist"},
                                {"A. Pogi", "B. Bossing", "C. Gwapo", "D. Tall Dark Handsome"},
                                {"A. 4'11", "B. 5'0", "C. 6'0", "D. 5'11"},
                                {"A. Pink", "B. Black", "C. Fuscha", "D. Light Green"}};

    char answerKey[] = {'C', 'B', 'D', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    double score;

    for (int i = 0; i < size; i++)
    {
        std::cout << "******************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][j]); j++)
        {
            std::cout << options[i][j] << '\n';
        }
        
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "Correct!\n";
            score++;
        }
        else
        {
            std::cout << "Wrong!\n";
        }
        
    }
    
    std::cout << "******************************\n";
    std::cout << "            Result            \n";
    std::cout << "******************************\n";
    std::cout << "Correct answer: " << score << '\n';
    std::cout << "# of Questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";


    return 0;
}