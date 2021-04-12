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
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector v(5);
	Student a;
	cin >> a;
	Student b;
	cin >> b;
	Obj* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	cout << v;
}
