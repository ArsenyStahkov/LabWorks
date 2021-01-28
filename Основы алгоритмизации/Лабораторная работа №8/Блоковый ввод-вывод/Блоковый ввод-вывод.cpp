#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

struct Car
{
	char brand[40];
	int year;
	char price[20];
	char color[40];
};

void form_file();
void read_file();
void work_file();
void delete_from_file(int startyear, int endyear);
Car create();

int main()
{
	setlocale(LC_ALL, "Rus");

	int oper;

	do
	{
		// Выводим меню для пользователя
		cout << "Что бы Вы хотели сделать?\n\n";
		cout << "1) Создать файл\n";
		cout << "2) Редактировать файл\n\n";

		cin >> oper;

		cout << "\n";

		// Подключаем функционал для меню
		switch (oper)
		{
		case 1:
			form_file();
			break;
		case 2:
			work_file();
			break;
		default:
			break;
		}

	} while (oper != 3);
}

// Создаем файл Car
Car create()
{
	setlocale(LC_ALL, "Rus");

	cout << "Марка: ";
	char brand[40];
	cin >> brand;

	cout << "Год выпуска: ";
	int year;
	cin >> year;

	cout << "Цена: ";
	char price[20];
	cin.ignore();
	gets_s(price);

	cout << "Цвет: ";
	char color[40];
	cin >> color;

	Car p;
	strcpy(p.price, price);
	strcpy(p.color, color);
	strcpy(p.brand, brand);
	p.year = year;

	return p;
}

void form_file()
{
	setlocale(LC_ALL, "Rus");

	cout << "Количество автомобилей: ";
	int count;
	cin >> count;
	cout << "\n";

	FILE* file = fopen("Car.dat", "wb");
	if (file == NULL)
		exit(1);

	for (int i = 0; i < count; i++)
	{
		Car p = create();

		fwrite(&p, sizeof(Car), 1, file);

		if (ferror(file))
			exit(2);
	}
	fclose(file);
}

// Функция просмотра файла
void read_file()
{
	setlocale(LC_ALL, "Rus");

	FILE* file = fopen("Car.dat", "rb");
	Car p;
	cout << setw(25) << "Марка  " 
		<< setw(10) << "Год выпуска" 
		<< setw(11) << "Цвет" 
		<< setw(20) << "Цена\n";

	while (fread(&p, sizeof(Car), 1, file))
	{
		char a[30] = "";
		strcat(a, p.brand);
		strcat(a, " ");

		cout << setw(25) << a << setw(10) << p.year << setw(11) << p.color << setw(20) << p.price << endl;
	}
	fclose(file);
}

// Функция удаления данных из файла
void delete_from_file(int startyear, int endyear)
{
	setlocale(LC_ALL, "Rus");

	FILE* file = fopen("Car.dat", "rb");
	FILE* tempfile = fopen("temp.dat", "wb");
	Car p;

	while (fread(&p, sizeof(Car), 1, file))
	{
		if (p.year < startyear || p.year > endyear)
		{
			fwrite(&p, sizeof(Car), 1, tempfile);
		}
	}
	fclose(file);
	fclose(tempfile);

	remove("Car.dat");
	rename("temp.dat", "Car.dat");
}

// Функция добавления данных в файл
void add_Car(Car t, int position)
{
	setlocale(LC_ALL, "Rus");

	FILE* file = fopen("Car.dat", "rb");
	FILE* tempfile = fopen("temp.dat", "wb");
	Car p;
	int index = 0;

	while (fread(&p, sizeof(Car), 1, file))
	{
		fwrite(&p, sizeof(Car), 1, tempfile);
		index++;

		if (index == position)
		fwrite(&t, sizeof(Car), 1, tempfile);
	}

	fclose(file);
	fclose(tempfile);

	remove("Car.dat");
	rename("temp.dat", "Car.dat");
}

// Вывод подменю при выборе "редактировать файл" в меню
void work_file()
{
	setlocale(LC_ALL, "Rus");

	int oper;
	do
	{
		cout << "1) Посмотреть список автомобилей\n";
		cout << "2) Удалить автомобили из списка\n";
		cout << "3) Добавить в список автомобили\n\n";

		cin >> oper;

		switch (oper)
		{
		case 1:
			read_file();
			break;
		case 2:
		{
			// Удаляем данные из файла
			int yearDelete;
			cout << "Введите год выпуска, чтобы удалить автомобили, у которых год меньше заданного: ";
			cin >> yearDelete;
			cout << "\n";

			delete_from_file(0, yearDelete - 1);
			break;
		}
		case 3:
		{
			// Добавляем данные в начало файла
			cout << "\n";
			int position = 1;

			Car p = create();
			add_Car(p, position);
			break;
		}
		}
	} while (oper != 0);
}