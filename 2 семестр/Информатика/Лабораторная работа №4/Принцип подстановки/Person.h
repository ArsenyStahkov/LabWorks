#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Person {
	Person();
	virtual ~Person();
	Person(string, int);
	// Конструктор копирования
	Person(const Person&);
	// Селекторы
	string Get_name() { return name; }
	int Get_age() { return age; }
	// Модификаторы
	void Set_name(string);
	void Set_age(int);
	// Перегрузка операции присваивания
	Person& operator=(const Person&);
	// Глобальные операторы-функции ввода-вывода
	friend istream& operator >> (istream& in, Person& c);
	friend ostream& operator << (ostream& out, const Person& c);
protected:
	string name;
	int age;
};