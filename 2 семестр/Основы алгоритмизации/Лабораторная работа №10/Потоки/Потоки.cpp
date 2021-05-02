#include "Pair.h"
#include <iostream>
#include <fstream>
#include <string>
#include "File_work.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	Pair x;
	cin >> x;
	cout << x;
	Pair y;
	y = x;
	cout << y;

	Pair p, p1, p2;
	int k, c;
	char file_first[30];
	do
	{
		cout << "\n1. Создать файл";
		cout << "\n2. Вывести файл на экран";
		cout << "\n3. Удалить запись для файла";
		cout << "\n4. Добавить запись для файла";
		cout << "\n5. Изменить запись для файла";
		cout << "\n0. Выйти\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "Файл first? ";
			cin >> file_first;
			k = make_file(file_first);
			if (k < 0)
			{
				cout << "Не могу создать файл";
			}
			break;
		case 2: cout << "Файл first? ";
			cin >> file_first;
			k = print_file(file_first);
			if (k == 0)
			{
				cout << "Пустой файл!\n";
			}
			if (k < 0)
			{
				cout << "Невозможно прочитать файл!\n";
			}
			break;
		case 3: cout << "Файл first? "; cin >> file_first;
			int nom;
			cout << "nom?";
			cin >> nom;
			k = del_file(file_first, nom);
			if (k < 0)
			{
				cout << "Невозможно прочитать файл!";
			}
			break;
		case 4: cout << "Файл first number?";
			cin >> file_first;
			cout << "nom?";
			cin >> nom;
			cout << "Новый first number: ";
			cin >> p1;
			k = add_file(file_first, nom, p1);
			if (k < 0)
			{
				cout << "Невозможно прочитать файл!";
			}
			if (k == 0)
			{
				k = add_end(file_first, p1);
			}
			break;
		case 5: cout << "Файл first number?";
			cin >> file_first;
			cout << "nom?";
			cin >> nom;
			cout << "Новый first number:";
			cin >> p2;
			k = change_file(file_first, nom, p2);
			if (k < 0)
			{
				cout << "\nНевозможно прочитать файл!";
			}
			if (k == 0)
			{
				cout << "\nНе такая запись!";
			}
			break;
		}
	} while (c != 0);
}

