#include <iostream>

using namespace std;

const int ROW = 5;
const int COL = 5;
int mainArray[ROW][COL];

int MaxSumOfElements(int ourArray)
{
	setlocale(LC_ALL, "Rus");

	int sum = 0;
	int array[COL - 1];
	int max = 0;

	cout << "\nСуммы столбцов:\n";
	// Цикл №1 идет по столбцам (кроме последнего)
	for (int j = 0; j < COL - 1; j++)
	{
		// В начале каждого цикла №2 сбрасываем значение суммы
		sum = 0;

		// Цикл №2 идет по строкам (кроме ненужных)
		for (int i = 0; i < ROW - j - 1; i++)
		{
			// Суммируем каждый элемент в столбце
			sum += mainArray[i][j];
		}

		// Складываем сумму в элемент нового массива
		array[j] = sum;
		cout << array[j] << " ";
	}

	// Находим максимальную сумму
	for (int i = 0; i < COL - 1; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
	}

	cout << "\n\nМаксимальная сумма:\n";
	return max;
}

// Заводим массив со случайными данными
int main()
{
	int firstArray;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			mainArray[i][j] = rand() % 10;
			cout << mainArray[i][j];
		}
		cout << "\n";
	}

	firstArray = MaxSumOfElements(mainArray[0][0]);

	cout << firstArray << "\n";

	return 0;
}
