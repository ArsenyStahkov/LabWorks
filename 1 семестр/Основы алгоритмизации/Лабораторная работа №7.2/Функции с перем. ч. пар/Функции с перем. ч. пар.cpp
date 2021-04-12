#include<iostream>
#include<string>

using namespace std;

int SystemTransfer(int num, string a, ...) 
{

	int result = 0;

	for (; num != 0; num--)
	{
		for (int i = 0; i < (int)a.size(); ++i) {
			result *= 8;
			result += (a[i] - '0');
		}
		cout << "Десятичная система: " << result << "\n";
	}

	return result;
}

int main() 
{

	setlocale(LC_ALL, "Rus");

	string a, b;
	b = "30";

	cout << "Восьмеричная система: " << b << "\n";

	SystemTransfer(1, b);
}
