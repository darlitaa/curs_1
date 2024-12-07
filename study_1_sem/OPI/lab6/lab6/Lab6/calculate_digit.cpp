#include <iostream>
#include "calculate_digit.h"
#include "nIterations.h"
using namespace std;

void calculate_digit() {
	int nIterations = 0, symbol_code;
	char symbol;
	nIterations = countIterations(nIterations);
	for (int i = 0; i < nIterations; i++) {
		cout << "Введите цифру ";
		cin >> symbol;
		if ('0' <= symbol && symbol <= '9') {
			symbol_code = symbol;
			cout << "Код символа : " << symbol_code << endl;
		}
		else {
			cout << "Это не цифра" << endl;
		}
	}
}
