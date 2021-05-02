#include <C:\Users\arsenii.stashkov\Documents\Политех\Лабораторные работы C++\2 семестр\Основы алгоритмизации\Лабораторная работа №11\Task2\Pair.h>
#include <iostream>
#include <queue>
#include <vector>
#include "Listing.h"

int main()
{
	Listing<Pair>l(3);
	l.Print();
	Pair p = l.Average();
	cout << "\nAverage = " << p << endl;
	cout << "Add average" << endl;
	l.Add(p);
	l.Print();
	l.Sum();
	l.Print();
}
