#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
#pragma warning(disable : 4996)
#define LEN 100

using namespace std;

// Функция С++
int FirstStyle(string path)
{
	// Создаем файл
	ofstream FileCar(path);

	string car1 = "Chevrolet 2010 1000000 black\n";
	string car2 = "BMW 2001 1500000 gray\n";
	string car3 = "Mercedes-Benz 1996 1200000 black\n";

	FileCar << car1 << car2 << car3;

	FileCar.close();
	
	// Выводим файл в консоль 1-й раз
	ifstream fin1;
	fin1.open(path);

	cout << "C++ style:\n\n";
	if (!fin1.is_open())
	{
		cout << "Ошибка открытия файла!\n";
	}
	else
	{
		string str;

		while (!fin1.eof())
		{
			str = "";
			getline(fin1, str);
			cout << str << "\n";
		}
	}
	fin1.close();

	// Добавляем в файл строчку
	string car4 = "Peugeot 2008 500000 blue\n";

	ofstream out(path, ios::app);
	if (out.is_open())
	{
		out << car4 << "\n";
	}
	out.close();

	// Выводим файл в консоль 2-й раз (измененный)
	ifstream fin2;
	fin2.open(path);

	if (!fin2.is_open())
	{
		cout << "Ошибка открытия файла!\n";
	}
	else
	{
		string str;

		while (!fin2.eof())
		{
			str = "";
			getline(fin2, str);
			cout << str << "\n";
		}
	}
	fin2.close();

	return 0;
}

// Функция С
int SecondStyle(string path)
{
	FILE* FileCar;
	FileCar = fopen("car (C).txt", "w");

	if (FileCar == NULL)
	{
		printf("Ошибка открытия файла!\n");
	}

	fprintf(FileCar, "Chevrolet 2010 1000000 black\n");
	fprintf(FileCar, "BMW 2001 1500000 gray\n");
	fprintf(FileCar, "Mercedes-Benz 1996 1200000 black\n");

	fclose(FileCar);

	// Выводим файл в консоль 1-й раз
	printf("C style:\n\n");
	char line[255];
	FILE* fin1;
	fin1 = fopen("car (C).txt", "r");

	fgets(line, 255, fin1);
	printf("%s", line);

	fgets(line, 255, fin1);
	printf("%s", line);

	fgets(line, 255, fin1);
	printf("%s", line);

	printf("\n");

	fclose(fin1);

	// Добавляем в файл строчку
	FILE* out;
	out = fopen("car (C).txt", "a");

	fprintf(out, "Peugeot 2008 500000 blue\n");

	fclose(out);

	// Выводим файл в консоль 2-й раз (измененный)
	char line2[255];
	FILE* fin2;
	fin2 = fopen("car (C).txt", "r");

	fgets(line2, 255, fin2);
	printf("%s", line2);

	fgets(line2, 255, fin2);
	printf("%s", line2);

	fgets(line2, 255, fin2);
	printf("%s", line2);

	fgets(line2, 255, fin2);
	printf("%s", line2);

	printf("\n");

	fclose(fin2);

	return 0;
}

int main()
{
	FirstStyle("car (C++).txt");
	SecondStyle("car (C).txt");

	return 0;
}