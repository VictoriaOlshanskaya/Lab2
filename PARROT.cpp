//������ SWAP
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //��� �����
    char A[20], B[20];
    cout << "";
    cin >> A;
    cout << "";
    cin >> B;
    //��������� �����
    cout << " A = " << A;
    cout << " B = " << B << endl;
    //���� ������
    cout << " A = " << B;
    cout << " B = " << A << endl << endl;

    system("pause");
}
