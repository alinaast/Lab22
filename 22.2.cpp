#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c(32);
	string s, name;
	int i, n, j, k, t;
	cout << "Введите имя файла: ";
	cin >> name;
	cout << "Введите N и K: ";
	cin >> n >> k;
	ofstream file(name);
	if (file)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < k; i++)
			{
				file << "*";
			}
			file << endl;
		}
		file.close();
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < k; i++)
			{
				file << "*";
			}
			file << endl;
		}
		file.close();
	}
	else
		cout << "Файл не открыт";
	return 0;
}