#include <iostream>
#include "fraction.h"
using namespace std;

// ������������� ����� ���������
void Fraction::Init(double F, int S)
{
	first = F, second = S;
}

// ������ �������� ����� ���������
void Fraction::Read()
{
	cout << "\n������� ������ �����: ";
	cin >> first;
	cout << "\n������� ������ �����: ";
	cin >> second;
}

// ���������� j-�� �������� ����������
double Fraction::Element()
{
	return first * second;
}