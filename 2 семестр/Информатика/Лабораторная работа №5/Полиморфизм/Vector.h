#pragma once
#include "Obj.h"
#include <string>
#include <iostream>
using namespace std;

class Vector
{
public:
	Vector(void);
	Vector(int);
public:
	~Vector(void);
	void Add(Obj*);
	friend ostream& operator << (ostream& out, const Vector&);
private:
	Obj** beg;
	int size;
	int cur;
};