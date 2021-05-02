#pragma once
#include "Pair.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int make_file(const char* f_first)
{
	// Открыть для записи
	fstream stream(f_first, ios::out | ios::trunc);
	// Ошибка открытия файла
	if (!stream)
	{
		return -1;
	}
	int n;
	Pair p;
	cout << "F?";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		stream << p << "\n";
	}
	stream.close();
	return n;
}

int print_file(const char* f_first)
{
	// Открыть для добавления
	fstream stream(f_first, ios::in);
	// Ошибка открытия файла
	if (!stream)
	{
		return -1;
	}
	Pair p;
	int i = 0;
	while (stream >> p)
	{
		cout << p << "\n";
		i++;
	}
	stream.close();
	return i;
}

int del_file(const char* f_first, int k)
{
	// Открыть для записи
	fstream temp("temp ", ios::out);
	// Открыть для чтения
	fstream stream(f_first, ios::in);
	// Ошибка открытия файла
	if (!stream)
	{
		return -1;
	}
	int i = 0;
	Pair p;
	while (stream >> p);
	{
		if (i != k)
			temp << p;
	}
	stream.close();
	temp.close();
	// Удалить старый файл
	remove(f_first);
	// Переименовать temp
	rename("temp", f_first);
	// Количество прочитанных
	return i;
}

int add_file(const char* f_first, int k, Pair pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_first, ios::in);
	if (!stream)
	{
		return -1;
	}
	Pair p;
	int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof()) break;
		i++;
		if (i == k)
		{
			temp << pp;
			l++;
		}
		temp << p;
	}
	stream.close();
	temp.close();
	remove(f_first);
	rename("temp", f_first);
	// Количество добавленных
	return l;
}

int add_end(const char* f_first, Pair pp)
{
	// Открыть для добавления
	fstream stream(f_first, ios::app);
	// Ошибка открытия файла
	if (!stream)
	{
		return -1;
	}
	// Новая запись
	stream << pp;
	return 1;
}

int change_file(const char* f_first, int k, Pair pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_first, ios::in);
	if (!stream)
	{
		return -1;
	}
	Pair p;
	int i = 0, l = 0;
	char x;
	while (stream >> p)
	{
		if (stream.eof()) break;
		i++;
		if (i == k)
		{
			cout << p << " - is changing... Continue[y/n]?\n";
			cin >> x;
			if (x == 'n' || x == 'N') break;
			temp << pp;
			l++;
		}
		else temp << p;
	}
	stream.close();
	temp.close();
	remove(f_first);
	rename("temp", f_first);
	// Количество измененных элементов
	return l;
}
