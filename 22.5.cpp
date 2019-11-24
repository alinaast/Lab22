#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c(32);
	int n, i, j;
	int k = 0;
	int a = 0;
	string s;
	fstream file;
	file.open("C:\\файлы\\22.5.txt");
	if (file)
	{
    	getline(file, s, '\0');
		n = s.length();
		for (i = 0; i < n; i++)
			if (s[i] == c)
			{
				k++;
				if (k == 5)
					a++;
			}
			else
				k = 0;
		file.close();
		file.open("C:\\файлы\\22.5.txt", ios::out);
		for (i = 0; i < n; i++)
			if (s[i] == c)
			{
    			k++;
				if (k == 5)
					a++;
			}
			else
				k = 0;
		file.close();
	}
	else
		cout << "Файлы не открыты";
	cout << "Количество абзацев: " << a / 2;
	return 0;
}