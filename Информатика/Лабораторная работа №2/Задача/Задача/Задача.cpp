#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// Функция, находящая факториал числа n
float fact(int n)
{
	if (n < 0)
		return 0;

	if (n == 0)
		return 1;

	else
		return n * fact(n - 1);
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int n, rootFirst, rootSecond;
	float sumOfSeries = 0;
	int i = 1;
	
	cout << "Пожалуйста, введите любое целое число для нахождения суммы ряда\n";
	cin >> n;

	// Цикл, складывающий результаты ряда
	while (i <= n)
	{
		rootFirst = pow(i, 2);
		rootSecond = pow(2, rootFirst);
		sumOfSeries += pow(fact(i), 2) / rootSecond;
		i++;
	}

	cout << "\nСумма ряда равна " << fixed << setprecision(4) << sumOfSeries << "\n";

	int j = 1;
	int a;
	float result1, result2, result3, result4;
	float result5 = 1;

	cin >> a;

	while (j <= a)
	{
		result1 = pow(j + 1, 2);
		result2 = pow(j, 2);
		result3 = pow(2, result2);
		result4 = pow(2, result1);
		result5 *= ((result1 * result3) / result4);
		j++;
	}

	cout << "\nСумма ряда равна " << fixed << setprecision(4) << result5 << "\n";

	return 0;
}
