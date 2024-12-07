#include <iostream>
#include "Call.h"
using namespace std;

void main() {
	int a = 1;
	int first_function = call::fcdecl(1, 2, 3);
	int second_function = call::stdcall(a, 2, 3);
	int third_function = call::cfst(1, 2, 3, 4);
	cout << first_function << '\t' << second_function << '\t' << third_function;
}