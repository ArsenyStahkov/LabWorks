#include <iostream>
#include <list>
#include <cstdlib>
#include "Pair.h"
using namespace std;

typedef list<double>Listing;
Listing MakeVector(double n) {
	Listing l;
	for (int i = 0; i < n; i++) 
		{ int a = rand() % 100 - 50; l.push_back(a); }
	return l;
}

void PrintVector(Listing l) {
	for (int i = 0; i < l.size(); i++)
		{ cout << l[i] << " "; }
	cout << endl;
}

double Average(Listing l) {
	double a = 0;
	for (int i = 0; i < l.size(); i++)
		{ a += l[i]; }
	int n = l.size();
	return a / n;
}

void AddValue(Listing& l, double el) {
	int pos = l.size();
	l.insert(l.begin() + pos, el);
}

int Min(Listing l) {
	int mi = l[0], n = 0;
	for (int i = 0; i < l.size(); i++) {
		if (mi > l[i]) { mi = l[i]; n = i; }
	}
	return n;
}

int Max(Listing l) {
	int ma = l[0], n = 0;
	for (int i = 0; i < l.size(); i++) {
		if (ma < l[i]) { ma = l[i]; n = i; }
	}
	return n;
}

void Sum(Listing& l) {
	double mi = Min(l);
	double ma = Max(l);
	for (int i = 0; i < l.size(); i++)
		{ l[i] = l[i] + (l[mi] + l[ma]); }
}

int main()
{
	setlocale(LC_ALL, "Rus");

	try {
		list<double> l;
		list<double>::iterator vi = l.begin();
		int n;
		cout << "Введите длину списка: ";
		cin >> n;
		l = MakeVector(n);
		PrintVector(l);
		double el = Average(l);
		AddValue(l, el);
		PrintVector(l);
	}
	catch (int) {
		cout << "Ошибка!\n";
	}
}

