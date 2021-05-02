#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

// Определение типа работы с вектором
typedef list<double>Listing;
// Формирование вектора
Listing MakeList(double n)
{
	Listing l;
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 100 - 50;
		// Добавляем а в конец вектора
		l.push_back(a);
	}
	return l;
}

// Печать вектора
void PrintVector(Listing l)
{
	for (int i = 0; i < l.size(); i++)
	{
		cout << l[i] << " ";
	}
	cout << endl;
}

// Нахождение среднего значения
double Average(Listing l)
{
	double a = 0;
	for (int i = 0; i < l.size(); i++)
	{
		a += l[i];
	}
	int n = l.size();
	return a / n;
}

// Добавление среднего значения в конец списка
void AddValue(Listing& l, double el)
{
	l.insert(l.begin() + l.size(), el);
}

// Поиск минимального элемента
int Min(Listing l)
{
	int mi = l[0], n = 0;
	for (int i = 0; i < l.size(); i++)
	{
		if (mi > l[i])
		{
			mi = l[i];
			n = i;
		}
	}
	return n;
}

// Поиск максимального элемента
int Max(Listing l)
{
	int ma = l[0], n = 0;
	for (int i = 0; i < l.size(); i++)
	{
		if (ma < l[i])
		{
			ma = l[i];
			n = i;
		}
	}
	return n;
}

// Сложение каждого элемента с суммой мин. и макс. значений
void Sum(Listing& l)
{
	double mi = Min(l);
	double ma = Max(l);
	for (int i = 0; i < l.size(); i++)
	{
		l[i] = l[i] + l[mi] + l[ma];
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	try
	{
		list<double> l;
		list<double>::iterator vi = l.begin();
		// Формирование вектора
		double n;
		cout << "Введите длину списка";
		cin >> n;
		l = MakeList(n);
		PrintVector(l);
		// Вычисление среднего
		double el = Average(l);
		// Добавление элемента в конец и вывод на экран
		int pos = 3;
		AddValue(l, el);
		PrintVector(l);
		// К каждому элементу прибавить сумму макс. и мин. значения
		Sum(l);
		PrintVector(l);
	}
	catch (int)
	{
		cout << "Ошибка!\n";
	}
}
