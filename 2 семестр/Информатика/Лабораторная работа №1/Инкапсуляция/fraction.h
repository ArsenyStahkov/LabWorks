#pragma once
#include <iostream>
#include <Windows.h>

struct Fraction
{
	double first;
	int second;
	void Init(double, int);
	void Read();
	double Element();
};
