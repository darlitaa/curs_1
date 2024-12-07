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
    cout << "1 - ����������� ������� �������� ����� � ASCII ����� ���������� ��������" << endl;
    cout << "2 - ����������� ������� �������� ����� � Windows-1251 ����� �������� ��������" << endl;
    cout << "3 - ����� ���� �������, ���������������� �����" << endl;
    cout << "4 - ����� �� ���������" << endl;
    cout << "�������� ����� ������� (1, 2, 3 ��� 4): ";
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
            cout << "��������� ���������";
            return 0;
        }
        default: {
            cout << "������ ����� ������";
        }
    }
}

