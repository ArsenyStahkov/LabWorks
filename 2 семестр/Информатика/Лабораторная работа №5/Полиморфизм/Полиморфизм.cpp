#include <iostream>
#include <string>
#include <Windows.h>
#include "Person.h"
#include "Student.h"
#include "Obj.h"
#include "Vector.h"
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector v(5);
	Person a;
	cout << "Заполните данные Person:\n";
	cin >> a;
	Student b;
	cout << "\nЗаполните данные Student:\n";
	cin >> b;
	Obj* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	cout << v;
}
