#include "stdafx.h"

string nameMonth(int month) {
	string name_of_months[12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь","Октябрь", "Ноябрь", "Декабрь" };
	return name_of_months[month - 1];
}