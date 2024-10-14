#include <iostream>

double averageGrade(double average);
void studentSubject(std::string subject);
void showSubj(std::string subject);

int main(){
    double average;
    std::string subject;

    studentSubject(subject);
    showSubj(subject);

    return 0;
}

double averageGrade(double average){
    return 0;
}


void studentSubject(std::string subject){
    int subjNum;

    std::cout << "How many subjects do you have: ";
    std::cin >> subjNum;

    for (int i = 0; i < subjNum; i++)
    {
        std::cout << "Enter subject name: ";
        std::cin >> subject;
    }

    std::cout << "Your subjects are: " << subject[i] << '\n';
}

void showSubj(std::string subject){
    std::cout << "Your subjects are: " << subject << '\n';
}