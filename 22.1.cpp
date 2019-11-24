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
	fstream file;
	char c(32);
	string s;
	int i, n, j, k;
	int m = 0;
	file.open("C:\\файлы\\22.1.txt");
	if (file)
	{
		while (!file.eof())
	    {
			getline(file, s, '\0');
			n = s.length();
			k = s.find(c);
			for (i = k + 1; i <= n; i++)
				file << s[i];
		}
		file.close();
		file.open("C:\\файлы\\22.1.txt", ios::out);
		for (i = k + 1; i <= n; i++)
			file << s[i];
		file.close();
	}
	else
		cout << "Файл не открыт";
	return 0;
}
