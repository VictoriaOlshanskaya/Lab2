//������ PARROT
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //��� �����
    char  sentence[50];
    cout << "������ ������� :" << endl;
    cin.getline(sentence, 50);
    //��������� �����
    cout << sentence << endl << endl;

    system("pause");
}
