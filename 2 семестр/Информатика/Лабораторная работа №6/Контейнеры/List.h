#pragma once
#include <iostream>
#include <string>

class Iterator
{
	// Дружественный класс
	friend class Listing;
public:
	// Конструктор без параметров
	Iterator() { elem = 0; }
	// Конструктор копирования
	Iterator(const Iterator& it) { elem = it.elem; }
	// Перегруженные операции сравнения
	bool operator == (const Iterator& it) { return elem == it.elem; }
	bool operator != (const Iterator& it) { return elem != it.elem; };
	// Перегруженные операции инкремента и декремента
	void operator++ () { ++elem; };
	void operator-- () { --elem; }
	// Перегруженная операция разыменования
	int& operator *() const { return*elem; }
private:
	int* elem;
};

class Listing
{
public:
	// Конструктор с параметрами: выделяет память под S элементов и заполняет их значением k
	Listing(int s, int k = 0);
	// Конструктор с параметрами
	Listing(const Listing& a);
	// Деструктор
	~Listing();
	// Оператор присваивания
	Listing& operator = (const Listing& a);
	// Доступ по индексу
	int& operator[] (int index);
	// Добавление константы
	Listing operator+(const int k);
	// Получение длины списка
	//int operator () ();
	// Перегруженные операции ввода - вывода
	friend ostream& operator << (ostream& out, const Listing& a);
	friend istream& operator >> (istream& in, Listing& a);
	Iterator first() { return beg; }
	Iterator last() { return end; }
private:
	// Размер списка
	int size;
	// Указатель на динамический массив значений списка
	int* data;
	// Указатель на первый элемент списка
	Iterator beg;
	// Указатель на элемент, следующий за последним
	Iterator end;
private:
	int size;
	int* data;
	Iterator beg;
	Iterator end;
};

