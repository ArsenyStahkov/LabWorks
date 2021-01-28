#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string transform_sentence(const string& s)
{
	stringstream ss{ s };
	string word, result;
	while (ss >> word)
	{
		if (count_if(begin(word), end(word), [](unsigned char c) {return !isalnum(c); }) != 0) continue;
		result += word;
		result += " ";
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	string s;
	cout << "Введите любой текст (английский язык): \n";
	getline(cin, s);

	cout << "\nПреобразованные предложения: \n" << transform_sentence(s) << "\n";

	return 0;
}