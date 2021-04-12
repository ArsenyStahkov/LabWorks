#include "Function.h"

// ������������� ������
void DataInitialization()
{
	ofstream buf("Buffer.txt");

	if (!buf)
		cout << "������ �������� ��������� �����!/n";

	buf.close();
}

// ���� ������ �������
void DataEntry()
{
	string name;
	string dateOfBirth;
	string address;
	int n;

	cout << "������� ���������� ������: ";
	cin >> n;

	// ��������� �������� ���� � ���������� ������ � ����
	ofstream record("Buffer.txt", ios::app);

	if (record)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "��� (��� ��������): ";
			cin >> name;

			cout << "���� ��������: ";
			cin >> dateOfBirth;

			cout << "�����: ";
			cin >> address;

			record << name << "\n";
			record << dateOfBirth << "\n";
			if (i < n - 1)
			{
				record << address << "\n";
				record << "----------------------\n";
			}
			else
			{
				record << address;
			}

			cout << "----------------------\n";
		}
	}
	else
	{
		cout << "������ �������� �����!\n";
	}
	record.close();
}

// ������ ������
void DataReading(string fileName)
{
	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);

	if (reading)
	{
		if (record)
		{
			string name;
			string dateOfBirth;
			string address;
			int n;

			reading >> n;
			record << n << "\n";

			for (int i = 0; i < n; i++)
			{
				reading >> name;
				reading >> dateOfBirth;
				reading >> address;

				record << name << "\n";
				record << dateOfBirth << "\n";
				if (i < n - 1)
				{
					record << address << "\n";
				}
				else
				{
					record << address;
				}

			}
			cout << "������ �������!\n";
		}
		else
			cout << "������ �������!\n";
	}
	else
		cout << "������ �������� �����!\n";

	// �������� �����
	reading.close();
	record.close();
}

// ����� ������
void Print()
{
	ifstream reading("Buffer.txt");

	if (reading)
	{
		string name;
		string dateOfBirth;
		string address;
		int n;

		cout << "������� ���������� ������: ";
		cin >> n;
		cout << "\n";

		for (int i = 0; i < n; i++)
		{
			cout << "������ � �" << i + 1 << "\n";

			reading >> name;
			cout << "���: " << name << "\n";

			reading >> dateOfBirth;
			cout << "���� ��������: " << dateOfBirth << "\n";

			reading >> address;
			cout << "�����: " << address << "\n";

			cout << "----------------------\n";
		}
	}
	else
	{
		cout << "������ �������� �����!\n";
	}

	reading.close();
}

// ������� ������
bool DataCleaning()
{
	bool clear = false;

	fstream buf("Buffer.txt", ios::out);

	if (!buf)
	{
		cout << "������ �������� ��������� �����!\n";
	}

	buf.clear();

	if (buf.peek() == EOF)
	{
		clear = true;
	}
	else
	{
		clear = false;
	}

	buf.close();

	return clear;
}

// ��������� ������
void DataChange()
{
	Copy();

	ifstream reading("Buffer2.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading)
	{
		if (record)
		{
			string name;
			string dateOfBirth;
			string address;
			int n, n2;

			reading >> n;

			cout << "�������� ����� ����������� �������� (�� 1 �� " << n << "): ";
			cin >> n2;
			n2--;

			system("cls");

			record << n << "\n";
			if (n2 >= 0 && n2 < n)
			{
				for (int i = 0; i < n; i++)
				{
					if (i != n2)
					{
						reading >> name;
						record << name << "\n";

						reading >> dateOfBirth;
						record << dateOfBirth << "\n";

						reading >> address;
						if (i < n - 1)
						{
							record << address << "\n";
						}
						else
						{
							record << address;
						}
					}
					else
					{
						cout << "������� ������ �1 (���): ";
						cin >> name;

						cout << "������� ������ �2 (���� ��������): ";
						cin >> dateOfBirth;

						cout << "������� ������ �3 (�����): ";
						cin >> address;

						record << name << "\n";
						record << dateOfBirth << "\n";

						if (i < n - 1)
						{
							record << address << "\n";
						}
						else
						{
							record << address;
						}

						reading >> name;
						reading >> dateOfBirth;
						reading >> address;
					}
				}
				cout << "������ ��������!\n";
			}
			else
				"����� ������ �������!";
		}
		else
			cout << "������ �������� �����!\n";
	}
	else
		cout << "������ �������� ��������� �����!\n";

	record.close();
	reading.close();

	remove("Buffer2.txt");
}

// ����������� ������
void Copy()
{
	ifstream reading("Buffer.txt");
	ofstream record("Buffer2.txt", ios::out);

	if (reading)
	{
		if (record)
		{
			string name;
			string dateOfBirth;
			string address;
			int n;

			reading >> n;
			record << n << "\n";

			for (int i = 0; i < n; i++)
			{
				reading >> name;
				record << name << "\n";

				reading >> dateOfBirth;
				record << dateOfBirth << "\n";

				reading >> address;
				if (i < n - 1)
				{
					record << address << "\n";
				}
				else
				{
					record << address;
				}
			}
		}
		else
			cout << "������ �������� �����!\n";
	}
	else
		cout << "������ �������� ��������� �����!\n";

	record.close();
	reading.close();
}

// ���-�� ������ �� �����
int AmountOfData()
{
	ifstream buf("Buffer.txt");
	int n;

	if (buf)
	{
		buf >> n;
	}
	else
	{
		cout << "������ �������� ��������� �����!\n";
	}

	buf.close();

	return n;
}

// �������� ������
void DeleteData()
{
	Copy();

	ifstream reading("Buffer2.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading)
	{
		if (record)
		{
			string name;
			string dateOfBirth;
			string address;
			int n, n2;

			reading >> n;
			int b = n - 1;
			cout << "�������� ����� ����������� �������� �� 1 �� " << n << "): ";
			cin >> n2;
			n2--;

			system("cls");

			if (n2 >= 0 && n2 < n)
			{
				for (int i = 0; 1 < n; i++)
				{
					if (i != n2)
					{
						reading >> name;
						record << name << "\n";

						reading >> dateOfBirth;
						record << dateOfBirth << "\n";

						reading >> address;
						if (i < n - 1)
						{
							record << address << "\n";
						}
						else
						{
							record << address;
						}
					}
					else
					{
						reading >> name;
						reading >> dateOfBirth;
						reading >> address;
					}
				}
				cout << "������ �������!\n";
			}
			else
				cout << "����� ������ �������!\n";
		}
		else
			cout << "������ �������� �����!\n";
	}
	else
		cout << "������ �������� ��������� �����!\n";

	record.close();
	reading.close();

	remove("Buffer2.txt");
}

// ���������� ������
void AddData()
{
	string name;
	string dateOfBirth;
	string address;
	int n = AmountOfData() + 1;

	ofstream record("Buffer.txt", ios::app);
	ofstream record2("Buffer.txt", ios::out | ios::in);

	if (record2)
	{
		record2 << n << "\n";
	}
	else
	{
		cout << "������ �������� ��������� �����!\n";
	}

	if (record)
	{
		record << "\n";

		cout << "��� (��� ��������): ";
		cin >> name;

		cout << "���� ��������: ";
		cin >> dateOfBirth;

		cout << "�����: ";
		cin >> address;

		record << "----------------------\n";
		record << name << "\n";
		record << dateOfBirth << " ���.\n";
		record << address << "\n";
	}
	else
		cout << "������ �������� �����!\n";

	record.close();
	record2.close();
}

// ���������� ������
void SaveData(string fileName)
{
	ifstream reading("Buffer.txt");
	ofstream record(fileName, ios::out);

	if (reading)
	{
		if (record)
		{
			string name;
			string dateOfBirth;
			string address;
			int n;

			reading >> n;
			record << n << "\n";

			for (int i = 0; i < n; i++)
			{
				reading >> name;
				record << name << "\n";

				reading >> dateOfBirth;
				record << dateOfBirth << "\n";

				reading >> address;
				if (i < n - 1)
				{
					record << address << "\n";
				}
				else
				{
					record << address;
				}
			}
			cout << "������ ��������� � �����" << fileName << "\n";
		}
		else
			cout << "������ �������� ��������� �����!\n";
	}
	else
		cout << "������ �������� �����!\n";

	record.close();
	reading.close();
}