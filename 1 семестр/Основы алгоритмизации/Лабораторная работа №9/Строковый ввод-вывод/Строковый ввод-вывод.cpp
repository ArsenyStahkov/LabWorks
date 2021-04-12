#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Создаем первый файл
void FirstFile(string path)
{
	ofstream F1(path);

	// Записываем в файл 10 строк
	string first = "a567ASDsdfa\n";
	string second = "12312312\n";
	string third = "234234ewrwe\n";
	string fourth = "AewfwfwfA\n";
	string fifth = "A5645646..A\n";
	string sixth = "jsdfii\n";
	string seventh = "AdsfAAadfasdA\n";
	string eighth = "adsfsadf97A\n";
	string ninth = "sdfsidsoi\n";
	string tenth = "ABDSFA,,SA\n";

	F1 << first << second << third << fourth << fifth << sixth << seventh << eighth << ninth << tenth;

	F1.close();
}

// Создаем второй файл
void SecondFile(string path)
{
	ifstream in("F1.txt");
	ofstream out("F2.txt");
	string strBuf;

	// Записываем необходимые строки
	while (getline(in, strBuf))
	{
		if (strBuf[0] == 'A')
		{
			out << strBuf << "\n";
		}
	}
}

// Находим строчку с самым большим количеством букв 'A'
void StringNumber()
{
	setlocale(LC_ALL, "Rus");

	ifstream f("F2.txt");
	string line;

	char letter = 'A';
	int cnt = 0, lineNumber = 1, max = 0, maxLineNumber = 0;

	while (getline(f, line)) 
	{
		cnt = count(line.begin(), line.end(), letter);
		if (cnt > max) 
		{
			max = cnt; maxLineNumber = lineNumber;
		}
		lineNumber++;
	}
	f.close();

	cout << "Больше всего букв 'A' в " << maxLineNumber << " строке";
	cin.get();
}

int main()
{
	FirstFile("F1.txt");
	SecondFile("F2.txt");
	StringNumber();

	return 0;
}