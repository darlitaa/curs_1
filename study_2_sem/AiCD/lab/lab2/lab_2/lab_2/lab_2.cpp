#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int N, answer, choice = 0, left = 1, mid;
	int right2, left2;
	bool check = false;
	cout << "Введите диапозон чисел (от 1 до N): "; cin >> N;
	cout << "Введите загаданное число: "; cin >> answer;
	right2 = N;
	left2 = left;
	mid = N / 2;

	do {
		if (choice == 1) {
			left = mid;
			mid = (N + left) / 2;
		}
		if (choice == 2) {
			N = mid;
			mid = (N + left) / 2;
		}
		if (choice == 3 || mid == answer)
			check = true;
		system("cls");
		cout << mid << endl;
		cout << "1) больше" << endl;
		cout << "2) меньше" << endl;
		cout << "3) угадал" << endl;
		cin >> choice;
	} while (check != true);

	system("cls");
	cout << "Загаданное число: " << answer << endl;
	cout << "Максимальное количество шагов: " << round(log2(right2)) << endl;

	for (int m = 1, n = right2; n > 1; m++)
	{
		mid = (left2 + right2) / 2;
		cout << "шаг " << m << " число " << mid << endl;
		right2 = mid;
		n = mid;
	}
}