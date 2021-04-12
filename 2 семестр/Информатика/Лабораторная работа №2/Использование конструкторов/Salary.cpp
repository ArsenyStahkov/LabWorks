#include "Salary.h"
using namespace std;

// ����������� ��� ����������
Salary::Salary()
{
	fio = "";
	income = 0;
	prize = 0;
	cout << "����������� ��� ����������: " << this << endl;
}

// ����������� � �����������
Salary::Salary(string N, double K, int S)
{
	fio = N;
	income = K;
	prize = S;
	cout << "\n����������� � �����������: " << this << endl;
}

// ����������� �����������
Salary::Salary(const Salary& t)
{
	fio = t.fio;
	income = t.income;
	prize = t.prize;
	cout << "\n����������� �����������: " << this << endl;
}

// ����������
Salary::~Salary()
{
	cout << "\n����������: " << this << endl;
}

// ���������
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

// ������������
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

// ����� ��� ��������� ���������
void Salary::show()
{
	cout << "���: " << fio << endl;
	cout << "�����: " << income << endl;
	cout << "������ (% �� ������): " << prize * income / 100 << endl;
}