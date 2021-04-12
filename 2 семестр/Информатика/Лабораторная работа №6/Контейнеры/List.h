#pragma once
#include <iostream>
#include <string>

class Iterator
{
	// ������������� �����
	friend class Listing;
public:
	// ����������� ��� ����������
	Iterator() { elem = 0; }
	// ����������� �����������
	Iterator(const Iterator& it) { elem = it.elem; }
	// ������������� �������� ���������
	bool operator == (const Iterator& it) { return elem == it.elem; }
	bool operator != (const Iterator& it) { return elem != it.elem; };
	// ������������� �������� ���������� � ����������
	void operator++ () { ++elem; };
	void operator-- () { --elem; }
	// ������������� �������� �������������
	int& operator *() const { return*elem; }
private:
	int* elem;
};

class Listing
{
public:
	// ����������� � �����������: �������� ������ ��� S ��������� � ��������� �� ��������� k
	Listing(int s, int k = 0);
	// ����������� � �����������
	Listing(const Listing& a);
	// ����������
	~Listing();
	// �������� ������������
	Listing& operator = (const Listing& a);
	// ������ �� �������
	int& operator[] (int index);
	// ���������� ���������
	Listing operator+(const int k);
	// ��������� ����� ������
	//int operator () ();
	// ������������� �������� ����� - ������
	friend ostream& operator << (ostream& out, const Listing& a);
	friend istream& operator >> (istream& in, Listing& a);
	Iterator first() { return beg; }
	Iterator last() { return end; }
private:
	// ������ ������
	int size;
	// ��������� �� ������������ ������ �������� ������
	int* data;
	// ��������� �� ������ ������� ������
	Iterator beg;
	// ��������� �� �������, ��������� �� ���������
	Iterator end;
private:
	int size;
	int* data;
	Iterator beg;
	Iterator end;
};

