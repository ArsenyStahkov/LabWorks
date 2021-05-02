#pragma once
#include <string>
#include <iostream>
using namespace std;

// Базовый класс
class Error
{
public:
	virtual void what() {};
};
// Ошибка в индексе вектора
class IndexError :public Error
{
protected:
	string msg;
public:
	IndexError() { msg = "Ошибка индекса\n"; }
	virtual void what() { cout << msg; }
};
// Ошибка в размере вектора
class SizeError :public Error
{
protected:
	string msg;
public:
	SizeError() { msg = "Ошибка длины\n"; }
	virtual void what() { cout << msg; }
};
// Превышение макс. размера
class MaxSizeError :public SizeError
{
protected:
	string msg_;
public:
	MaxSizeError() { SizeError(); msg = "Длина > MAXSIZE\n"; }
	virtual void what() { cout << msg << msg_; }
};
// Удаление из пустого вектора
class EmptySizeError :public SizeError
{
protected:
	string msg_;
public:
	EmptySizeError() { SizeError(); msg_ = "Вектор пустой\n"; }
	virtual void what() { cout << msg << msg_; }
};
// Индекс < 0
class IndexError1 : public IndexError
{
protected:
	string msg_;
public:
	IndexError1() { IndexError(); msg_ = "Индекс <0\n"; }
	virtual void what() { cout << msg << msg_; }
};
// Индекс больше текущего размера вектора
class IndexError2 :public IndexError
{
protected:
	string msg_;
public:
	IndexError2() { IndexError(); msg_ = "Индекс > длины\n"; }
	virtual void what() { cout << msg << msg_; }
};