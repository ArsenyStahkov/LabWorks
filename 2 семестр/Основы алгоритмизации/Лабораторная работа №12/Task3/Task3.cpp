#include "C:\Users\arsenii.stashkov\Documents\Политех\Лабораторные работы C++\2 семестр\Основы алгоритмизации\Лабораторная работа №11\Task2\Pair.h"
#include "Container.h"
#include <iostream>

int main()
{
	int n;
	cout << "N?";
	cin >> n;
	Listing <Pair> v(n);
	v.Print();
	Pair p = v.Average();
	cout << "Average = " << t << endl;
	cout << "Add average" << endl;
	v.Add(t);
	v.Print();
	cout << "Summa: \n";
	v.Sum();
	v.Print();
}
