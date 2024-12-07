#include <iostream>
#include <time.h>
using namespace std;

int fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 0) {
		return 0;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	double spent_time = 0.0;
	double spent_time_sec = 0.0;
	int spent_time_min = 0;

	unsigned long int num = 0;
	cout << "Введите число N в последовательности Фибоначи: ";
	cin >> num;
	cout << "Этой последовательности соответствует цифра: ";

	clock_t start = clock();
	cout << fib(num - 1) << endl << endl;
	clock_t end = clock();
	spent_time = (double)(end - start) / CLOCKS_PER_SEC;
	spent_time_min = (int)(spent_time / 60);
	spent_time_sec = spent_time - (spent_time_min * 60);

	cout << "Расчетное время рекурсией: " << spent_time_min << " минут  " << spent_time_sec << " секунд";
}