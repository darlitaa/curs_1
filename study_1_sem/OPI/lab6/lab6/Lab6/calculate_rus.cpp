#include <iostream>
#include "calculate_rus.h"
#include "nIterations.h"
using namespace std;

void calculate_rus() {
    int difference, nIterations = 0;
    char symbol;
    nIterations = countIterations(nIterations);
    for (int i = 0; i < nIterations; i++) {
        cout << "������� ����� �������� �������� ";
        cin >> symbol;
        if ('�' <= symbol && symbol <= '�') {
            difference = tolower(symbol) - toupper(symbol);
            cout << difference << endl;
        }
        else {
            cout << "�� ����� �� ����� �������� �������� " << endl;
        }
    }
}
