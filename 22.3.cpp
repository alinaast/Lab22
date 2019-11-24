#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian")
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch(32);
	string S, H;
	fstream file, file2;
	file.open("C:\\файлы\\22.3.txt");
	file2.open("C:\\файлы\\22.3(2).txt");
	if (file && file2)
	{
	    getline(file, S);
		getline(file2, H);
		file.seekg(ios_base::beg);
		file << H << ch << S;
	}
	else
		cout << "Файлы не открыты";
	return 0;
}