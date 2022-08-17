#include "Student.h"

// Конструктор без параметров
Student::Student(void) : Person() { subject = ""; grade = 0; }

// Деструктор
Student::~Student(void) {}

// Конструктор с параметрами
Student::Student(string N, int A, string S, int G) :Person(N, A) { subject = S; grade = G; }

// Конструктор копирования
Student::Student(const Student& L) { name = L.name; age = L.age; }

// Модификаторы
void Student::Set_Subject(string S) { subject = S; }

void Student::Set_Grade(int G) { grade = G; }

// Операция присваивания
Student& Student::operator = (const Student& l) {
	if (&l == this) return *this;
	name = l.name;
	age = l.age;
	subject = l.subject;
	grade = l.grade;
	return *this;
}

// Операция ввода
istream& operator >> (istream & in, Student & l) {
	cout << "\nИмя: ";
	in >> l.name;
	cout << "Возраст: ";
	in >> l.age;
	cout << "Предмет: ";
	in >> l.subject;
	cout << "Оценка: ";
	in >> l.grade;
	if (l.grade < 3 && l.grade > 0)
		{ cout << "\nОценка неуд!: " << l.grade; }
	else if (l.grade < 0 || l.grade > 5) 
		{ cout << "\nНекорректно введена оценка"; }
	else
		{ return in; }
}

// Операция вывода
ostream& operator << (ostream & out, const Student & l) {
	out << "\nИмя: " << l.name;
	out << "\nВозраст: " << l.age;
	out << "\nПредмет: " << l.subject;
	out << "\nОценка: " << l.grade;
	out << "\n";
	return out;
}

void Student::Show() {
	cout << "\nИмя: " << name;
	cout << "\nВозраст: " << age;
	cout << "\nПредмет: " << subject;
	cout << "\nОценка: " << grade;
	cout << "\n";
}
