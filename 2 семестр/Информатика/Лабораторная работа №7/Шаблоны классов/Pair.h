#pragma once
#include <iostream>
using namespace std;

struct Pair {
	Pair(void);
	Pair(int, double);
	Pair(const Pair&);
	Pair& operator = (const Pair&);
	friend ostream& operator << (ostream& out, const Pair&);
	friend istream& operator >> (istream in, Pair&);
	virtual ~Pair(void) {};
	int first;
	double second;
};

