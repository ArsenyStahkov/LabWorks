#include "fraction.h"
#include <iostream>
using namespace std;

void Fraction::Init(double f, int s) { first = f, second = s; }

void Fraction::Read() {
	cout << "������� ������ ������� ���������� (a): ";
	cin >> first;
	cout << "\n������� ���������� ��������� (r): ";
	cin >> second;
}

void Fraction::Show() { 
	int j;
	j = 3;

	cout << "\n����������� ���������� ����� " << first << " � " << second << " ����� " << first * pow(second, j) << endl; }
