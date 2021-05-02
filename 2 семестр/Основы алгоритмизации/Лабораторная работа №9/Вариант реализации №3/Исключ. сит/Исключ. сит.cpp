#include "Listing.h"
#include "Error.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		Listing x(2);
		Listing y;
		cout << x;
		cout << "Введите номер:\n";
		int i;
		cin >> i;
		cout << x[i] << endl;
		y = x + 3;
		cout << y;
		x* 1;
		cout << x;
	}
	catch (Error & e)
	{
		e.what();
	}
	return 0;
}
