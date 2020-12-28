#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//	Метод половинного деления (уравнение)
double Equation(double x)
{
	return 3 * x - 4 * log(x) - 5;
}

//	Метод половинного деления (решение)
double HalfDevisionMethod(double a, double b, double (*Equation)(double))
{
	double c, result;

	while (b - a > 1e-2) {

		c = (a + b) / 2;
		if (Equation(b) * Equation(c) < 0)
		{
			a = c;
		}
		else
		{
			b = c;
		}
	}
	result = (a + b) / 2;
	cout << " " << fixed << setprecision(4) << "3x - 4lnx - 5 = 0; x = " << result << "\n";
	
	if (result > 3.2300)
	{
		cout << "\nРезультат " << fixed << setprecision(4) << result << " больше, чем 3.2300\n";
	}
	else
	{
		cout << "\nРезультат " << fixed << setprecision(4) << result << " меньше, чем 3.2300\n";
	}

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Передача функции как параметра другой функции с помощью указателя:\n\n";

	// Передаем указатель на функцию Уравнения функции Решения
	HalfDevisionMethod(2, 4, *Equation);

	return 0;
}
