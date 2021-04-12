#include <iostream>
#include "fraction.h"
#include <Windows.h>
using namespace std;

fraction make_fraction(double F, int S)
{
	fraction t;
	t.Init(F, S);
	return t;
}

int main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// Определение переменной A
	fraction A;
	// Ввод полей переменной А
	A.Read();
	cout << "\nРезультатом прогрессии aj (" << A.first << ", "<<A.second << ") будет " << A.Element() << endl;

	return 0;
}
