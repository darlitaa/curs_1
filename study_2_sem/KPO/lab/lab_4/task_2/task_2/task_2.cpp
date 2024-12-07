#include <iostream>
using namespace std;

typedef string country_code;
typedef unsigned short provider;
typedef unsigned int number;

typedef string owner;
typedef string tarif;
typedef bool limitless_internet;
typedef int all_nets_minutes;

struct Number {
	country_code code;
	provider prov;
	number numb;
};

struct User {
	struct Number num;
	owner own;
	tarif tar;
	limitless_internet intern;
	all_nets_minutes min;
};

bool operator == (User user1, User user2) {
	bool result;
	if (user1.tar == user2.tar)
		result = true;
	else
		result = false;
	return result;
}

bool operator > (User user1, User user2) {
	bool result;
	if (user1.min > user2.min)
		result = true;
	else
		result = false;
	return result;
}

void main() {
	setlocale(LC_ALL, "Russian");
	User user1 = { {"+375", 29, 1319510}, "Dasha", "smth", true, 2000 };
	User user2 = { {"+375", 44, 4784683}, "Nastia", "smth", true, 1000 };

	if (user1 == user2)
		cout << "У пользователей одинаковый тарифный план" << endl;
	else
		cout << "У пользователей разные тарифные планы" << endl;

	if (user1 > user2)
		cout << "У первого пользователя больше минут, чем у второго" << endl;
	else
		cout << "У первого пользователя меньше минут, чем у второго" << endl;
}