#pragma once

namespace call {
	int _cdecl fcdecl(int a, int b, int c) {
		return a + b + c;
	}
	int _stdcall stdcall(int& a, int b, int c) {
		return a * b * c;
	}
	int _fastcall cfst(int a, int b, int c, int d) {
		return a + b + c + d;
	}
}