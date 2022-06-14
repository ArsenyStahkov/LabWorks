#include "fraction.h"
#include <iostream>
using namespace std;

void Fraction::Init(double f, int s) { first = f, second = s; }

void Fraction::Read() {
	cout << "¬ведите первый элемент прогрессии (a): ";
	cin >> first;
	cout << "\n¬ведите посто€нное отношение (r): ";
	cin >> second;
}

void Fraction::Show() { 
	int j;
	j = 3;

	cout << "\n–езультатом прогрессии чисел " << first << " и " << second << " будет " << first * pow(second, j) << endl; }
