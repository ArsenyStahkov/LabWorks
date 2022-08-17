#include "Salary.h"
using namespace std;

// ����������� ��� ����������
Salary::Salary() {
	fio = "";
	income = 0;
	premium = 0;
	cout << "����������� ��� ����������: " << this << endl;
}

// ����������� � �����������
Salary::Salary(string f, double i, int p) {
	fio = f;
	income = i;
	premium = p;
	cout << "\n����������� � �����������: " << this << endl;
}

// ����������� �����������
Salary::Salary(const Salary& s) {
	fio = s.fio;
	income = s.income;
	premium = s.premium;
	cout << "\n����������� �����������: " << this << endl;
}

// ����������
Salary::~Salary() { cout << "\n����������: " << this << endl; }

// ���������
string Salary::get_fio() { return fio; }
double Salary::get_income() { return income; }
int Salary::get_premium() { return premium; }

// ������������
void Salary::set_fio(string f) { fio = f; }
void Salary::set_income(double k) { income = k; }
void Salary::set_premium(int s) { premium = s; }

// ����� ��� ��������� ���������
void Salary::show() {
	cout << "���: " << fio << endl;
	cout << "�����: " << income << endl;
	cout << "������ (% �� ������): " << premium * income / 100 << endl;
}
