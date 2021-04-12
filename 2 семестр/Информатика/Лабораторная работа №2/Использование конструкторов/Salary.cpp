#include "Salary.h"
using namespace std;

// Конструктор без параметров
Salary::Salary()
{
	fio = "";
	income = 0;
	prize = 0;
	cout << "Конструктор без параметров: " << this << endl;
}

// Конструктор с параметрами
Salary::Salary(string N, double K, int S)
{
	fio = N;
	income = K;
	prize = S;
	cout << "\nКонструктор с параметрами: " << this << endl;
}

// Конструктор копирования
Salary::Salary(const Salary& t)
{
	fio = t.fio;
	income = t.income;
	prize = t.prize;
	cout << "\nКонструктор копирования: " << this << endl;
}

// Деструктор
Salary::~Salary()
{
	cout << "\nДеструктор: " << this << endl;
}

// Селекторы
string Salary::get_fio()
{
	return fio;
}
double Salary::get_income()
{
	return income;
}
int Salary::get_prize()
{
	return prize;
}

// Модификаторы
void Salary::set_fio(string N)
{
	fio = N;
}
void Salary::set_income(double K)
{
	income = K;
}
void Salary::set_prize(int S)
{
	prize = S;
}

// Метод для просмотра атрибутов
void Salary::show()
{
	cout << "ФИО: " << fio << endl;
	cout << "Оклад: " << income << endl;
	cout << "Премия (% от оклада): " << prize * income / 100 << endl;
}