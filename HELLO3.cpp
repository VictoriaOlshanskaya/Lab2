//������ HELLO3
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //��� �����
    char name[20];
    char age[20];
    char placeStudy[20];

    cout << "�� ��� �����? = ";
    cin.getline(name, 20);
    cout << "������ ��� ����? = ";
    cin.getline(age, 20);
    cout << "�� �� ���������? = ";
    cin.getline(placeStudy, 20);
    //��������� �����
    cout << "������� ���, " << name << "!" << endl;
    cout << "³���� ���, ��� ������ " << age << ", � �� ��� ������ ����� � ����������!" << endl;
    cout << placeStudy << " ���� �������� ����!" << endl << endl;

    system("pause");
}
