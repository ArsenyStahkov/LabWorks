#include <iostream>
#include "Student.h"

// ����������� �� ���������
Student::Student():Person() { subject = ""; grade = 0; }

// ����������� � �����������
Student::Student(string N, int A, string S, int G) : Person(N, A) { subject = S; grade = G; }

// ����������� �����������
Student::Student(const Student& L) { name = L.name; age = L.age; }

// ����������
Student::~Student(void) {}

// ������������
void Student::Set_Subject(string S) { subject = S; }
void Student::Set_Grade(int G) { grade = G; }

// �������� ������������
Student& Student::operator = (const Student& l) {
	if (&l == this) { return *this; } 
	name = l.name;
	age = l.age;
	subject = l.subject;
	grade = l.grade;
	return *this;
}

// �������� �����
istream& operator >> (istream& in, Student& l) {
	cout << "\n\n������� ���, �������, ������� � ������ ��� Student";
	cout << "\n���: ";
	in >> l.name;
	cout << "\n�������: ";
	in >> l.age;
	cout << "\n�������: ";
	in >> l.subject;
	cout << "\n������: ";
	in >> l.grade;
	if (l.grade < 3 && l.grade > 0)
		{ cout << "\n������ ����!: " << l.grade; }
	else if (l.grade < 2 || l.grade > 5)
		{ cout << "\n����������� ������� ������!"; }
	else
		{ cout << "\n������: " << l.grade; }
	return in;
}

// �������� ������
ostream& operator << (ostream& out, const Student& l) {
	out << "\n���: " << l.name;
	out << "\n�������: " << l.age;
	out << "\n�������: " << l.subject;
	out << "\n";
	return out;
}
