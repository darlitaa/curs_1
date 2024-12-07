#include "stdafx.h"

int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]) {
	if (month > 12) {
		cout << "Неправильный формат месяца";
		exit(0);
	}
	if ((data > 99999999) or (data < 1011900)) {
		cout << "Неккоректный ввод данных";
		exit(0);
	}
	if ((leap_flag == 0) and (day > Months[month - 1]) or (day < 1)) {
		cout << "Неправильный формат дня";
		exit(0);
	}
	if ((leap_flag == 1)) {
		Months[1] = 29;
		if ((day >> Months[month - 1]) or (day < 1)) {
			cout << "Неправильный формат дня";
			exit(0);
		}
	}
	return 0;
}