//Задача HELLO2
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Ввід даних
    char name[20];
    cout << "Як Вас звуть? = ";
    cin >> name;
    //Виведення даних
    cout << "Доброго дня, " << name << "!" << endl << endl;

    system("pause");
}
