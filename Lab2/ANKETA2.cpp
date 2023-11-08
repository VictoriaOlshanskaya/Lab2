//Задача ANKETA2
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Ввід даних
    char surname[20];
    char name[20];
    char withDad[20];
    char sex[20];
    char birthday[20];
    char adress[20];
    char phone[20];
    char placeStudy[50];
    char group[20];
    char hobbi[20];
    cout << "       Прізвище?= : ";
    cin.getline(surname, 20);
    cout << "           Ім'я?= : ";
    cin.getline(name, 20);
    cout << "    По батькові?= : ";
    cin.getline(withDad, 20);
    cout << "          Стать?= : ";
    cin.getline(sex, 20);
    cout << "Дата народження?= : ";
    cin.getline(birthday, 20);
    cout << "         Адреса?= : ";
    cin.getline(adress, 20);
    cout << " Номер телефону?= : ";
    cin.getline(phone, 20);
    cout << " Місце навчання?= : ";
    cin.getline(placeStudy, 50);
    cout << "          Група?= : ";
    cin.getline(group, 20);
    cout << "          Хоббі?= : ";
    cin.getline(hobbi, 20);
    //Очищення екрану, щоб далі було з першого рядка екрану
    system("cls");
    //Виведення даних
    cout << "\t\t\t\t АНКЕТА" << endl;
    cout << setw(0) << left << "Прізвище : " << setw(19) << surname << "Ім'я : " << setw(20) << name << left << "По батькові : " << withDad << endl;
    cout << setw(0) << "Номер телефону : " << setw(40) << phone << "Хоббі : " << hobbi << endl;
    cout << setw(0) << "Місце навчання : " << setw(40) << placeStudy << "Група : " << group << endl;
    cout << setw(0) << "Дата народження : " << setw(39) << birthday << "Стать : " << sex << endl;
    cout << setw(0) << "Адеса : " << adress << endl << endl;

    system("pause");
}
