#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	// Инициализируем генератор случайных чисел rand
	srand((int)time(0));
	int n, m;

	// Запрашиваем длину массива
	cout << "Введите количество строк:\n";
	cin >> n;
	cout << "\n";

	cout << "Введите количество столбцов:\n";
	cin >> m;
	cout << "\n";

	// Выделяем память для массива
	double** a = new double* [n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new double[m];
	}

	// Заполняем массив случайными числами и выводим его
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			// Генератор случайных чисел rand
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << "\n\n";
	}
	
	// Задержка экрана консоли для продолжения работы
	system("pause");

	// Удаляем столбец и строку с максимальным элементом
	int max_i = 0, max_j = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = max_j; j < m - 1; j++)
			a[i][j] = a[i][j + 1];
	}

	for (int i = max_i; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}

	// Выводим измененный массив
	cout << "\nМассив с удаленным столбцом и строкой:\n\n";

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n\n";
	}

	system("pause");
	cin.get();

	// Очищаем память
	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
	}
	delete[]a;
	cout << "\n";

	system("pause");

	return 0;
}