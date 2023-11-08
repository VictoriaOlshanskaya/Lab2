//Задача HELLO3
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Ввід даних
    char name[20];
    char age[20];
    char placeStudy[20];
    
    cout << "Як Вас звуть? = ";
    cin.getline(name, 20);
    cout << "Скільки Вам років? = ";
    cin.getline(age, 20);
    cout << "Де Ви навчаєтеся? = ";
    cin.getline(placeStudy, 20);
    //Виведення даних
    cout << "Доброго дня, " << name << "!" << endl;
    cout << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з комп’ютером!" << endl;
    cout << placeStudy << " буде пишатися Вами!" << endl << endl;

    system("pause");
}
