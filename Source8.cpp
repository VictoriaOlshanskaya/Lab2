// ������ GUESS
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //��� �����
    int x;
    int result;
    cout << "��� ���� �����?" << endl;
    cout << "������ ��� 䳿: (((���� ����� * 10) / 2 + ���� �����) / 3 + 4) / 2 - 2 " << endl;
    cout << "���� ������ ���������?" << endl;
    cin >> result;
    //³���������� �����
    x = (((result + 2) * 2 - 4) * 3) / 6;
    //��������� �����
    cout << "���� �����: " << x << endl;

    system("pause");
}
