#include <iostream>
#include "fraction.h"
#include <Windows.h>
using namespace std;

Fraction make_fraction(double F, int S)
{
	Fraction t;
	t.Init(F, S);
	return t;
}

int main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// Определение переменной A
	Fraction A;
	// Ввод полей переменной А
	A.Read();
	// Вывод результата
	cout << "\nРезультатом прогрессии aj (" << A.first << ", "<<A.second << ") будет " << A.Element() << endl;

	return 0;
}
