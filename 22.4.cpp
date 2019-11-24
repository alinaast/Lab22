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
	string s, h;
	fstream file;
	file.open("C:\\файлы\\22.4.txt");
	if (file)
	{
		getline(file, s, '\0');
		n = s.length();
		for (i = 0; i < n; i++)
			if s[i] == s[i + 1] && s[i] == c)
				for (j = i; j < n; j++)
					s[j] = s[j + 1];
		file << s;
		file.close();
		file.open("C:\\файлы\\22.4.txt", ios::out);
		for (i = 0; i < n; i++)
			if (s[i] == s[i + 1] && s[i] == c)
				for (j = i; j < n; j++)
					s[j] = s[j + 1];
		file << s;
		file.close();
	}
	else
		cout << "Файлы не открыты";
	return 0;
}