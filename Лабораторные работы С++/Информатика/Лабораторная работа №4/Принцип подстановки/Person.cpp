#include <iostream>
#include "Person.h"

// Конструктор по умолчанию
Person::Person() { name = ""; age = 0; }

// Конструктор с параметрами
Person::Person(string n, int a) { name = n; age = a; }

// Конструктор копирования
Person::Person(const Person& person) { name = person.name; age = person.age; }

// Деструктор
Person::~Person() {}

// Модификаторы
void Person::Set_age(int a) { age = a; }
void Person::Set_name(string a) { name = a; }

// Перегрузка операции присваивания
Person& Person::operator = (const Person& c) {
	if (&c == this) { return *this; }
	name = c.name;
	age = c.age;
	return *this;
}

// Глобальная функция для ввода
istream& operator >> (istream& in, Person& c) {
	cout << "Введите имя и возраст для Person\n";
	cout << "Имя: ";
	in >> c.name;
	cout << "Возраст: ";
	in >> c.age;
	return in;
}

// Глобальная функция для вывода
ostream& operator << (ostream& out, const Person& c) {
	out << "\n\nИмя: " << c.name;
	out << "\nВозраст: " << c.age;
	return out;
}