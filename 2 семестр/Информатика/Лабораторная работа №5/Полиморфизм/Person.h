#pragma once
#include <string>
#include <iostream>
#include "Obj.h"
using namespace std;

class Person :
	public Obj
{
public:
	Person(void);
public:
	virtual ~Person(void);
	void Show();
	Person(string, int);
	Person(const Person&);
	string Get_name() { return name; }
	int Get_age() { return age; }
	void Set_name(string);
	void Set_age(int);
	Person& operator = (const Person&);
	friend istream& operator >> (istream& in, Person& c);
	friend ostream& operator << (ostream& out, const Person& c);
protected:
	string name;
	int age;
};