#include <iostream>
#include "fraction.h"
using namespace std;

// ������������� ����� ���������
void fraction::Init(double F, int S)
{
	first = F, second = S;
}

// ������ �������� ����� ���������
void fraction::Read()
{
	cout << "\n������� ������ �����: ";
	cin >> first;
	cout << "\n������� ������ �����: ";
	cin >> second;
}

// ���������� j-�� �������� ����������
double fraction::Element()
{
	return first * second;
}