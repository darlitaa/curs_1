#include <iostream>
#include "calculate_lat.h"
#include "nIterations.h"
using namespace std;

void calculate_lat() {
    int difference, nIterations = 0;
    char symbol;
    nIterations = countIterations(nIterations);
    for (int i = 0; i < nIterations; i++) {
        cout << "Введите букву латиского алфавита ";
        cin >> symbol;
        if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'А' && symbol <= 'z')) {
            difference = tolower(symbol) - toupper(symbol);
            cout << difference << endl;
        }
        else {
            cout << "Вы ввели не букву латинского алфавита " << endl;
        }
    }
}
