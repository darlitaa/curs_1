#include <iostream>
#include <time.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	double spent_time = 0.0;
	double spent_time_sec = 0.0;
	int spent_time_min = 0;

	unsigned long int num1 = 0;
	unsigned long int nun2 = 1;
	unsigned long int num3 = 0;

	unsigned long int num = 0;
	cout << "Введите число N в последовательности Фибоначи: ";
	cin >> num;
	cout << "Этой последовательности соответствует цифра: ";

	clock_t start = clock();
	for (int i = 0; i < num - 2; i++) {
		num3 = nun2 + num1;
		num1 = nun2;
		nun2 = num3;
	}
	cout << num3 << endl << endl;
	clock_t end = clock();
	spent_time = (double)(end - start) / CLOCKS_PER_SEC;
	spent_time_min = (int)(spent_time / 60);
	spent_time_sec = spent_time - (spent_time_min * 60);

	cout << "Расчетное время линейно: " << spent_time_min << " минут  " << spent_time_sec << " секунд";
}