//Задача PARROT
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Ввід даних
    char  sentence[50];
    cout << "Введіть речення :" << endl;
    cin.getline(sentence, 50);
    //Виведення даних
    cout << sentence << endl << endl;

    system("pause");
}
