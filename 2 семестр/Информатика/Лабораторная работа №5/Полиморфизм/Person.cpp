#include "Person.h"
Person::Person(void)
{
	name = "";
	age = 0;
}

// ����������
Person::~Person(void)
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
void Person::Set_name(string N)
{
	name = N;
}
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
istream& operator >> (istream & in, Person & c)
{
	cout << "\n\n���: ";
	in >> c.name;
	cout << "\n�������: ";
	in >> c.age;
	return in;
}

// ���������� ������� ��� ������
ostream& operator << (ostream & out, const Person & c)
{
	out << "\n\n���: " << c.name;
	out << "\n�������: " << c.age;
	return out;
}

void Person::Show()
{
	cout << "\n\n���: " << name;
	cout << "\n�������" << age;
	cout << "\n";
}