#pragma once
#include "Person.h"

struct Student : public Person {
	Student(void);
	~Student(void);
	void Show();
	Student(string, int, string, int);
	Student(const Student&);
	string Get_subject() { return subject; }
	int Get_grade() { return grade; }
	void Set_Subject(string);
	void Set_Grade(int);
	Student& operator = (const Student&);
	friend istream& operator >> (istream& in, Student& l);
	friend ostream& operator << (ostream& out, const Student& l);
protected:
	string subject;
	int grade;
};
