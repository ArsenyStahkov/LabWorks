#include <iostream>
#include "Односвязный список.cpp"
#include "Двусвязный список.cpp"
#include "Бинарное дерево.cpp"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	/*SingleList singleList;
	cout << "Односвязный список (0 - конец списка), для стека:\n\n";
	singleList.GetData(true);
	cout << "\nНаш список (стек):\n\n";
	singleList.PrintData();
	singleList.DeleteFirst();
	cout << "\nОдносвязный список (0 - конец списка), для очереди:\n\n";
	singleList.GetData();
	cout << "\nНаш список (очередь):\n\n";
	singleList.PrintData();
	singleList.InsertDataAfterNegative();
	cout << "\nДобавляем в список после каждого отрицательного элемента 0:\n\n";
	singleList.PrintData();*/

	/*DoubleList doubleList;
	cout << "\n\nДвусвязный список (0 - конец списка):\n\n";
	doubleList.GetData();
	cout << "\nНаш список:\n\n";
	doubleList.PrintData();
	doubleList.DeleteEvenNumbers();
	cout << "\nУдаляем из списка все элементы с четными номерами:\n\n";
	doubleList.PrintData();*/

	Tree tree;
	cout << "\n\nБинарное дерево (0 - конец дерева):\n\n";
	tree.GetData();
	cout << "\nНаше дерево:\n\n";
	tree.PrintData(tree.treetop);
	char n;
	cout << "\nНайдем кол-во элементов, начинающихся с определенного символа. Введите символ:\n\n";
	cin >> n;
	int count = tree.compare(tree.treetop, &n);
	cout << count << " Строки с " << n << endl;

	return 0;
}
