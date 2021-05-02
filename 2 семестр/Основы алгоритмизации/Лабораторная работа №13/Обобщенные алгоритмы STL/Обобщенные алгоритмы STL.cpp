#include "C:\Users\arsenii.stashkov\Documents\Политех\Лабораторные работы C++\2 семестр\Основы алгоритмизации\Лабораторная работа №11\Task2\Pair.h"
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

typedef list <Pair> TList;
Pair a;

// Формируем список
TList MakeList(int n)
{
	Pair a;
	TList l;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		l.push_back(a);
	}
	return l;
}

// Выводим список на экран
void PrintList(TList l)
{
	for (int i = 0; i < l.size(); i++)
	{
		cout << l[i] << endl;
	}
	cout << endl;
}

// Находим среднее значение в списке
Pair Average(TList l)
{
	Pair a = l[0];
	for (int i = 1; i < l.size(); i++)
	{
		a = a + l[i];
	}
	int n = l.size();
	return a / n;
}

// Добавляем среднее значение в конец контейнера
void AddValue(TList l, Pair el)
{
	l.insert(l.begin() + l.size(), el);
}

// Сумма максимального и минимального элементов
void Sum(Pair& p, Pair a, Pair b)
{
	p = p + a + b;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int n;
	cout << "Введите длину списка: \n";
	cin >> n;
	TList l;
	l = MakeList(n);
	PrintList(l);
	TList::iterator i;
	TList::iterator k;
	Pair el = Average(l);
	cout << "Среднее значение: " << el << endl;
	AddValue(l, el);
	PrintList(l);
	cout << "Сумма: \n";
	i = max_element(l.begin(), l.end());
	k = min_element(l.begin(), l.end());
	for_each(l.begin(), l.end(), Sum);

	return 0;
}
