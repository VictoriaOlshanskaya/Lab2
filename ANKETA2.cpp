//������ ANKETA2
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //��� �����
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
    cout << "       �������?= : ";
    cin.getline(surname, 20);
    cout << "           ��'�?= : ";
    cin.getline(name, 20);
    cout << "    �� �������?= : ";
    cin.getline(withDad, 20);
    cout << "          �����?= : ";
    cin.getline(sex, 20);
    cout << "���� ����������?= : ";
    cin.getline(birthday, 20);
    cout << "         ������?= : ";
    cin.getline(adress, 20);
    cout << " ����� ��������?= : ";
    cin.getline(phone, 20);
    cout << " ̳��� ��������?= : ";
    cin.getline(placeStudy, 50);
    cout << "          �����?= : ";
    cin.getline(group, 20);
    cout << "          ����?= : ";
    cin.getline(hobbi, 20);
    //�������� ������, ��� ��� ���� � ������� ����� ������
    system("cls");
    //��������� �����
    cout << "\t\t\t\t ������" << endl;
    cout << setw(0) << left << "������� : " << setw(19) << surname << "��'� : " << setw(20) << name << left << "�� ������� : " << withDad << endl;
    cout << setw(0) << "����� �������� : " << setw(40) << phone << "���� : " << hobbi << endl;
    cout << setw(0) << "̳��� �������� : " << setw(40) << placeStudy << "����� : " << group << endl;
    cout << setw(0) << "���� ���������� : " << setw(39) << birthday << "����� : " << sex << endl;
    cout << setw(0) << "����� : " << adress << endl << endl;

    system("pause");
}
