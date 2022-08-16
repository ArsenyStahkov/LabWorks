#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
#pragma warning(disable : 4996)
using namespace std;

// Выводим файл в консоль
void PrintFile1(string path) {
	ifstream file;
	file.open(path);

	if (!file.is_open()) {
		cout << "Ошибка открытия файла!\n";
	}
	else {
		string str;

		while (!file.eof()) {
			str = "";
			getline(file, str);
			cout << str << "\n";
		}
	}
	file.close();
}

void AddString1(string path, string newString) {
	ofstream out(path, ios::app);
	if (out.is_open()) {
		out << newString << "\n";
	}
	out.close();
}

// Удаляем элементы, у которых год выпуска меньше заданного
void DeleteLessNotes1(string path, int nLessThan) {
	ifstream file(path);
	ofstream out(path);

	int a = 0;

	while (file >> a) {
		if (a < nLessThan) {
			string s = to_string(a);
			out << s << endl;
		}
	}

	file.close();
	out.close();
}

// Функция С++
int FirstStyle(string path)
{
	// Создаем файл
	ofstream FileCar(path);

	string car1 = "Chevrolet\n2010\n1000000\nblack\n\n";
	string car2 = "BMW\n2001\n1500000\ngray\n\n";
	string car3 = "Mercedes-Benz\n1996\n1200000\nblack\n\n";

	FileCar << car1 << car2 << car3;
	FileCar.close();
	cout << "C++ style:\n\n";
	PrintFile1(path);

	// Добавляем в файл строчку
	string car4 = "Peugeot\n2008\n500000\nblue\n";
	AddString1(path, car4);
	cout << "--------------------\n\n";
	PrintFile1(path);

	// Удаляем элементы, у которых год выпуска меньше 2000
	DeleteLessNotes1(path, 2000);
	cout << "--------------------\n\n";
	PrintFile1(path);

	return 0;
}

// Функция С
int SecondStyle(string path)
{
	FILE* FileCar;
	FileCar = fopen("car (C).txt", "w");

	if (FileCar == NULL) {
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