// Пишем основной файл
#include "Functions.h"

using namespace std;

int stateMenu;
void Menu()
{
	cout << "Веберите действие:\n\n"
		<< "(0) Выйти из программы\n"
		<< "(1) Ввести данные\n"
		<< "(2) Показать данные\n"
		<< "(3) Измененить данные\n"
		<< "(4) Удалить данные\n"
		<< "(5) Добавить данные\n"
		<< "(6) Сохранить данные\n\n"
		<< "Ваш выбор: ";
	cin >> stateMenu;
}

/*
		Данные:
		Фамилия Имя Отчество
		Сумма кредита
		Вид кредита
		Срок, на который выдается кредит
*/

int main()
{ 
	// Ввод и вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DataInitialization();

	Menu();

	int actions;
	string fileName;

	while (stateMenu != 0)
	{
		switch (stateMenu)
		{
		case 1:
			// Чистим консоль
			system("cls");

			cout << "Ввод вручную (1) или из файла (0)? ";
			cin >> actions;

			system("cls");

			if (actions == 1)
			{
				// Ввод вручную
				DataEntry();
			}
			else
			{
				cout << "Введите название файла: ";
				cin >> fileName;

				DataReading(fileName);
			}

			system("pause");
			system("cls");
			Menu();
			break;

		case 2:
			system("cls");

			Print();

			system("pause");
			system("cls");
			Menu();
			break;

		case 3:
			system("cls");

			DataChange();

			system("pause");
			system("cls");
			Menu();
			break;

		case 4:
			system("cls");

			DeleteData();

			system("pause");
			system("cls");
			Menu();
			break;

		case 5:
			system("cls");

			AddData();

			system("pause");
			system("cls");
			Menu();
			break;

		case 6:
			system("cls");

			cout << "Введите название файла: ";
			cin >> fileName;

			system("cls");

			SaveData(fileName);

			system("pause");
			system("cls");
			Menu();
			break;

		default:
			cout << "Пункт меню выбран неверно!\n";
		}
	}

	system("cls");
	if (DataCleaning())
	{
		cout << "Данные очищены\n";
	}
	else
	{
		cout << "Данные не очищены!\n";
	}

	cout << "Работа завершена\n";

	return 0;
}
