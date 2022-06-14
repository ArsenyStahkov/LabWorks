#include <iostream>
#include "Windows.h"
#include "Print.h"
#include "Magazin.h"
#include "Vector.h"
#include "Dialog.h"
#include "Event.h"
#include "Object.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите данные печатного издания (класс Print):";
	Print* a = new Print;
	a->Input();
	a->Show();

	cout << "\nВведите данные печатного издания (класс Magazine):";
	Magazine* b = new Magazine;
	a->Input();
	a->Show();

	/*Print* c = new Print;
	c->Input();
	Magazine* b = new Magazine;
	b->Input();*/

	Vector v(10);
	Object* p = a;
	v.Add();
	p = b;
	v.Add();
	v.Show();
	v.Del();
	//cout << "\nVector size = " << v();

	Dialog D;
	D.Execute();

	return 0;
}
