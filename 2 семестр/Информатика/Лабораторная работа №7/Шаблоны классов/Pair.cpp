#include "Pair.h"
#include <iostream>
using namespace std;

Pair::Pair(void) { first = second = 0; }

Pair::Pair(int F, double S) { first = F, second = S; }

Pair::Pair(const Pair& t) { first = t.first; second = t.second; }

Pair& Pair::operator = (const Pair& t)
	{ first = t.first; second = t.second; return *this; }

ostream& operator << (ostream& out, const Pair& t)
	{ out << t.first << " : " << t.second; return out; }

istream& operator >> (istream& in, Pair& t) {
	cout << "\n������ �����? ";
	in >> t.first;
	cout << "\n������ �����? ";
	in >> t.second;
	return in;
}
