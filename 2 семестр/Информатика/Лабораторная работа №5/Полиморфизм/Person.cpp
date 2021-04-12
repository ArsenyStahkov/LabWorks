#include "Person.h"
Person::Person(void)
{
	name = "";
	age = 0;
}

// Деструктор
Person::~Person(void)
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
void Person::Set_name(string N)
{
	name = N;
}
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
istream& operator >> (istream & in, Person & c)
{
	cout << "\n\nИмя: ";
	in >> c.name;
	cout << "\nВозраст: ";
	in >> c.age;
	return in;
}

// Глобальная функция для вывода
ostream& operator << (ostream & out, const Person & c)
{
	out << "\n\nИМЯ: " << c.name;
	out << "\nВОЗРАСТ: " << c.age;
	return out;
}

void Person::Show()
{
	cout << "\n\nИМЯ: " << name;
	cout << "\nВОЗРАСТ" << age;
	cout << "\n";
}