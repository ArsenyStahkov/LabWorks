#include <iostream>
#include <math.h>

using namespace std;

int MathExpression(int a, int b)
{
	return pow(a, b);
}

double MathExpression(double a, double b)
{
	return pow(a, 1 / b);
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int	num1, root1, resultInt;
	double num2, root2, resultDouble;

	num1 = 4, root1 = 2;
	num2 = 16.0, root2 = 4.0;

	resultInt = MathExpression(num1, root1);
	resultDouble = MathExpression(num2, root2);

	cout << "\nДля целых чисел: " << resultInt << "\n" << "Для десятичных чисел: " << resultDouble << "\n";

	return 0;
}
