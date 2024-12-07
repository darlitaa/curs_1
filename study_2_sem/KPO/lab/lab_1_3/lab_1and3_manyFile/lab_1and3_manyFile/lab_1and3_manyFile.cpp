#include "stdafx.h"

int main() {
	setlocale(LC_CTYPE, "Russian");
	int day, month, year, data, leap_flag;

	int Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout << "Введите дату в формате ДДММГГГГ: ";
	cin >> data;
	year = data % 10000;
	month = (data % 1000000 - year) / 10000;
	day = data / 1000000;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		leap_flag = 1;
		Months[1] = 29;
	}
	else {
		leap_flag = 0;
	}
	checkIfCorrect(day, month, year, leap_flag, data, Months);
	if (leap_flag == 1) cout << "Это високосный год" << endl;
	else cout << "Это НЕ високосный год" << endl;
	cout << "Порядковый номер дня, введенного в данные: " << getNumber(day, month, year, leap_flag) << endl;
	cout << "Количество дней до дня рождения:" << getBirthdayNumber(day, month, year, leap_flag) << endl;
	int event_day;
	cout << endl << "Введите порядковый номер дня: ";
	cin >> event_day;
	countTheEventDate(event_day, Months, year);
	return 0;
}