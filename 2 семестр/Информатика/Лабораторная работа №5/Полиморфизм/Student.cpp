#include "Student.h"

// ����������� ��� ����������
Student::Student(void) :Person()
{
	subject = "";
	grade = 0;
}

// ����������
Student::~Student(void)
{
}

// ����������� � �����������
Student::Student(string N, int A, string S, int G) :Person(N, A)
{
	subject = S;
	grade = G;
}

// ����������� �����������
Student::Student(const Student& L)
{
	name = L.name;
	age = L.age;
}

// ������������
void Student::Set_Subject(string S)
{
	subject = S;
}

void Student::Set_Grade(int G)
{
	grade = G;
}

// �������� ������������
Student& Student::operator = (const Student& l)
{
	if (&l == this) return *this;
	name = l.name;
	age = l.age;
	subject = l.subject;
	grade = l.grade;
	return *this;
}

// �������� �����
istream& operator >> (istream & in, Student & l)
{
	cout << "\n���: ";
	in >> l.name;
	cout << "\n�������: ";
	in >> l.age;
	cout << "\n�������: ";
	in >> l.subject;
	cout << "\n������: ";
	in >> l.grade;
	return in;
}

// �������� ������
ostream& operator << (ostream & out, const Student & l)
{
	out << "\n���: " << l.name;
	out << "\n�������: " << l.age;
	out << "\n�������: " << l.subject;
	out << "\n������: " << l.grade;
	out << "\n";
	return out;
}

void Student::Show()
{
	cout << "\n���: " << name;
	cout << "\n�������: " << age;
	cout << "\n�������: " << subject;
	if (grade < 3 && grade > 0)
	{
		cout << "\n������ ����!: " << grade;
	}
	else if (grade < 0 || grade > 5)
	{
		cout << "\n����������� ������� ������";
	}
	else
	{
		cout << "\n������: " << grade;
	}
	cout << "\n";
}