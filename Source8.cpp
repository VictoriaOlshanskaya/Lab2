// Задача GUESS
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Ввід даних
    int x;
    int result;
    cout << "Яке ваше число?" << endl;
    cout << "Зробіть такі дії: (((Ваше число * 10) / 2 + Ваше число) / 3 + 4) / 2 - 2 " << endl;
    cout << "Який вийшов результат?" << endl;
    cin >> result;
    //Відгадування числа
    x = (((result + 2) * 2 - 4) * 3) / 6;
    //Виведення даних
    cout << "Ваше число: " << x << endl;

    system("pause");
}
