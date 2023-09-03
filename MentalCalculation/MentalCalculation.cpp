#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки кансоли:
    system("chcp 1251 > nul");

    int a = 0;
    int b = 0;
    int result = 0;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите сумму эти чисел: ";
    cin >> result;
    cout << "-------Проверяем-------" << endl;

    if (result == a + b) {
        cout << "Верно!" << endl;
    }
    else {
        cout << "Не верно! Результат: " << a + b << endl;
    }

    // Задержка окна консоли:
    system("pause > nul");
    return 0;
}