#include "stdafx.h"

string nameMonth(int month) {
	string name_of_months[12] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������","�������", "������", "�������" };
	return name_of_months[month - 1];
}