#pragma once
#include <string>
#include <iostream>
using namespace std;

// Базовая структура
struct Error {
	virtual void what() {};
};

// Ошибка в индексе вектора
struct IndexError : public Error {
	IndexError() { msg = "Ошибка индекса\n"; }
	virtual void what() { cout << msg; }
protected:
	string msg;
};

// Ошибка в размере вектора
struct SizeError : public Error {
	SizeError() { msg = "Ошибка длины\n"; }
	virtual void what() { cout << msg; }
protected:
	string msg;
};

// Превышение макс. размера
struct MaxSizeError : public SizeError {
	MaxSizeError() { SizeError(); msg = "Длина > MAXSIZE\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};

// Удаление из пустого вектора
struct EmptySizeError : public SizeError {
	EmptySizeError() { SizeError(); msg_ = "Вектор пустой\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};

// Индекс < 0
struct IndexError1 : public IndexError {
	IndexError1() { IndexError(); msg_ = "Индекс <0\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};

// Индекс больше текущего размера вектора
struct IndexError2 :public IndexError {
	IndexError2() { IndexError(); msg_ = "Индекс > длины\n"; }
	virtual void what() { cout << msg << msg_; }
protected:
	string msg_;
};