#include "Person.h"
Person::Person()
{
	name = "";
	age = 0;
}

// ����������
Person::~Person()
{
}

// ����������� � �����������
Person::Person(string N, int A)
{
	name = N;
	age = A;
}

// ����������� �����������
Person::Person(const Person& person)
{
	name = person.name;
	age = person.age;
}

// ������������
void Person::Set_age(int A)
{
	age = A;
}

// ���������� �������� ������������
Person& Person::operator = (const Person& c)
{
	if (&c == this) return *this;
	name = c.name;
	age = c.age;
	return *this;
}

// ���������� ������� ��� �����
istream& operator >> (istream& in, Person& c)
{
	cout << "������� ��� � �������\n";
	cout << "��� (��� ��������): ";
	in >> c.name;
	cout << "�������: ";
	in >> c.age;
	return in;
}

// ���������� ������� ��� ������
ostream& operator << (ostream& out, const Person& c)
{
	out << "\n\n���: " << c.name;
	out << "\n�������: " << c.age;
	return out;
}