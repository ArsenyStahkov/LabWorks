#include <iostream>
#include <Windows.h>
#include <Math.h>
#include "fraction.h"
using namespace std;

int main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Fraction F;
	F.Read();
	F.Show();

	return 0;
}
