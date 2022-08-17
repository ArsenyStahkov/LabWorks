#pragma once
#include <string>
#include <iostream>
using namespace std;

// ������� ���������
struct Error {
	virtual void what() {};
};

// ������ � ������� �������
struct IndexError : public Error {
	IndexError() { msg = "������ �������\n"; }
	virtual void what() { cout << msg; }
protected:
	string msg;
};

// ������ � ������� �������
struct SizeError : public Error {
	SizeError() { msg = "������ �����\n"; }
	virtual void what() { cout << msg; }
protected:
	string msg;
};

// ���������� ����. �������
struct MaxSizeError : public SizeError {
	MaxSizeError() { SizeError(); msg = "����� > MAXSIZE\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};

// �������� �� ������� �������
struct EmptySizeError : public SizeError {
	EmptySizeError() { SizeError(); msg_ = "������ ������\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};

// ������ < 0
struct IndexError1 : public IndexError {
	IndexError1() { IndexError(); msg_ = "������ <0\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};

// ������ ������ �������� ������� �������
struct IndexError2 :public IndexError {
	IndexError2() { IndexError(); msg_ = "������ > �����\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};