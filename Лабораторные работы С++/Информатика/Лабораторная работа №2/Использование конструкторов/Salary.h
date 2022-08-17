#include <iostream>
#include <string>
using namespace std;

class Salary {
	string fio;
	double income, premium;
public:
	Salary();
	Salary(string, double, int);
	Salary(const Salary&);
	~Salary();
	string get_fio();
	void set_fio(string);
	double get_income();
	void set_income(double);
	int get_premium();
	void set_premium(int);
	void show();
};
