#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int n, m;

	cout << "Пожалуйста, введите первое число 'n'\n";
	cin >> n;
	cout << "\nТеперь введите второе число 'm'\n";
	cin >> m;

	cout << "\n1) n++-m = " << (n++ - m);
	cout << "\n2) m-- >n = " << (m-- > n);
	cout << "\n3) n-- >m = " << (n-- > m) << "\n";

	return 0;
}
