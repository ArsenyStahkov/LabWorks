#include <iostream>
#include <math.h>

using namespace std;

float SolutionFloat(float a, float b)
{
	float c, d, e, f, g;
	c = pow(a + b, 3);
	d = pow(a, 3);
	e = 3 * a * b * b;
	f = pow(b, 3);
	g = 3 * a * a * b;
	return (c - d) / (e + f + g);
}

double SolutionDouble(double a, double b)
{
	double c, d, e, f, g;
	c = pow(a + b, 3);
	d = pow(a, 3);
	e = 3 * a * b * b;
	f = pow(b, 3);
	g = 3 * a * a * b;
	return (c - d) / (e + f + g);
}

int main()
{
	cout << "Float: " << SolutionFloat(1000, 0.0001) << "\n";
	cout << "Double: " << SolutionDouble(1000, 0.0001) << "\n";

	return 0;
}

