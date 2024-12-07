#include "stdafx.h"

extern int getNumber(int day, int month, int year, int leap_flag);
extern int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]);


int getBirthdayNumber(int day, int month, int year, int leap_flag) {
	int N = day;
	int days, Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = month;
	int birthday, birthmonth, birthyear, databirth, birth_leap_flag;
	cout << "¬ведите данные о вашем дне рождени€ в формате ƒƒћћ√√√√: ";
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
	if ((month >= birthmonth) && (day > birthday))
		N = getNumber(birthday, birthmonth, year, leap_flag) + days - getNumber(day, month, year, leap_flag);

	else
		N = getNumber(birthday, birthmonth, year, leap_flag) - getNumber(day, month, year, leap_flag);

	return N;
}