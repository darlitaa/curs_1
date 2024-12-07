#include "stdafx.h"

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