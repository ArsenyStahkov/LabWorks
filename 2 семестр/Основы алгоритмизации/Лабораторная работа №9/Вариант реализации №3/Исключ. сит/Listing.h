#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

const int MAX_SIZE = 30;
class Listing
{
	int size;
	int* beg;
public:
	Listing() { size = 0; beg = 0; };
	Listing(int s);
	Listing(int s, int* mas);
	Listing(const Listing& l);
	~Listing();
	const Listing& operator = (const Listing& l);
	int operator[] (int i);
	Listing operator+(int a);
	Listing operator*(int a);
	friend ostream& operator << (ostream& out, const Listing& l);
	friend istream& operator >> (istream& in, Listing& l);
};