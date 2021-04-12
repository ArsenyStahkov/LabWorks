#include <iostream>
#include "fraction.h"
using namespace std;

// Инициализация полей структуры
void fraction::Init(double F, int S)
{
	first = F, second = S;
}

// Чтение значений полей структуры
void fraction::Read()
{
	cout << "\nВведите первое число: ";
	cin >> first;
	cout << "\nВведите второе число: ";
	cin >> second;
}

// Вычисление j-го элемента прогрессии
double fraction::Element()
{
	return first * second;
}