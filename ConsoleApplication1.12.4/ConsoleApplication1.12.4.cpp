﻿// ConsoleApplication1.12.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 12. Задача 4. Подсчёт количества слов.

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string s, str = " ";
	int count = 0, i;
	cout << "\nВведите строку ";
	getline(cin, s);
	for (i = 0; i < s.length() - 1; i++) {
		 if ((s[i] != str[0]) && (s[i + 1] == str[0]) && (i < s.length() - 2)) {
			count++;
		}
	}
	if (count == 0) {
		count = -1;
	}
		cout << "\nВ Вашей строке " << count + 1 << " слов.";
	
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
