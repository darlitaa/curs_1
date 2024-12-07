#include "stdafx.h"

extern string nameMonth(int month);

int countTheEventDate(int evetn_day, int Months[12], int year) {
	int event_day = evetn_day;
	int month_number = 1;
	for (int i = 0; event_day > Months[i]; i++) {
		event_day = event_day - Months[i];
		month_number++;
	}
	cout << "Дата проведения мероприятия: " << event_day << ' ' << nameMonth(month_number) << ' ' << year << endl;
	return 0;
}