#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int getNumber(int day, int month, int year, int leap_flag);
int getBirthdayNumber(int day, int month, int year, int leap_flag);
int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]);
int nameMonth(int month, int Months[12]);

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
	}
	else {
		leap_flag = 0;
	}
	checkIfCorrect(day, month, year, leap_flag, data, Months);
	if (leap_flag == 1) cout << "Это високосный год" << endl;
	else cout << "Это НЕ високосный год" << endl;
	nameMonth(month, Months);
	cout << "Порядковый номер дня, введенного в данные: " << getNumber(day, month, year, leap_flag) << endl;
	cout << "Количество дней до дня рождения:" << getBirthdayNumber(day, month, year, leap_flag) << endl;
}

int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]) {
	if (month > 12) {
		cout << "Неправильный формат месяца";
		exit(0);
	}
	if ((data > 99999999) || (data < 1011900)) {
		cout << "Неккоректный ввод данных";
		exit(0);
	}
	if ((leap_flag == 0) && (day > Months[month - 1]) || (day < 1)) {
		cout << "Неправильный формат дня";
		exit(0);
	}
	if ((leap_flag == 1)) {
		Months[1] = 29;
		if ((day >> Months[month - 1]) || (day < 1)) {
			cout << "Неправильный формат дня";
			exit(0);
		}
	}
}

int nameMonth(int month, int Months[12]) {
	string name_of_months[12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь","Октябрь", "Ноябрь", "Декабрь" };
	cout << "Название месяца: " << name_of_months[month - 1] << endl;
	return 0;
}

int getNumber(int day, int month, int year, int leap_flag) {
	int N = day;
	int Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leap_flag == 1)
		Months[1] = 29;

	for (int i = 0; i < month - 1; i++) {
		N += Months[i];
	}

	return N;
}

int getBirthdayNumber(int day, int month, int year, int leap_flag) {
	int N = day;
	int days, Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = month;
	int birthday, birthmonth, birthyear, databirth, birth_leap_flag;
	cout << "Введите данные о вашем дне рождения в формате ДДММГГГГ: ";
	cin >> databirth;
	birthyear = databirth % 10000;
	birthmonth = (databirth % 1000000 - year) / 10000;
	birthday = databirth / 1000000;
	if ((birthday % 4 == 0) && (birthday % 100 != 0) || (birthday % 400 == 0)) {
		birth_leap_flag = 1;
	}
	else {
		birth_leap_flag = 0;
	}
	if (birth_leap_flag == 1) {
		days = 336;
		Months[1] = 29;
	}
	else days = 365;
	checkIfCorrect(birthday, birthmonth, birthyear, birth_leap_flag, databirth, Months);
	if ((month >= birthmonth) && (day > birthday)) {
		N = getNumber(birthday, birthmonth, year, leap_flag) + days - getNumber(day, month, year, leap_flag);
	}
	else {
		N = getNumber(birthday, birthmonth, year, leap_flag) - getNumber(day, month, year, leap_flag);
	}
	return abs(N);
}