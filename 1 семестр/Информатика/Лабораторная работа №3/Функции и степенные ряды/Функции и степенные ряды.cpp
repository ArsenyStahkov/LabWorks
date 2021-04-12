#include <cstdlib>
#include <iostream>
#include <math.h>
#define A 0.1
#define B 1.0
#define E 10e-4

int main(int argc, char* argv[])
{
	// Объявляем переменные в соответствии с задачей
	double x, k = (B - A) / 10.0, sn = 0, se = 0, t, y;
	int i, j;
	int n = 30;

	for (x = A; x <= B; x += k) 
	{
		sn = x; se = x;

		for (i = 1; i <= n; i++) 
		{
			sn += pow(-1, i + 1) * pow(x, 2 * i + 1) / 4 * pow(i, 2) - 1;
		};

		j = 1;

		do
		{
			t = pow(-1, j + 1) * pow(x, 2 * j + 1) / 4 * pow(j, 2) - 1;
			j++;
			se += t;
		} while (t > E);

		// Вычисляем функцию
		y = ((1 + pow(x, 2)) / 2) * atan(x) - x / 2;

		printf("x = %.2f SN = %f SE = %f Y = %f\n\n", x, sn, se, y);
	}

	// Возвращаем выходное значение
	return EXIT_SUCCESS;
}
