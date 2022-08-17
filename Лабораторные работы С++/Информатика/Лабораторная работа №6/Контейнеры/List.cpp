#include "List.h"

// Конструктор с параметрами
Listing::Listing(int s, int k) {
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		{ data[i] = k; }
	beg.elem = &data[0];
	end.elem = &data[size];
}

// Конструктор копирования
Listing::Listing(const Listing& a) {
	size = a.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{ data[i] = a.data[i]; }
	beg = a.beg;
	end = a.end;
}

// Деструктор
Listing::~Listing() { delete[]data; data = 0; }

// Присваивание
Listing& Listing::operator = (const Listing& a) {
	if (this == &a) { return *this; }
	size = a.size;
	if (data != 0) { delete[] data; }
	data = new int[size];
	for (int i = 0; i < size; i++)
		{ data[i] = a.data[i]; }
	beg = a.beg;
	end = a.end;
	return *this;
}

// Доступ по индексу
int& Listing::operator[] (int index) {
	if (index < size) { return data[index]; }
	cout << "\nОшибка! Index больше, чем длина списка";
	return data[0];
}

// Перемножение значений
Listing Listing::operator*(int b) {
	Listing temp(size);
	temp.data[0] = data[0] * data[b];
	return temp;
}

// Переопределение оператора вызова функции
int Listing::operator () () { return size; }

// Ввод-вывод
ostream& operator << (ostream& out, const Listing& a) {
	for (int i = 0; i < a.size; ++i)
	{ out << a.data[i] << " "; }
	return out;
}

istream& operator >> (istream& in, Listing& a) {
	for (int i = 0; i < a.size; ++i)
		{ in >> a.data[i]; }
	return in;
}