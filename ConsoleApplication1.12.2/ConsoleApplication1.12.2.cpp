﻿// ConsoleApplication1.12.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 12. Задача 2. Быки и коровы.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string numberOne, numberTwo;
	int bools=0, cows=0, i, j;
	cout << "\nВведите задуманное четырёхзначное число ";
	cin >> numberOne;
	for (i = 0; i < numberOne.length(); i++) {
		if (numberOne[i] < '0' && numberOne[i]>'9' && i > 3) {
			cout << "\nЗадумайте правильно число. "; break;
		}
	}
	while(bools<4){
		cout << "\nВведите второе четырёхзначное число ";
	    cin>> numberTwo;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == j && numberOne[i] == numberTwo[j]) {
				bools++; break;
			}
			if (i != j && numberOne[i] == numberTwo[j]&& numberOne[i]!=numberOne[i+1]) {
				cows++; break;
				cout << "\n" << i << " " << j;
			}
			else if ((bools + cows) > 4) {
				cout << "\nВы ошиблись."; break;
			}
			else if (j > 3) {
				cout << "\nВторое число должно быть четырёхзначным."; break;
			}
		}
		}
	if (bools == 4) {
		cout << "\n             ПОЗДРАВЛЯЕМ!";
		cout << "\n           Вы угадали число."; break;
	}
	cout << "\nВ Вашем числе " << bools << " Быка и " << cows << " коровы.";
	bools = 0; cows = 0;
	}
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
