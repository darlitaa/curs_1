﻿#include <iostream>
using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int f = 1, int g = 2) {
	return (a + b + c + d + e + f + g) / 7;
}

int main() {
	int function1 = defaultparm(1, 2, 3, 4, 5);
	int function2 = defaultparm(1, 2, 3, 4, 5, 6, 7);
}