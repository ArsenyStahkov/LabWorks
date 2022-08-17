#include "Salary.h"
using namespace std;

// Конструктор без параметров
Salary::Salary() {
	fio = "";
	income = 0;
	premium = 0;
	cout << "Конструктор без параметров: " << this << endl;
}

// Конструктор с параметрами
Salary::Salary(string f, double i, int p) {
	fio = f;
	income = i;
	premium = p;
	cout << "\nКонструктор с параметрами: " << this << endl;
}

// Конструктор копирования
Salary::Salary(const Salary& s) {
	fio = s.fio;
	income = s.income;
	premium = s.premium;
	cout << "\nКонструктор копирования: " << this << endl;
}

// Деструктор
Salary::~Salary() { cout << "\nДеструктор: " << this << endl; }

// Селекторы
string Salary::get_fio() { return fio; }
double Salary::get_income() { return income; }
int Salary::get_premium() { return premium; }

// Модификаторы
void Salary::set_fio(string f) { fio = f; }
void Salary::set_income(double k) { income = k; }
void Salary::set_premium(int s) { premium = s; }

// Метод для просмотра атрибутов
void Salary::show() {
	cout << "ФИО: " << fio << endl;
	cout << "Оклад: " << income << endl;
	cout << "Премия (% от оклада): " << premium * income / 100 << endl;
}
