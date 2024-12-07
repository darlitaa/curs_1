#include <iostream>
#include <Windows.h>
#include "calculate_lat.h"
#include "calculate_rus.h"
#include "calculate_digit.h"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "Russian");
    int numb = 0;
    cout << "1 - Определение разницы значений кодов в ASCII буквы латинского алфавита" << endl;
    cout << "2 - Определение разницы значений кодов в Windows-1251 буквы русского алфавита" << endl;
    cout << "3 - Вывод кода символа, соответствующего цифре" << endl;
    cout << "4 - Выход из программы" << endl;
    cout << "Выберите номер задания (1, 2, 3 или 4): ";
    cin >> numb;

    switch (numb) {
        case 1: {
            calculate_lat();
            break;
        }
        case 2: {
            calculate_rus();
            break;
        }
        case 3: {
            calculate_digit();
            break;
        }
        case 4: {
            cout << "Программа завершена";
            return 0;
        }
        default: {
            cout << "Ошибка ввода данных";
        }
    }
}

