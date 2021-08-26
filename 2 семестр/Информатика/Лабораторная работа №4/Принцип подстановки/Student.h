#pragma once
#include "Person.h"

class Student :
	public Person
{
public:
	Student();
public:
	~Student();
	Student(string, int, string, int);
	Student(const Student&);
	string Get_subject() { return subject; }
	int Get_grade() { return grade; }
	void Set_Subject(string);
	void Set_Grade(int);
	Student& operator = (const Student&);
	friend istream& operator >> (istream& in, Student & l);
	friend ostream& operator << (ostream& out, const Student& l);
	friend ostream& operator << (ostream& out, const Student& p);
protected:
	string subject;
	int grade;
};

