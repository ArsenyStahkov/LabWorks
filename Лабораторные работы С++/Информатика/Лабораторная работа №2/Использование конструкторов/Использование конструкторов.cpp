#include <iostream>
#include <string>
#include <Windows.h>
#include "Salary.h"
using namespace std;

Salary make_salary() {
	//string s;
	char s[100];
	double i;
	int d;
	cout << "\nВведение параметров вручную:";
	cout << "\nВведите ФИО: ";
	cin.getline(s, sizeof(s));
	cout << "\nВведите оклад: ";
	cin >> i;
	cout << "\nВведите премию (% от оклада): ";
	cin >> d;
	Salary t(s, i, d);
	return t;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Вызываем конструктор без параметров
	Salary a;
	a.show();
	// Вызываем конструктор с параметрами
	Salary b("Алексеев Олег Игоревич", 30000, 15);
	b.show();
	// Вызываем конструктор копирования
	Salary c = b;
	c.show();
	// Вызываем конструктор с параметрами, которые введет пользователь
	a = make_salary();
	a.show();
	return 0;
}
