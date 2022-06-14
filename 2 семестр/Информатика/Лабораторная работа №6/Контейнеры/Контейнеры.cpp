#include "List.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Создаем список из 5 элементов, заполненный нулями:\n";
	Listing a(5);
	cout << a << "\n";
	cout << "\nТеперь введите 5 любых целых чисел:\n";
	(cin >> a).get();
	cout << "\nВы ввели числа:\n" << a << "\n";
	cout << "\nПрисваиваем новое значение (100) элементу [2]:\n";
	a[2] = 100;
	cout << a << "\n";
	cout << "\nСоздаем второй список:\n";
	Listing b(5);
	cout << b << "\n";
	cout << "\nПрисваиваем списку b значения списка a:\n";
	b = a;
	cout << b << "\n";
	Listing c(5);
	cout << "\nПеремножаем значения [0] и [1] списка b, заносим в первый элемент и присваиваем списку с:\n";
	c = b * 1;
	cout << c;
	cout << "\n\nДлина списка a равна " << a() << endl;
	cout << "\nРазыменование значения, которое возвращает a.first():\n";
	cout << *(a.first()) << endl;
	cout << "\nУстановка переменной типа Iterator на второй элемент списка a:\n";
	Iterator i = a.first();
	++i;
	cout << *i << endl;
	cout << "\nВыводим значения элементов списка с помощью итератора:\n";
	for (i = a.first(); i != a.last(); ++i)
		{ cout << *i << endl; }
	cin.get();
	return 0;
}