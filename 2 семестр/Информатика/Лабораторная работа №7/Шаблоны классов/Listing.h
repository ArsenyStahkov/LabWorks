#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;

// T - �������� �������
template <class T>
struct Listing {
	// ����������� � �����������: �������� ������ ��� s ��������� � ��������� �� ��������� k
	Listing(int s, T k);
	// ����������� � �����������
	Listing(const Listing<T>& a);
	// ����������
	~Listing();
	// ������������
	Listing& operator = (const Listing<T>& a);
	// ������ �� �������
	T& operator[] (int index);
	// ���������� ����� ������
	int operator () ();
	// ������������� �������� ����� - ������
	friend ostream& operator << <> (ostream& out, const Listing<T>& a);
	friend istream& operator >> <> (istream& in, Listing<T>& a);
private:
	int size;
	T* data;
};

template <class T>
Listing<T>::Listing(int s, T k) {
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
}

template <class T>
Listing<T>::Listing(const Listing& a) {
	size = a.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
}

template <class T>
Listing<T>::~Listing() {
	delete[] data;
	data = 0;
}

template <class T>
Listing<T>& Listing<T>::operator = (const Listing<T>& a) {
	if (this == &a)
		return *this;
	size = a.size;
	if (data != 0)
		delete[] data;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	return *this;
}

template <class T>
T& Listing<T>::operator[] (int index) {
	if (index < size)
		return data[index];
	else
		cout << "\n������! ������ ������, ��� ����� ������";
}

// ��������������� ��������� ������ �������
template <class T>
int Listing<T>::operator() () { return size; }

template <class T>
ostream& operator << (ostream& out, const Listing<T>& a) {
	for (int i = 0; i < a.size; ++i)
		out << a.data[i] << " ";
	return out;
}

template <class T>
istream& operator >> (istream& in, Listing<T>& a) {
	for (int i = 0; i < a.size; ++i)
		in >> a.data[i];
	return in;
}