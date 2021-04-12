#include <iostream>
#include "Print.h"
#include "Magazin.h"
#include "Vector.h"
#include "Dialog.h"
#include "Event.h"
#include "Object.h"

void main()
{
	Print* a = new Print;
	a->Input();
	a->Show();

	Magazine* b = new Magazine;
	a->Input();
	a->Show();

	Print* a = new Print;
	a->Input();
	Magazine* b = new Magazine;
	b->Input();

	Vector v(10);
	Object* p = a;
	v.Add(p);
	p = b;
	v.Add(p);
	v.Show();
	v.Del();
	cout << "\nVector size = " << v();

	Dialog D;
	D.Execute();
}
