#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int array[100];
	int arrayLength;

	cout << "Пожалуйста, введите количество симоволов в вашем массиве" << endl;
	cin >> arrayLength;

	while (arrayLength < 2 || arrayLength > 99)
	{
		cout << "Значение должно быть не меньше, чем 2 и не больше, чем 99!" << endl;
		cin >> arrayLength;
	}

	// Указываем значения в массиве
	for (int i = 0; i < arrayLength; i++)
	{
		array[i] = i;
	}

	// Выводим массив, начиная с K-го элемента до K-1 элемента (по кольцу влево)
	cout << "\n1)  ";
	for (int i = arrayLength - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
	cout << array[arrayLength - 1] << " " << array[arrayLength - 2];

	// Смещаем массив на одно значение влево и удаляем последний элемент
	for (int j = 0; j < arrayLength; j++)
	{
		array[j] = array[j + 1];
	}
	array[arrayLength] = NULL;

	// Выводим массив, начиная с K-го элемента до K+1 элемента (по кольцу вправо)
	cout << "\n\n2)  " << array[arrayLength - 2];
	for (int k = 0; k < arrayLength - 2; k++)
	{
		cout << " " << array[k];
	}
	cout << " " << array[arrayLength] << endl;

	return 0;
}
