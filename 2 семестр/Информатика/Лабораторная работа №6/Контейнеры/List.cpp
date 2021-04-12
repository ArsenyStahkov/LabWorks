#include "List.h"
#include <iostream>
#include <string>
using namespace std;

// Конструктор с параметрами
Listing::Listing(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
	beg.elem = &data[0];
	end.elem = &data[size];
}

// Конструктор копирования
Listing::Listing(const Listing&a)
{
	size = a.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
}

// Деструктор
Listing::~Listing()
{
	delete[]data;
	data = 0;
}

// Присваивание
Listing& Listing::operator = (const Listing& a)
{
	if (this == &a) return *this;
	size = a.size;
	if (data!= 0) delete[] data;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	beg = a.beg;
	end = a.end;
	return *this;
}

// Доступ по индексу
int& Listing::operator[] (int index)
{
	if (index < size)
		return data[index];
	else
		cout << "\nОшибка! Index больше, чем длина списка";
}

// Добавление константы
Listing Listing::operator+(const int k)
{
	Listing temp(size);
	for (int i = 0; i < size; ++i)
		temp.data[i] += data[i] + k;
	return temp;
}

// Получение длины списка
/*int Listing::operator () ()
{
	return len();
}*/

// Ввод-вывод
ostream& operator << (ostream& out, const Listing& a)
{
	for (int i = 0; i < a.len(); ++i)
		out << a.data[i] << " ";
	return out;
}

istream& operator << (istream& in, const Listing& a)
{
	for (int i = 0; i < a.len(); ++i)
		in >> a.data[i];
	return in;
}
