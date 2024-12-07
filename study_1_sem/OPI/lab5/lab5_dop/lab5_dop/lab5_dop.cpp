#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");

	float sum = 0, cost;
	int i = 1;//номер товара
	while (sum < 5)
	{
		cout << "цена товара " << i << "=";
		cin >> cost;
		sum += cost;
		i += 1;
	}
	sum -= cost;//отнимаем последний приплюсованный товар
	cout << "стоимости товаров в чеке до первой суммы,превышающей 5 руб, равна " << sum << " руб" << endl;
}