#include <iostream>
#include <set>
using namespace std;

// Определяем тип для работы контейнера
typedef set<double> TSet;
// Итератор
typedef TSet::iterator it;

// Формирование контейнера
TSet MakeSet(int n)
{
	// Пустой контейнер
	TSet s;
	double a;
	for (int i = 0; i < n; i++)
	{
		cout << "?";
		cin >> a;
		// Добавляем значение в контейнер
		s.insert(a);
	}
	cin.get();
	return s;
}

// Вывод контейнера на экран
void PrintSet(TSet s)
{
	it p;
	int i;
	for (p = s.begin(), i = 0; p != s.end(); ++p, i++)
	{
		cout << i << " : " << *p << " \n";
	}
}

// Среднее арифметическое
int Average(TSet v)
{
	double a = 0;
	for (int i = 0; i < v.size(); i++)
	{
		a += v[i];
	}
	int n = v.size();
	return a / n;
}

// Минимальное значение
double Min(TSet v)
{
	it i = v.begin();
	int num, k;
	num = 0;
	k = 0;
	int mi = (*i).second;
	while (i != v.end())
	{
		if (mi > (*i).second)
		{
			mi = (*i).second;
			num = k;
		}
		i++;
		k++;
	}
	return num;
}

// Максимальное значение
double Max(TSet v)
{
	it i = v.begin();
	int num, k;
	num = 0;
	k = 0;
	int ma = (*i).second;
	while (i != v.end())
	{
		if (ma < (*i).second)
		{
			ma = (*i).second;
			num = k;
		}
		i++;
		k++;
	}
	return num;
}

// Сумма мин. и макс. значений
void Sum(TSet &v)
{
	int mi = v[Min(v)];
	int ma = v[Max(v)];
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = v[i] + mi + ma;
	}
}

int main()
{
	int n;
	cout << "N?";
	cin >> n;
	cin.get();
	TSet s = MakeSet(n);
	PrintSet(s);
	cin.get();
	double el = Average(s);
	cout << "Average = " << el << endl;
	s.insert(el);
	PrintSet(s);
	return 0;
}