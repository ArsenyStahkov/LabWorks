#include "Pair.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Конструкторы без параметров
	Pair a;
	Pair b;
	Pair c;
	cout << "Первая пара чисел\n\n";
	cin >> a;
	cout << "\nВторая пара чисел\n\n";
	cin >> b;
	c = a - b;
	cout << "\n\nПервая пара = " << a << endl;
	cout << "Вторая пара = " << b << endl;
	cout << "Вычитание пар чисел = " << c << endl;
	c = a * b;
	cout << "Добавление константы (10) к первой паре = " << c << endl;
}
