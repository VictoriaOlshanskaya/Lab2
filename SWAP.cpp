//������ SWAP3
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //��� �����
    char A[20], B[20], C[20];

    cout << "";
    cin >> A;
    cout << "";
    cin >> B;
    cout << "";
    cin >> C;
    //��������� �����
    cout << " A = " << A;
    cout << " B = " << B;
    cout << " C = " << C << endl;
    //��������� ����� �������� ������
    cout << " A = " << C;
    cout << " B = " << A;
    cout << " C = " << B << endl << endl;

    system("pause");
}
