#include <iostream>
#include <set>
using namespace std;

// Определяем тип для работы контейнера
typedef set<double> TSet;
// Итератор
typedef TSet::iterator it;

// Формирование контейнера
TSet MakeSet(int n) {
	// Пустой контейнер
	TSet v;
	double a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		// Добавляем значение в контейнер
		v.insert(a);
	}
	cout << "\n";
	//cin.get();
	return v;
}

// Вывод контейнера на экран
void PrintSet(TSet v) {
	it p;
	int i;
	for (p = v.begin(), i = 0; p != v.end(); ++p, ++i) { 
		cout << i << " : " << *p << " \n"; 
	}
}

// Добавляем среднее арифметическое в контейнер
TSet Average(TSet v) {
	it p;
	double sum = 0;
	int i;
	for (p = v.begin(), i = 0; p != v.end(); ++p, ++i) {
		sum += *p;
	}
	int size = v.size();
	double avg = sum / size;
	cout << "\nВысчитываем среднее арифметическое и добавляем в контейнер: " << avg << "\n";
	v.insert(avg);

	return v;
}

// Удаление элементов в заданном диапазоне (10-50)
TSet DeleteRange(TSet v) {
	for (auto i = v.begin(); i != v.end(); ++i) {
		if (*i >= 10 && *i <= 50) { 
			v.erase(i); 
		}
	}
	return v;
}

// Минимальное значение
double Min(TSet v) {
	double min = NULL;
	for (auto i = v.begin(); i != v.end(); ++i) {
		if ((min > * i) || (min == NULL)) {
			min = *i;
		}
	}
	return min;
}

// Максимальное значение
double Max(TSet v) {
	double max = NULL;
	for (auto i = v.begin(); i != v.end(); ++i) {
		if (max < *i || (max == NULL)) {
			max = *i;
		}
	}
	return max;
}

// Сумма каждого элемента с мин. и макс. значениями
TSet Sum(TSet v) {
	double min = Min(v);
	double max = Max(v);
	for (auto i = v.begin(); i != v.end(); ++i) {
		v.insert(*i + min + max);
	}
	return v;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	TSet s;
	int n;
	cout << "Введите кол-во значений контейнера: ";
	cin >> n;
	cout << "\n";
	//cin.get();
	cout << "Введите значения (double):\n";
	s = MakeSet(n);
	cout << "Наш контейнер:\n";
	PrintSet(s);
	//cin.get();
	//s.insert();
	s = Average(s);
	PrintSet(s);

	cout << "\nУдаляем элементы в диапазоне 10-50:\n";
	s = DeleteRange(s);
	PrintSet(s);

	cout << "\nДобавляем к каждому элементу сумму макс. и мин. значений:\n";
	s = Sum(s);
	PrintSet(s);

	return 0;
}