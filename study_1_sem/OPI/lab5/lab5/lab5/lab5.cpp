#include <iostream>
#include <Windows.h>
void main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");

	int numzad, usl;
	unsigned char latsim, russim, num, bigsim, smsim;
	do
	{
		cout << "Выберите номер задания(1, 2, 3, 4)" << endl;
		cin >> numzad;
		switch (numzad)
		{
		case 1: {
			cout << "Введите букву латинского алфавита:";
			cin >> latsim;
			if (latsim < 123 && latsim > 64)
			{
				bigsim = toupper(latsim);
				smsim = tolower(latsim);
				cout << "Код прописной буквы равен " << int(bigsim) << endl;
				cout << "Код строчной буквы равен " << int(smsim) << endl;
				cout << "Разница значений кодов равна " << smsim - bigsim << endl;
			}
			else
				cout << "Введенное число не является символом латинского алфавита" << endl;
			break; }
		case 2: {
			cout << "Введите букву русского алфавита:";
			cin >> russim;
			if (russim < 256 && russim > 192)
			{
				bigsim = toupper(russim);
				smsim = tolower(russim);
				cout << "Код прописной буквы равен " << int(bigsim) << endl;
				cout << "Код сточной буквы равен " << int(smsim) << endl;
				cout << "Разница значений кодов равна " << smsim - bigsim << endl;
			}
			else
				cout << "Введенное число не равняется символом русского алфавита" << endl;
			break; }
		case 3: {
			cout << "Введите число:" << endl;
			cin >> num;
			if (num > 47 && num < 58)
			{
				cout << "Код введенной цифры равен " << int(num) << endl;
			}
			else
				cout << "Введенный символ не является числом" << endl;
			break; }
		case 4: {
			break;
		}
		default:
			cout << "Неверный номер задания" << endl;
		}
		cout << "Выбрать задание снова? (1 - Да, 2 - Нет)" << endl;
		cin >> usl;
	} while (usl == 1);
}