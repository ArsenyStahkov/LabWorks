#include "Student.h"

// Конструктор без параметров
Student::Student(void) :Person()
{
	subject = "";
	grade = 0;
}

// Деструктор
Student::~Student(void)
{
}

// Конструктор с параметрами
Student::Student(string N, int A, string S, int G) :Person(N, A)
{
	subject = S;
	grade = G;
}

// Конструктор копирования
Student::Student(const Student& L)
{
	name = L.name;
	age = L.age;
}

// Модификаторы
void Student::Set_Subject(string S)
{
	subject = S;
}

void Student::Set_Grade(int G)
{
	grade = G;
}

// Операция присваивания
Student& Student::operator = (const Student& l)
{
	if (&l == this) return *this;
	name = l.name;
	age = l.age;
	subject = l.subject;
	grade = l.grade;
	return *this;
}

// Операция ввода
istream& operator >> (istream & in, Student & l)
{
	cout << "\nИмя: ";
	in >> l.name;
	cout << "\nВозраст: ";
	in >> l.age;
	cout << "\nПредмет: ";
	in >> l.subject;
	cout << "\nОценка: ";
	in >> l.grade;
	return in;
}

// Операция вывода
ostream& operator << (ostream & out, const Student & l)
{
	out << "\nИмя: " << l.name;
	out << "\nВозраст: " << l.age;
	out << "\nПредмет: " << l.subject;
	out << "\nОценка: " << l.grade;
	out << "\n";
	return out;
}

void Student::Show()
{
	cout << "\nИмя: " << name;
	cout << "\nВозраст: " << age;
	cout << "\nПредмет: " << subject;
	if (grade < 3 && grade > 0)
	{
		cout << "\nОценка неуд!: " << grade;
	}
	else if (grade < 0 || grade > 5)
	{
		cout << "\nНекорректно введена оценка";
	}
	else
	{
		cout << "\nОценка: " << grade;
	}
	cout << "\n";
}