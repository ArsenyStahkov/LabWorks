#include "Listing.h"
#include "Error.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	try {
		cout << "Список с 2 пустыми элементами:\n";
		Listing x(2);
		Listing y;
		cout << x;
		cout << "\nВведите номер элемента:\n";
		int i;
		cin >> i;
		cout << x[i] << endl;
		y = x + 3;
		cout << y;
		x*1;
		cout << x;
	}
	catch (Error & e) 
		{ e.what(); }
	return 0;
}
