#include "Listing.h"
#include "Pair.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите 5 целых чисел: \n";
	Listing<int>A(5, 0);
	cin >> A;
	cout << "\nИнициализация, ввод и вывод значений:  " << A << endl;
	Listing <int>B(10, 5);
	cout << "\nИнициализация и вывод заранее заданных значений:  " << B << endl;
	B = A;
	cout << "\nПрисваивание значение A переменной B:  " << B << endl;
	cout << "\nДоступ по индексу [2]:  " << A[2] << endl;
	cout << "\nРазмер списка " << A() << " символов" << endl;
	cout << "\nУмножение элементов списков по индексам [0] и [2]:  " << A[0] * A[2];
}
