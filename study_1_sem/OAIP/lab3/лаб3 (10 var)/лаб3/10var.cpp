#include <iostream>

void main()
{
	double y, s, z = 1.7, a = 4e-8, m = 3, n = 3;
	y = (z+log(z)) / (exp(-3)+sqrt(a));
	s = (1+m*n) / log(1+z);
	std::cout << "y=" << y;
	std::cout << "s=" << s;
}