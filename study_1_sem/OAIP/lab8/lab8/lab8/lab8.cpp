﻿#include <iostream>// Подключение библиотеки для работы с вводом/выводом данных на экран
int main()
{
	setlocale(LC_CTYPE, "Russian");//подключение русского
	float x, h, s = 0, s1 = 0, s2 = 0, a = 1, b = 3, n = 200;
	h = (b - a) / (2 * n);//длина интервала
	x = a + 2 * h;
	for (int i = 1; i < n; i++)//используем цикл for 
	{
		s2 = s2 + (x * x - 4);//суммируем чётные значения y(где y=f(x))
		x = x + h;
		s1 = s1 + (x * x - 4);//суммируем нечётные значения y(где y=f(x))
		x = x + h;
	}
	s = (h / 3) * ((x * x - 4) + 4 * (pow((a + h), 2) - 4) + 4 * s1 + 2 * s2 + (b * b - 4));//находим площадь
	std::cout << "Площадь= " << s;// выводим на экран значение переменной s
}
