#include <iostream>
#include "Pair.h"
using namespace std;

// Перегрузка операции присваивания
Pair& Pair::operator=(const Pair& t) {
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}

// Перегрузка вычитания пар чисел
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

// Перегрузка операции добавления константы к паре
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

// Перегрузка глобальной функции-операции ввода
istream& operator >> (istream & in, Pair & t) {
	cout << "Первое число (int): ";
	in >> t.first;
	cout << "Второе число (double): ";
	in >> t.second;
	return in;
}

// Перегрузка глобальной функции-оператора вывода
ostream& operator << (ostream & out, const Pair & t) {
	return (out << t.first << " : " << t.second);
}
