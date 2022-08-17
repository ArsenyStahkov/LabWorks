#include <iostream>
#include "Person.h"

// ����������� �� ���������
Person::Person() { name = ""; age = 0; }

// ����������� � �����������
Person::Person(string n, int a) { name = n; age = a; }

// ����������� �����������
Person::Person(const Person& person) { name = person.name; age = person.age; }

// ����������
Person::~Person() {}

// ������������
void Person::Set_age(int a) { age = a; }
void Person::Set_name(string a) { name = a; }

// ���������� �������� ������������
Person& Person::operator = (const Person& c) {
	if (&c == this) { return *this; }
	name = c.name;
	age = c.age;
	return *this;
}

// ���������� ������� ��� �����
istream& operator >> (istream& in, Person& c) {
	cout << "������� ��� � ������� ��� Person\n";
	cout << "���: ";
	in >> c.name;
	cout << "�������: ";
	in >> c.age;
	return in;
}

// ���������� ������� ��� ������
ostream& operator << (ostream& out, const Person& c) {
	out << "\n\n���: " << c.name;
	out << "\n�������: " << c.age;
	return out;
}