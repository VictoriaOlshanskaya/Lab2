//Задача SWAP4
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Ввід даних
    char A[20], B[20], C[20], D[20];
    cout << "";
    cin >> A;
    cout << "";
    cin >> B;
    cout << "";
    cin >> C;
    cout << "";
    cin >> D;
    //Виведення даних
    cout << " A = " << A;
    cout << " B = " << B;
    cout << " C = " << C;
    cout << " D = " << D << endl;
    //Виведення даних поміняних місцями
    cout << " A = " << D;
    cout << " B = " << A;
    cout << " C = " << B;
    cout << " D = " << C << endl << endl;

    system("pause");
}
