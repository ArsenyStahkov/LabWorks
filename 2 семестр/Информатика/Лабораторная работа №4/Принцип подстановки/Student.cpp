#include <iostream>
#include "Student.h"

// Конструктор по умолчанию
Student::Student():Person() { subject = ""; grade = 0; }

// Конструктор с параметрами
Student::Student(string N, int A, string S, int G) : Person(N, A) { subject = S; grade = G; }

// Конструктор копирования
Student::Student(const Student& L) { name = L.name; age = L.age; }

// Деструктор
Student::~Student(void) {}

// Модификаторы
void Student::Set_Subject(string S) { subject = S; }
void Student::Set_Grade(int G) { grade = G; }

// Операция присваивания
Student& Student::operator = (const Student& l) {
	if (&l == this) { return *this; } 
	name = l.name;
	age = l.age;
	subject = l.subject;
	grade = l.grade;
	return *this;
}

// Операция ввода
istream& operator >> (istream& in, Student& l) {
	cout << "\n\nВведите имя, возраст, предмет и оценку для Student";
	cout << "\nИмя: ";
	in >> l.name;
	cout << "\nВозраст: ";
	in >> l.age;
	cout << "\nПредмет: ";
	in >> l.subject;
	cout << "\nОценка: ";
	in >> l.grade;
	if (l.grade < 3 && l.grade > 0)
		{ cout << "\nОценка неуд!: " << l.grade; }
	else if (l.grade < 2 || l.grade > 5)
		{ cout << "\nНекорректно введена оценка!"; }
	else
		{ cout << "\nОценка: " << l.grade; }
	return in;
}

// Операция вывода
ostream& operator << (ostream& out, const Student& l) {
	out << "\nИмя: " << l.name;
	out << "\nВозраст: " << l.age;
	out << "\nПредмет: " << l.subject;
	out << "\n";
	return out;
}
