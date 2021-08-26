#include "Person.h"
Person::Person()
{
	name = "";
	age = 0;
}

// Деструктор
Person::~Person()
{
}

// Конструктор с параметрами
Person::Person(string N, int A)
{
	name = N;
	age = A;
}

// Конструктор копирования
Person::Person(const Person& person)
{
	name = person.name;
	age = person.age;
}

// Модификаторы
void Person::Set_age(int A)
{
	age = A;
}

// Перегрузка операции присваивания
Person& Person::operator = (const Person& c)
{
	if (&c == this) return *this;
	name = c.name;
	age = c.age;
	return *this;
}

// Глобальная функция для ввода
istream& operator >> (istream& in, Person& c)
{
	cout << "Введите имя и возраст\n";
	cout << "Имя (без пробелов): ";
	in >> c.name;
	cout << "Возраст: ";
	in >> c.age;
	return in;
}

// Глобальная функция для вывода
ostream& operator << (ostream& out, const Person& c)
{
	out << "\n\nИМЯ: " << c.name;
	out << "\nВОЗРАСТ: " << c.age;
	return out;
}