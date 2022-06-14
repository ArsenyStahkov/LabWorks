#pragma once
#include "Obj.h"
#include <string>
#include <iostream>
using namespace std;

struct Vector {
	Vector(void);
	Vector(int);
	~Vector(void);
	void Add(Obj*);
	friend ostream& operator << (ostream& out, const Vector&);
private:
	Obj** beg;
	int size;
	int cur;
};
