#include <iostream>
#include "Pair.h"
using namespace std;

// ���������� �������� ������������
Pair& Pair::operator=(const Pair& t) {
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}

// ���������� ��������� ��� �����
Pair Pair::operator-(const Pair& t) {
	int temp = first;
	int temp2 = t.first;
	double tempDouble = second;
	double tempDouble2 = t.second;
	Pair p;
	p.first = temp - temp2;
	p.second = tempDouble - tempDouble2;
	return p;
}

// ���������� �������� ���������� ��������� � ����
Pair Pair::operator+(const Pair& a) {
	const double number = 10.5;
	int temp = first;
	double temp2 = second;
	Pair p;
	if ((int)number == number)
	{
		p.first = temp + number;
		p.second = temp2;
	}
	else
	{
		p.second = temp2 + number;
		p.first = temp;
	}
	return p;
}

// ���������� ���������� �������-�������� �����
istream& operator >> (istream & in, Pair & t) {
	cout << "������ ����� (int): ";
	in >> t.first;
	cout << "������ ����� (double): ";
	in >> t.second;
	return in;
}

// ���������� ���������� �������-��������� ������
ostream& operator << (ostream & out, const Pair & t) {
	return (out << t.first << " : " << t.second);
}
