#pragma once
#include "Pair.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int make_file(const char* f_first) {
	// ������� ��� ������
	fstream stream(f_first, ios::out | ios::trunc);
	// ������ �������� �����
	if (!stream) { return -1; }
	cout << "\n���� ������!\n";
	stream.close();
	return 0;
}

int print_file(const char* f_first) {
	// ������� ��� ����������
	fstream stream(f_first, ios::in);
	// ������ �������� �����
	if (!stream) { return -1; }
	stream.close();
	return 0;
}

int del_file(const char* f_first, int k) {
	// ������� ��� ������
	fstream temp("temp ", ios::out);
	// ������� ��� ������
	fstream stream(f_first, ios::in);
	// ������ �������� �����
	if (!stream) { return -1; }
	stream.close();
	temp.close();
	// ������� ������ ����
	remove(f_first);
	// ������������� temp
	rename("temp", f_first);
	return 0;
}

int add_file(const char* f_first, int k, Pair pp) {
	fstream temp("temp", ios::out);
	fstream stream(f_first, ios::in);
	if (!stream) { return -1; }
	Pair p;
	int i = 0, l = 0;
	while (stream >> p) {
		if (stream.eof()) break;
		i++;
		if (i == k) { temp << pp; l++; }
		temp << p;
	}
	stream.close();
	temp.close();
	remove(f_first);
	rename("temp", f_first);
	// ���������� �����������
	return l;
}

int add_end(const char* f_first, Pair pp) {
	// ������� ��� ����������
	fstream stream(f_first, ios::app);
	// ������ �������� �����
	if (!stream) { return -1; }
	// ����� ������
	stream << pp;
	return 1;
}

int change_file(const char* f_first, int k, Pair pp) {
	fstream temp("temp", ios::out);
	fstream stream(f_first, ios::in);
	if (!stream) { return -1; }
	Pair p;
	int i, l;
	i = 0; 
	l = 0;
	char x;
	while (stream >> p) {
		if (stream.eof()) break;
		i++;
		if (i == k) {
			cout << p << " - is changing... ����������?[y/n]\n";
			cin >> x;
			if (x == 'n' || x == 'N') break;
			temp << pp;
			l++;
		}
		else temp << p;
	}
	stream.close();
	temp.close();
	remove(f_first);
	rename("temp", f_first);
	// ���������� ���������� ���������� ���������
	return l;
}
