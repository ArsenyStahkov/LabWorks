#include <iostream>
#include <Windows.h>
#include "Person.h"
#include "Student.h"
using namespace std;

// Функция, принимающая объект базового класса как параметр
void f1(Person& c) { c.Set_name("Alexander");  c.Set_age(20); cout << c; }

// Функция, возвращающая объект базового класса как результат
Person f2() {
	Student l("Alexander", 21, "Math", 4);
	return l;
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Person a;
	cin >> a;
	cout << a;
	Person b("Иван", 25);
	cout << "\n\nКонструктор с параметрами:";
	cout << b;
	Student c;
	cin >> c;
	cout << c;
	f1(c);
	a = f2();
	return 0;
}
