#include <iostream>
#include <string>
#include <Windows.h>
#include "Salary.h"
using namespace std;

Salary make_Salary()
{
	string s;
	double i;
	int d;
	cout << "\nВведение параметров вручную:";
	cout << "\nВведите ФИО (без пробелов): ";
	cin >> s;
	cout << "\nВведите оклад: ";
	cin >> i;
	cout << "\nВведите премию (% от оклада): ";
	cin >> d;
	Salary t(s, i, d);
	return t;
}

void print_Salary(Salary t)
{
	t.show();
}

int main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Конструктор без параметров
	Salary t1;
	t1.show();
	// Конструктор с параметрами
	Salary t2("Алексеев Олег Игоревич", 30000, 15000);
	t2.show();
	// Конструктор копирования
	Salary t3 = t2;
	t3.set_fio("Алексеев Олег Игоревич");
	t3.set_income(30000);
	t3.set_prize(15000);
	print_Salary(t3);
	t1 = make_Salary();
	t1.show();
}
