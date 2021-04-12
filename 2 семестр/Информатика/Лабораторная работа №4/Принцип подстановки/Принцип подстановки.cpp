#include <iostream>
#include <Windows.h>
#include "Person.h"
#include "Student.h"
using namespace std;

// Функция, принимающая объект базового класса как параметр
void f1(Person& c)
{
	c.Set_age(30);
	cout << c;
}

// Функция, возвращающая объект базового класса как результат
Person f2()
{
	Student l("Alexander", 21, "Math", 4);
	return l;
}

void main()
{
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Работа с классом Person
	Person a;
	cin >> a;
	cout << a;
	Person b("ИвановИванИванович", 25);
	cout << "\n\nКонструктор с параметрами";
	cout << b;
	a = b;
	cout << "\n\nКонструктор с параметрами, вызванный через класс Student";
	cout << a;
	// Работа с классом Student
	Student c;
	cin >> c;
	cout << c;
	f1(c);
	a = f2();
}
